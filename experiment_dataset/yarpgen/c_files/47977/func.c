/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47977
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_20 |= ((((/* implicit */int) (unsigned char)174)) != (((/* implicit */int) var_13)));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0]))));
            var_23 = (~(39372052132840944LL));
        }
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_2 [i_0])) ^ ((+(270263016U)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) max((var_9), (var_18)))), (min((((/* implicit */unsigned long long int) (unsigned char)81)), (arr_10 [i_2] [15] [i_2]))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_1 [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((unsigned char) arr_9 [(_Bool)1] [16ULL]))) : (((/* implicit */int) (short)13591))))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_10)))))))));
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2] [14] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)81)) ? (3767009745U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 134217696LL)))))) ^ (((arr_10 [(unsigned char)19] [i_4] [i_4]) ^ (arr_10 [i_2] [i_2] [7])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                var_27 = ((/* implicit */int) var_11);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_28 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_19 [14LL] [i_4] [i_5] [18] |= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5 + 1])))) ? (max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_5] [0ULL])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(2195679558U)))))));
                    var_29 *= ((/* implicit */short) ((((_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) (unsigned char)81)) ? (arr_12 [i_5 - 1] [i_5 + 1]) : (var_12)))));
                    var_30 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+(arr_16 [i_4] [i_5] [i_5 + 1] [i_5 + 1] [14LL]))))));
                }
                arr_20 [11U] [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [19LL] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_7 [i_2]))))) ? (max((268433408ULL), (4855173002796743180ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2])))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_1 [i_2]))));
                            arr_28 [(unsigned char)2] [(_Bool)1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (short)-651))))) ? (((/* implicit */int) arr_14 [i_5] [i_4] [i_4])) : (((/* implicit */int) arr_6 [i_2]))))) ? (((((((/* implicit */_Bool) arr_17 [8] [i_4] [i_4] [2U] [i_4])) ? (18446744073441118207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_2]))))))) : (((/* implicit */unsigned long long int) ((long long int) 2879637308U)))));
                        }
                    } 
                } 
            }
            for (int i_9 = 3; i_9 < 19; i_9 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_30 [i_9] [i_9 - 2] [7U])) ? (18446744073441118207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                var_34 = ((/* implicit */_Bool) var_18);
            }
            arr_31 [i_2] [i_2] |= ((/* implicit */unsigned short) var_6);
        }
        arr_32 [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (arr_3 [i_2] [0])))) ? (((var_1) ? (944472289U) : (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_2]))))));
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073441118207ULL)) ? (((/* implicit */int) (short)10628)) : (((/* implicit */int) (unsigned char)247))));
    }
    var_36 -= ((/* implicit */unsigned int) var_15);
    var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-134217697LL) + (9223372036854775807LL))) >> (((268433409ULL) - (268433388ULL)))))) ? (((/* implicit */unsigned long long int) var_9)) : (max((var_16), (((/* implicit */unsigned long long int) var_14))))));
}
