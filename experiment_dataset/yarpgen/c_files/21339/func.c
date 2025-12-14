/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21339
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
    var_10 += ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) min((var_11), (var_1)));
            var_12 = ((/* implicit */unsigned short) var_2);
        }
        for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((var_7), (((/* implicit */int) arr_2 [i_0] [i_0] [i_2])))))));
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_3 [14ULL] [i_0] [i_2 - 1]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((((/* implicit */int) arr_8 [i_0] [i_0])) << (((((/* implicit */int) var_0)) - (10919))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) (short)-21240))) : (((((/* implicit */_Bool) arr_3 [10U] [i_3] [10U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_3])) < (((/* implicit */int) arr_3 [6U] [6U] [6U])))))) + ((-(17827740177982002177ULL))))))))));
            var_17 -= ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3] [(unsigned short)3] [(unsigned short)3]))))) % (min((((var_4) % (arr_7 [i_0] [i_0] [i_0]))), ((-(arr_4 [i_3])))))));
        }
        var_18 |= min((((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [8ULL] [(unsigned short)22] [8ULL])), (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_0))))))), (arr_1 [i_0]));
    }
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        arr_12 [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_4 - 2]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_19 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-21240))))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (2515938647U)));
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                arr_18 [i_4 - 2] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_4 + 1] [i_4])))) + (arr_1 [i_4 + 2])));
                var_21 |= ((/* implicit */int) (~(max((1463764287U), (((/* implicit */unsigned int) (short)21240))))));
            }
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_22 ^= ((/* implicit */int) ((arr_1 [i_4 - 3]) ^ (arr_1 [i_4 + 2])));
                    var_23 = ((/* implicit */int) arr_19 [i_4] [i_4] [i_4]);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_21 [i_5]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)21240))) % (var_3)))));
                }
                var_25 = ((/* implicit */_Bool) ((((3954047513711677109ULL) << (((((/* implicit */int) (unsigned char)240)) - (203))))) << (((((((/* implicit */int) max((arr_6 [i_7] [i_5] [i_4 + 2]), (arr_23 [i_4] [i_5] [i_5])))) + (arr_22 [i_4] [i_4 - 3] [i_7]))) + (1162091216)))));
            }
            arr_24 [i_5] = arr_15 [i_4] [i_5] [i_5];
        }
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) arr_26 [i_9]);
        var_27 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_26 [i_9])), ((-(((((/* implicit */int) arr_26 [i_9])) ^ (((/* implicit */int) arr_8 [i_9] [i_9]))))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)235)) < (((((/* implicit */int) (unsigned char)16)) << (((3954047513711677109ULL) - (3954047513711677086ULL)))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_9 [i_9] [i_9])))) + (((/* implicit */int) (!(((/* implicit */_Bool) 7ULL)))))))) / (((arr_0 [0LL] [i_9]) & (arr_0 [12] [i_9])))));
    }
    var_30 = ((/* implicit */_Bool) var_1);
    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) + (var_7))))));
}
