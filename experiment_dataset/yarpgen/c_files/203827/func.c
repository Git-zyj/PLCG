/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203827
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_7))));
    var_11 |= ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) var_9);
                    arr_7 [(unsigned char)9] [(unsigned char)14] [i_2] = ((/* implicit */int) var_8);
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [4LL] [(signed char)16] = arr_9 [(unsigned short)3] [7ULL];
            arr_11 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)6)) / (((((/* implicit */int) (signed char)-123)) / (((/* implicit */int) (signed char)122))))));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_15 [i_0] &= ((/* implicit */int) var_5);
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [(unsigned short)12] [i_4])) <= (((/* implicit */int) (signed char)122))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
        {
            arr_20 [11] [i_5] [(short)1] = ((/* implicit */signed char) min((arr_18 [5ULL] [12LL]), (((/* implicit */short) arr_17 [(short)13] [16] [12]))));
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) min((((int) var_6)), (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_12 [i_5])))))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_15 |= ((/* implicit */unsigned short) var_1);
                arr_26 [(short)11] [(signed char)13] [16ULL] = ((/* implicit */_Bool) var_1);
            }
            for (int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */short) min((var_16), (var_3)));
                arr_29 [(short)5] [16U] [3ULL] [9ULL] = ((/* implicit */signed char) min((((arr_4 [3] [i_0 - 2]) / (arr_4 [16LL] [i_0 - 2]))), (((/* implicit */int) ((_Bool) arr_4 [(unsigned short)3] [i_0 - 2])))));
            }
            for (int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
            {
                var_17 *= ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */int) var_7)) + (arr_4 [8LL] [(unsigned char)9]))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_5)))))))) / (((((((/* implicit */long long int) arr_24 [10] [9] [(signed char)7])) / (arr_30 [8] [(short)15]))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                var_18 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)122)) + (((/* implicit */int) (signed char)104)))) / (((/* implicit */int) (signed char)21))));
                var_19 &= ((/* implicit */int) max((var_2), (((unsigned short) ((_Bool) arr_30 [(unsigned char)1] [6])))));
            }
            arr_33 [(short)12] [12] = ((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_6 + 2] [i_6 - 1]);
        }
        var_20 += ((/* implicit */unsigned short) var_9);
        var_21 |= ((/* implicit */unsigned long long int) var_7);
    }
}
