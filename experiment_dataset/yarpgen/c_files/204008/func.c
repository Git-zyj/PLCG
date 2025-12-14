/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204008
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
    var_17 *= var_8;
    var_18 &= ((/* implicit */_Bool) -1024021777108704371LL);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (max((var_3), (((/* implicit */int) ((unsigned short) var_16))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_14))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) max((arr_2 [i_1 + 1]), (((/* implicit */unsigned int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */short) (_Bool)1);
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_9 [i_2])), (var_6))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_4)))) || (((/* implicit */_Bool) ((unsigned char) arr_0 [(short)7] [i_2])))))))));
                    }
                }
            } 
        } 
    } 
}
