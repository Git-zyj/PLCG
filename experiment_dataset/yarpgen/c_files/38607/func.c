/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38607
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
    var_20 = var_1;
    var_21 = var_17;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 3]);
                var_22 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_2]))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [6U] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_2] [i_1] [i_2] [i_0])) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2] [i_0]))));
                            var_24 = var_2;
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_17 [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_2] [(unsigned char)14] [i_2] [5LL] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)9] [5] [i_0 + 3] [i_0 + 3] [i_5] [i_5]))) : (var_14))) : ((~(arr_6 [i_1] [i_1] [4U])))));
                            arr_18 [i_0] [i_2] = ((/* implicit */unsigned int) var_12);
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5] [i_1] [i_2] [i_3] [i_5])) != (((/* implicit */int) arr_15 [7ULL] [i_3] [i_2] [i_1] [i_0]))));
                            arr_19 [i_2] [i_0 + 2] [(unsigned char)10] = var_19;
                        }
                        for (int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            arr_24 [i_2] [(_Bool)1] [i_2] [i_3] [i_6] = ((/* implicit */int) (~(arr_9 [i_0 + 3])));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_6 + 2] [i_0 - 3]))));
                            arr_25 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_2] [i_0 - 2] [i_2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7185780139428640029LL)))) : ((~(var_14)))));
                        }
                        arr_26 [i_2] [i_1] [i_0 - 2] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((long long int) arr_23 [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3] [i_2]));
                        var_28 ^= (!(((/* implicit */_Bool) arr_16 [7ULL] [i_0] [i_0] [(unsigned short)4] [i_0 - 2] [i_0] [i_0 - 3])));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) var_7);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_7] [i_8] [i_2] [(unsigned char)4] = ((/* implicit */unsigned int) ((short) (short)20659));
                            var_29 = ((/* implicit */unsigned int) ((long long int) arr_10 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [16] [(signed char)2]));
                            arr_35 [13] [i_2] [16LL] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (short)20649));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_1] [i_2])) ? (arr_22 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_12)), (arr_22 [i_0 - 1] [i_0 - 2] [i_9])));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)20659))))), (max((2481326339U), (4294967295U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_9]), (arr_3 [(unsigned char)11] [(unsigned char)11]))))))))));
                }
                arr_39 [i_0] [i_0 + 2] [i_0 + 3] = ((/* implicit */unsigned char) (~(((int) ((unsigned char) arr_9 [i_0 + 1])))));
            }
        } 
    } 
}
