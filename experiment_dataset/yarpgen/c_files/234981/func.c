/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234981
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((min((6064490390806427779ULL), (((/* implicit */unsigned long long int) (short)31)))), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) : ((+(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((11062239951569725408ULL) >> (((((/* implicit */int) (short)20756)) - (20746)))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) (~(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_2 - 1])))));
                        arr_16 [i_2] [i_2] [(unsigned short)10] [i_4] [i_2] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [(signed char)6] [(signed char)6] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((arr_15 [10LL] [i_5 + 3] [i_5] [20LL] [i_5] [2LL]) ^ (arr_15 [18LL] [i_5] [i_5] [i_5 + 3] [12] [i_5])))) : (max((12382253682903123858ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                    var_16 = ((/* implicit */short) arr_10 [i_4] [(unsigned short)18] [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [20U] [20U])) || (var_9))) && (((/* implicit */_Bool) arr_17 [i_2 - 1] [(unsigned short)0] [i_4] [(unsigned char)5] [(unsigned char)5]))))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [(short)10] [(signed char)8] [(_Bool)1] [i_6])) ^ (((/* implicit */int) var_0))))) | (((0LL) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                                arr_23 [i_2] [(unsigned char)10] [i_7] = ((/* implicit */unsigned short) ((arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) | (((/* implicit */unsigned long long int) var_6))));
                                var_19 = ((/* implicit */unsigned long long int) ((signed char) (~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_7] [i_2]))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_22 [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_22 [i_7] [i_7] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_22 [i_7] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((6064490390806427761ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25706)))));
}
