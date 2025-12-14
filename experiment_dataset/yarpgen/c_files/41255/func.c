/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41255
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0 - 1] [i_1] [i_0 + 1]), (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((-(var_5))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0ULL] [(signed char)1]))))))))) : ((((~(var_9))) & (var_9)))));
                arr_5 [i_0] [i_1] [(signed char)8] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1])))), ((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 + 1] [7U] [(short)12] [11LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_4)))) < (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))), (((/* implicit */unsigned long long int) var_9))))));
                            arr_14 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7830)) && (((/* implicit */_Bool) ((long long int) var_2)))));
                            arr_15 [i_0 - 1] [(signed char)10] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_1] [i_2])) ? (arr_4 [0U] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(short)5] [i_3]))))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) arr_0 [i_3]))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2] [i_2 - 1] [13LL] [i_2])) ? ((+(((/* implicit */int) (unsigned short)57720)))) : (((/* implicit */int) arr_6 [i_0 + 1] [i_2 - 1] [i_3 - 1] [i_4]))));
                                arr_18 [i_0] [i_1] [i_2] [(signed char)1] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [6LL] [i_0 - 1])) ? ((+(arr_3 [i_4] [i_2 - 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                                arr_19 [(signed char)9] |= ((/* implicit */short) ((unsigned int) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [0LL] [3ULL] [5] [i_2] [i_4 - 2] [i_2 - 1]))) : (arr_0 [i_1]))), (var_2))));
                                arr_20 [i_0 + 1] [i_0] [4U] [3LL] [i_3 + 1] [i_3 + 1] [i_4 + 1] = ((/* implicit */unsigned int) min((((/* implicit */short) arr_17 [i_4] [i_3 - 1] [i_2 - 1] [i_1] [3U])), (arr_9 [(signed char)9] [i_0 - 1])));
                            }
                            for (signed char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                            {
                                var_20 -= ((/* implicit */unsigned char) (-(max((arr_3 [i_0 + 1] [(signed char)6] [i_2]), (((/* implicit */unsigned int) max((((/* implicit */short) arr_10 [8ULL] [i_2] [i_1])), (arr_1 [i_0 - 1] [5LL]))))))));
                                var_21 = ((/* implicit */signed char) (unsigned short)57705);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                            {
                                arr_27 [i_6] [(unsigned short)2] [i_2 - 1] [5ULL] [i_6] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) % (((int) var_15))));
                                arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_9);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_16)), ((~(((var_4) - (var_15))))))))));
    var_23 -= ((/* implicit */unsigned int) var_14);
}
