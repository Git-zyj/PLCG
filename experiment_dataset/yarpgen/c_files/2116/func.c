/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2116
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (-9218343023089354612LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26304))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])));
                arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-59))));
                arr_7 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)6])) >= (((var_14) | (((/* implicit */int) arr_0 [i_0]))))))) > ((+(((/* implicit */int) arr_2 [i_0]))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((((long long int) (unsigned short)7411)), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) max((max(((unsigned short)62189), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_15))))))));
    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)121)), ((short)-6619)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)58)) ? (9218343023089354611LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))));
}
