/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50224
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
    var_20 &= ((/* implicit */short) (-((((-(1159638818))) / ((-(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_1])))))) == (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_1])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((((((/* implicit */int) (short)20559)) <= (((/* implicit */int) var_2)))) && ((_Bool)1))) && (((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)125))))))))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_1 [i_0]))));
                    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_1])), (((var_10) | ((-(var_3)))))));
                }
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            arr_14 [i_3] [i_3] [i_1] [i_4] = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_14)) : (arr_0 [i_3 - 1]))) != (((/* implicit */int) var_7)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */long long int) ((((arr_6 [i_1] [i_3 + 1]) && (((/* implicit */_Bool) 4294967281U)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) <= (max((957407803637812412LL), (((/* implicit */long long int) var_0))))))));
                            arr_15 [i_0] [i_1] [i_3] [i_4] &= var_6;
                            var_25 = ((/* implicit */unsigned char) (~((~(arr_10 [i_0] [i_0] [2LL])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
