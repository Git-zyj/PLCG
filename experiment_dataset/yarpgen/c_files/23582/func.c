/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23582
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
    var_10 = ((/* implicit */long long int) max((var_0), (((/* implicit */short) var_7))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max(((((_Bool)1) ? (7220136705049563455LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35873))))), (((/* implicit */long long int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    arr_9 [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58741)))))));
                    var_12 = ((/* implicit */int) var_1);
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 8; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */signed char) var_4);
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [4ULL])) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-64)), (var_7)))) * (((/* implicit */int) (unsigned short)6794))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [6LL]))) * (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_5 - 1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(short)0] [i_0] [i_0]))))))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((min((max((((/* implicit */long long int) var_5)), (arr_3 [i_4]))), (((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_6 [i_0] [i_0]) : (var_1))))) / (((/* implicit */long long int) max((arr_11 [i_0] [i_0] [i_0] [i_1 + 1]), (arr_11 [(unsigned char)8] [i_0] [i_0] [i_1 + 1]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_1] [i_3])) - (((/* implicit */int) arr_8 [i_3] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 + 1] [i_1 - 1])) >= (((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1]))))) : (arr_11 [i_0] [i_0] [i_1] [i_0])));
                }
                for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((-8519300168780324527LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (min((var_2), (((/* implicit */long long int) arr_13 [i_0] [i_1 + 2]))))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [(signed char)1] [i_0] [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) >> (((/* implicit */int) var_6))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 5137083760439259546LL)) ? (-707326927) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_6 + 1] [i_0])) > (((/* implicit */int) var_0)))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_1 + 1] [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_21 [i_0] [1] [i_6 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    arr_26 [i_0] = ((/* implicit */unsigned int) arr_20 [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_16 = var_7;
                        var_17 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) == (((/* implicit */int) arr_4 [i_0] [i_1 - 1]))));
                    }
                }
                var_18 = ((/* implicit */short) arr_13 [i_0] [i_1]);
            }
        } 
    } 
}
