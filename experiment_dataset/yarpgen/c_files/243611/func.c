/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243611
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 3002709227U)) ? (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                            {
                                var_19 += ((/* implicit */signed char) 1292258072U);
                                var_20 = ((((/* implicit */_Bool) max((arr_10 [i_3] [i_4 + 1] [(unsigned char)7] [i_4] [i_2]), (arr_10 [i_3] [i_4 + 1] [(unsigned short)10] [i_4] [i_2])))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_16))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(short)4] [i_2])))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_2])))), (((/* implicit */int) var_8))))));
                                var_21 = ((/* implicit */unsigned int) ((signed char) min((arr_6 [i_1] [i_2]), (arr_6 [i_0] [i_2]))));
                                arr_12 [7LL] [i_2] [i_2] [i_3] [7LL] [i_0] [i_3] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) arr_9 [i_0] [i_4 - 2] [i_2] [i_3] [i_2] [i_2] [i_1])), (var_10)))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)216))))), ((+(var_2))))))));
                            }
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)55)) ? (29419746) : (((/* implicit */int) var_7)))), (1727458583)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) : (arr_3 [(unsigned char)6] [i_1] [i_3]))))));
                            var_24 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 7902857674456401199ULL)) ? (-1) : (((/* implicit */int) (short)0)))));
                            var_25 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [7])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))), ((-(1292258072U)))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_8);
    var_28 = ((/* implicit */_Bool) (+(((unsigned int) max((var_1), (var_9))))));
}
