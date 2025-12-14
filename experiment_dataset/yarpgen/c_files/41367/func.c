/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41367
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
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) var_16);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_12 [i_3] [(_Bool)1] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_4] [6LL] [i_0])) ? (((/* implicit */long long int) var_6)) : (arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_2]))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-20))))));
                                arr_13 [(signed char)8] [(signed char)8] [i_2] [i_3] [i_2] [i_2] = ((((unsigned long long int) (unsigned char)255)) / (((/* implicit */unsigned long long int) arr_1 [9] [i_4 + 2])));
                                arr_14 [i_3] = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                    arr_15 [i_0 + 2] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1])) && (((/* implicit */_Bool) arr_11 [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [0ULL] [i_1] [i_1])))))) : (0ULL)));
                    var_18 = ((/* implicit */unsigned int) (unsigned char)64);
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_2);
}
