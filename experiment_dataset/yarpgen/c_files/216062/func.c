/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216062
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((long long int) var_9)) < (((/* implicit */long long int) min((((((/* implicit */_Bool) -4624709978128838486LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))))), (((/* implicit */unsigned int) (unsigned char)117))))))))));
    var_17 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_13))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 3] [i_0 + 3] [i_2] [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)83)) && (((/* implicit */_Bool) ((signed char) 4252097131U)))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-30863)), (623821874U)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)15644)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)31)), ((unsigned char)31))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) 2392544715U);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_14 [i_0] = ((/* implicit */short) min((arr_4 [i_0]), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-30855))))), (((((/* implicit */_Bool) var_7)) ? (3742018997U) : (4294967295U)))))));
                        arr_15 [i_1 + 1] [(signed char)1] [i_1 + 1] [i_0] = min((((/* implicit */unsigned char) (signed char)-1)), (((unsigned char) var_3)));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_19 = (unsigned char)86;
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_15))));
                            var_21 = ((/* implicit */unsigned char) ((arr_4 [i_1 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2])))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) 545205800U);
                            var_23 -= ((/* implicit */signed char) (((-(var_0))) | (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (3U)))));
                            var_24 = ((/* implicit */unsigned char) (~(arr_18 [i_6 - 1] [i_6 - 1] [2U] [i_6 - 1] [i_6 - 1] [i_4])));
                        }
                        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))));
                            var_26 |= ((/* implicit */unsigned int) ((unsigned char) (signed char)127));
                            arr_26 [i_4] [i_4] [i_2] [i_4] [i_0 - 1] = (short)28480;
                            arr_27 [i_7] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_7)));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((16383U) / (1406624566U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (-6841727242247197451LL)));
                        }
                        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)-30834))));
                            arr_31 [i_0] [i_0] [i_4] [i_2] [i_4] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) % (arr_23 [i_4 + 1] [i_4] [i_0 + 3] [i_4] [i_0])));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) arr_17 [i_0] [14U]);
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_5 [i_0 - 1]))));
    }
}
