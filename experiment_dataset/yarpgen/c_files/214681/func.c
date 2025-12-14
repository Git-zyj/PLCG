/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214681
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) ((short) min(((+(((/* implicit */int) (signed char)66)))), (((/* implicit */int) ((unsigned short) arr_10 [i_1]))))));
                                var_11 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (arr_7 [i_0] [i_1 - 2] [i_4])))))));
                                arr_15 [i_4] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */signed char) (~(12458485289888296848ULL)));
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-112)), ((unsigned char)216)))) | (((/* implicit */int) arr_1 [i_1 + 1] [i_0])))) >= (((/* implicit */int) ((unsigned char) 2ULL)))));
                                var_13 -= (+((-(((unsigned long long int) var_8)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 2 */
                for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) ((signed char) var_3));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_5] [i_5 + 2] [i_1] [i_1] [i_1] [i_0] [i_0 - 1])) - (((/* implicit */int) arr_13 [i_5 + 1] [(unsigned char)19] [i_1 + 1] [i_0 - 3] [i_1 + 1] [i_0 - 3] [i_0 + 3])))) == (((/* implicit */int) ((short) (unsigned char)28))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_2))));
                                arr_22 [i_1] [6ULL] [i_5 + 2] [(signed char)12] [i_1] [i_7] &= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 + 2] [22] [i_5 + 1])) == (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [(signed char)19] [i_5 - 1] [i_7])) ? (((/* implicit */int) arr_0 [i_1] [i_6])) : (((/* implicit */int) var_1))))))));
                                var_18 = ((/* implicit */signed char) ((var_8) | (((/* implicit */int) ((unsigned char) arr_2 [20ULL] [i_1])))));
                                var_19 ^= ((/* implicit */signed char) min((((unsigned short) arr_17 [i_1] [20] [i_5 - 1] [i_1])), (((/* implicit */unsigned short) arr_17 [i_7] [i_1 - 2] [i_6 + 1] [i_5 + 2]))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11952697525062656236ULL)) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_8] [i_0 + 2])) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */int) max((var_9), (((/* implicit */short) var_7))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_8])) > (((/* implicit */int) arr_24 [i_0] [i_1 - 2] [i_0]))))))) - (((/* implicit */int) var_0))));
                    var_21 = ((/* implicit */signed char) min((max((14683360226569733740ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(signed char)14] [i_1 - 1])) ^ (((/* implicit */int) arr_24 [i_0 - 2] [i_0 + 1] [i_1 + 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_22 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_21 [i_0 + 3] [i_9] [i_0] [i_1] [(signed char)4] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_6)))));
                        arr_27 [21] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_0 - 1] [i_9]))));
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_23 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) max(((short)32756), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_8] [i_8] [i_10] [i_10])) >> (((((/* implicit */int) (signed char)-101)) + (112)))))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned long long int) -662664096)) : (5988258783821254768ULL))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_0 - 2] [12] [12] [i_10] [i_11]))));
                            var_25 *= ((/* implicit */unsigned short) var_9);
                        }
                        for (unsigned char i_12 = 1; i_12 < 23; i_12 += 4) 
                        {
                            arr_36 [i_8] [i_10] [i_8] [0ULL] [i_8] = (short)3912;
                            var_26 = ((/* implicit */signed char) arr_13 [i_0 - 1] [i_0 + 3] [i_1] [i_8] [i_8] [2] [i_12]);
                            var_27 = ((/* implicit */int) arr_5 [(short)0] [i_12]);
                            var_28 = ((/* implicit */short) (-((~(((/* implicit */int) var_3))))));
                            arr_37 [i_0 - 3] [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((arr_16 [i_12 - 1] [i_8]) + (arr_16 [i_0 + 3] [i_1 + 1]))));
                        }
                    }
                }
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) (signed char)9))) ? (((/* implicit */int) (unsigned short)38175)) : (((/* implicit */int) ((signed char) var_4)))))));
    var_30 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_1))))), ((+(((/* implicit */int) var_1)))))));
    var_31 |= (signed char)-28;
}
