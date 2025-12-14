/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249713
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_2 [2] [14]))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_5 [(signed char)0] [i_0]))))))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_3 [(unsigned short)2])))) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (max((((/* implicit */unsigned long long int) var_17)), (arr_7 [12U] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) max((arr_1 [i_3]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */signed char) var_15)))))) : (max((var_11), (((/* implicit */unsigned int) arr_9 [7U] [i_0] [i_2 - 2] [i_3 - 2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))))))));
                                arr_14 [i_1] [i_1] [i_1] [i_1] [14U] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (arr_7 [i_4] [i_4] [15ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_11))) ? (arr_7 [i_3 + 1] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_3 [(signed char)5]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) arr_8 [5U] [5U] [12LL]);
                    arr_15 [i_1] [(_Bool)1] [12U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_12), (((/* implicit */unsigned long long int) var_2)))) % (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 269202082U)) ? (1392341836U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1]), (arr_0 [i_2 + 1]))))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)1]))) : (var_12)))))));
                    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (arr_2 [i_2 - 1] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_2 - 1])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_3 [i_2 - 1]))))));
                }
                var_22 += ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((long long int) var_5))), (max((var_1), (((/* implicit */unsigned long long int) arr_4 [i_0])))))), (max((((unsigned long long int) var_2)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_7);
}
