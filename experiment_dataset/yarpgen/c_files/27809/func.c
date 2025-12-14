/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27809
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_1] [i_1])))) : (arr_1 [i_1] [i_1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] |= ((/* implicit */int) var_0);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 + 4] [i_1] [i_3 + 4] [i_3] [i_1] [i_2])) ? (arr_10 [i_3 - 1] [7] [i_2] [i_3 + 3] [i_2] [i_3]) : (((/* implicit */long long int) var_2))));
                        arr_13 [(unsigned short)6] [6] [i_1] [i_2] [(unsigned short)6] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned char)228)) : (2097151)))) ? (((((/* implicit */_Bool) (unsigned char)194)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1043)))));
                        arr_14 [i_0] [20ULL] [i_1] [i_2] [5U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) || ((!(((/* implicit */_Bool) (short)-1025))))));
                    }
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_3 [22ULL] [i_1])) * (max((((/* implicit */unsigned long long int) ((int) arr_5 [i_1] [i_1]))), (((var_4) * (((/* implicit */unsigned long long int) 208003528)))))))))));
                }
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_6 [6LL] [6LL] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        for (int i_5 = 4; i_5 < 17; i_5 += 3) 
        {
            {
                var_16 &= ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_17 [i_5])), (arr_18 [i_4 - 1] [i_5]))) << (((((((((/* implicit */_Bool) (short)1043)) ? (((/* implicit */int) (short)-1023)) : (((/* implicit */int) (signed char)-114)))) + (1086))) - (62)))));
                var_17 |= ((/* implicit */int) (+(((arr_7 [i_4 + 1] [18]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (var_0)));
}
