/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228947
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) (+(arr_1 [i_0 + 1])));
        var_21 ^= ((/* implicit */short) (-(arr_1 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) (+((+(arr_5 [i_0])))));
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0 - 3] [i_1] [i_1] [i_0] [i_3 - 2] = ((/* implicit */signed char) arr_7 [i_2] [i_0 - 1]);
                    var_24 += ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 - 2] [i_1] [i_3 - 2] [i_1] [i_3 - 1])) << (((((/* implicit */int) arr_9 [3LL] [i_1] [i_3 + 2] [i_3 - 2] [i_3 + 2])) - (65078)))));
                    var_25 = ((unsigned char) var_6);
                    var_26 = ((/* implicit */signed char) (+(var_4)));
                }
                arr_11 [2U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1 + 1] [i_1 - 1]))));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_20 [i_5] [i_5 + 2] [i_4] [i_5] [14LL] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_5 + 1]))));
                            arr_21 [i_5] = ((/* implicit */unsigned int) arr_14 [i_6 + 1] [i_5 - 1]);
                        }
                    } 
                } 
                arr_22 [i_0 - 3] [i_4] |= ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_9))))));
            }
            arr_23 [(_Bool)1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 3])) | (((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 3]))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(arr_3 [i_0 - 2] [i_1 - 3]))))));
        }
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_10))));
    }
    var_29 = ((/* implicit */signed char) var_2);
}
