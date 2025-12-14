/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47184
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
    var_11 *= ((/* implicit */_Bool) 0ULL);
    var_12 = ((/* implicit */unsigned int) (((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) 1957037004))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 738002890)) && (((/* implicit */_Bool) ((arr_1 [i_0]) + (((/* implicit */unsigned int) (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) arr_3 [i_1 - 1]);
                    arr_12 [(_Bool)1] [i_2] [2LL] [i_0] = ((/* implicit */unsigned int) -1957037004);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_15 [(signed char)12] [(signed char)12] [i_2] |= ((/* implicit */unsigned char) 1547600190140958881LL);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_18 [i_2] [i_3] [i_2] [12] [i_0] = ((/* implicit */unsigned long long int) ((arr_10 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2]) ? (((/* implicit */int) arr_10 [0LL] [i_1 + 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                            var_14 |= ((/* implicit */int) ((unsigned long long int) var_5));
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((4294967290U) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
                            var_16 = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (unsigned short i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned long long int) arr_22 [i_6] [i_2] [i_0])) : (((15281886066589930353ULL) % (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))));
                            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2] [i_1 - 2] [i_2])) - (var_8)));
                            arr_24 [i_0] = ((/* implicit */int) ((arr_21 [i_1] [4] [i_1 - 2] [i_6 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1 - 2] [i_6 + 1] [15])))));
                        }
                    }
                }
            } 
        } 
    }
}
