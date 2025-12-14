/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50713
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(((((/* implicit */_Bool) (unsigned short)62621)) ? (((/* implicit */int) (short)-4318)) : (2147483647))))) : ((~(var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_2] [i_0] [i_1] = arr_6 [i_0] [i_0] [i_1];
                        var_21 -= ((/* implicit */short) var_4);
                        arr_11 [i_1] [i_1] [i_1] [i_3] = max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (short)-4318))))) * (min((((/* implicit */unsigned int) var_19)), (var_16))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_19)) % (2147483647)))), (2708054322U))));
                        var_22 |= ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (((_Bool)1) ? (2708054322U) : (var_0)))), (arr_7 [i_0] [i_0]))));
                    }
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) -6748013932932316051LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((var_6) << (((((var_10) + (952060914))) - (50)))))))) : (arr_7 [(signed char)14] [i_0]))))));
                }
            } 
        } 
    } 
}
