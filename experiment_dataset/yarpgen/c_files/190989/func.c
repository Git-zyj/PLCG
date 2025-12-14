/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190989
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [2ULL] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(short)3] [15U])) ? (2550678852U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) <= ((~(938468600U)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0 - 2] [i_0 - 2]));
            var_19 -= ((/* implicit */unsigned int) var_14);
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_9 [(unsigned char)1] = ((/* implicit */unsigned int) arr_5 [i_0 - 1]);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)3]))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (arr_5 [i_0 - 2])));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) / ((+(-1640627691)))));
                    arr_14 [1] [15ULL] [2ULL] [4ULL] = ((/* implicit */int) ((((/* implicit */_Bool) 7435810777091024659LL)) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)1] [i_0 - 1] [(unsigned short)15])) : (var_0)));
                }
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)0))));
                arr_15 [14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [(unsigned char)10])) < (((/* implicit */int) ((562915593682944ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 - 2] [i_5 - 2])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_25 [i_6] [(unsigned short)9] [10] [(signed char)4] = (((!(((/* implicit */_Bool) arr_24 [(short)8])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_13 [9U])) : (14205929629405718384ULL))) : (((/* implicit */unsigned long long int) arr_17 [10ULL] [(unsigned short)6] [i_5 - 2])));
                            arr_26 [6LL] [1ULL] [14ULL] [(signed char)11] [i_6] [(unsigned char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [(_Bool)0] [(unsigned char)15]))));
                            arr_27 [8ULL] [(short)2] [i_2] [6U] |= ((/* implicit */unsigned int) 4240814444303833232ULL);
                            var_25 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [2] [i_5 + 1] [2LL] [(unsigned char)0] [4]))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (unsigned char)179))));
            }
            var_28 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [(_Bool)0] [13ULL] [11ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)2] [12]))) : (arr_24 [(unsigned short)14]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)12])))));
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4240814444303833233ULL))));
        }
    }
    var_30 = ((/* implicit */unsigned char) ((unsigned short) var_6));
}
