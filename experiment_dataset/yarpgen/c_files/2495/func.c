/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2495
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((arr_0 [17LL]), (((/* implicit */unsigned char) (_Bool)1))))) : ((+(((/* implicit */int) (_Bool)1))))))));
                    var_18 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_19 &= ((/* implicit */unsigned int) 17004054374130345721ULL);
                    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), ((short)15193))), (max((((/* implicit */short) arr_0 [i_1])), ((short)127))))))) * (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)-25563)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_16) : (var_0)))) : (7860307529637783028LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
}
