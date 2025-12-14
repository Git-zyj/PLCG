/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27795
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
    var_12 = ((((/* implicit */int) var_4)) % (((int) (signed char)-108)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_11 [i_2] [15] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)11] [i_1]))) : (arr_1 [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
                    var_13 = ((/* implicit */unsigned char) ((1351175524) ^ (1351175524)));
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_14 = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_1] [i_3]);
                    /* LoopSeq 3 */
                    for (short i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) var_3))), ((unsigned short)59067)))) ? (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))) : ((-(arr_15 [(unsigned char)14] [i_1] [(unsigned char)14] [5ULL]))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_4]) ? (max((((/* implicit */unsigned int) var_1)), (628019016U))) : (((/* implicit */unsigned int) ((1351175524) | (((/* implicit */int) (signed char)82)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63343)) ? (11659960706643523270ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))));
                            arr_18 [i_3] = ((/* implicit */short) ((arr_2 [i_4 + 1]) || (((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4 + 2] [i_4] [i_0]))));
                            arr_19 [i_0] [i_4] [i_3] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_5])) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [3])))));
                            var_17 = ((/* implicit */unsigned long long int) ((signed char) 3913556694383057758ULL));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_18 |= ((/* implicit */short) ((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) arr_3 [i_4 - 3] [i_4 + 2]))))) % (((long long int) 1167834623))));
                            var_19 = ((/* implicit */unsigned char) 3666948280U);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_24 [(signed char)12] [(unsigned short)4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))));
                            var_20 = ((/* implicit */unsigned char) arr_20 [i_0] [i_1] [i_0] [i_4] [i_7]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_28 [i_8] [i_3] [(signed char)14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8739473213566380227ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_5)), ((signed char)78))))) : (((unsigned long long int) arr_17 [i_0] [(unsigned char)9] [i_3] [i_8] [i_3]))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned short) arr_23 [(signed char)18] [i_0] [i_0] [(signed char)8] [i_0]))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        var_22 = ((unsigned char) ((arr_27 [i_0] [14] [5] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_9 + 1] [i_3] [i_3] [2ULL] [i_0])))));
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_27 [i_9] [i_3] [18] [18]);
                        var_23 |= ((((/* implicit */int) (signed char)77)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned short)52646)))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)71)) << (((((/* implicit */int) (unsigned char)178)) - (160)))));
                    }
                }
                var_25 = ((/* implicit */unsigned short) ((signed char) var_1));
            }
        } 
    } 
}
