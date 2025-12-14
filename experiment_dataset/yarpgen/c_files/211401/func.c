/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211401
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
    var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1149))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) -3149412133231823230LL);
            var_20 = ((/* implicit */unsigned char) ((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 + 2]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((int) ((2067077107U) % (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            var_22 &= ((/* implicit */signed char) ((((/* implicit */int) var_5)) ^ (((((/* implicit */int) var_5)) - (((/* implicit */int) var_5))))));
        }
        for (short i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_23 = -3149412133231823229LL;
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_16))));
            var_25 = ((/* implicit */short) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_2 [i_3 - 1]))));
            var_26 -= ((/* implicit */_Bool) (-2147483647 - 1));
        }
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_17 [i_0] [5U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [(short)1] [i_4]))) != (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_4])))))));
            var_27 += ((/* implicit */short) var_13);
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_5] [i_4] [i_0] [i_5])) + (var_7)))) ? (((arr_19 [i_0] [i_0] [i_4] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) (~(((int) var_12))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(short)11] [i_4] [i_4] [i_5])) ? (((/* implicit */int) arr_23 [i_7 + 2] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_23 [i_7] [i_4] [i_4] [i_0]))));
                            var_31 = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) var_10);
                var_33 |= ((/* implicit */_Bool) arr_7 [i_5]);
            }
            var_34 ^= ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [10ULL]);
            var_35 += ((/* implicit */unsigned char) ((arr_22 [i_0] [i_0] [i_0] [i_4] [i_4]) % (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_12 [3LL])) - (21274))))))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 1) 
        {
            arr_31 [i_8] [i_8] = arr_13 [i_8];
            arr_32 [i_0] [i_8] = ((unsigned char) arr_25 [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 1] [(unsigned char)8]);
        }
        for (long long int i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            var_36 = ((/* implicit */signed char) arr_30 [i_0]);
            var_37 ^= ((/* implicit */unsigned int) 0LL);
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (int i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) ((1074945757U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223)))));
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((unsigned short) arr_19 [i_11 + 2] [i_11 + 3] [i_11 + 1] [0LL])))));
                }
            } 
        } 
    }
}
