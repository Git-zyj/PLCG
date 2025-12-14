/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48185
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_20 ^= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [(unsigned short)15] [i_1]))))));
                        var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2 + 2])) ? (arr_8 [(unsigned char)2] [i_2 - 2] [14LL] [i_3] [i_3]) : (arr_8 [(unsigned char)6] [i_2 + 1] [15LL] [i_3] [11ULL]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            arr_13 [i_0] [(unsigned short)11] [i_2] [6U] [i_2] = ((((_Bool) ((((/* implicit */_Bool) arr_3 [(short)2])) ? (((/* implicit */int) arr_12 [(signed char)6] [i_1] [i_2] [6U] [i_3] [i_3] [(short)6])) : (((/* implicit */int) arr_9 [0ULL] [i_1] [i_2] [11LL] [i_3] [(short)0]))))) ? (min((((/* implicit */long long int) 1430482606U)), (arr_6 [6ULL] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */long long int) (~(arr_5 [i_2] [i_2] [18LL])))));
                            arr_14 [(unsigned short)7] [3U] [i_2] [(short)19] [i_2] [(unsigned short)9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) 5335872012042208789ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 9223372036854775805LL)) : (var_10)))))) : (((1430482610U) - (((/* implicit */unsigned int) 1652092880))))));
                            arr_15 [i_0] [i_0] [(short)12] [i_2] [19LL] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_2] [i_4])), (((((/* implicit */_Bool) -777751207)) ? (((/* implicit */long long int) 4147905057U)) : (max((4673028189553154930LL), (((/* implicit */long long int) 0U))))))));
                        }
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0 - 1]) - (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [(unsigned char)16] [i_3] [i_2 - 3] [13]))))) ? (((arr_6 [i_0] [i_0 + 2] [(unsigned short)13]) ^ (arr_6 [i_0] [i_0 - 2] [7]))) : (((/* implicit */long long int) max((arr_2 [11LL] [i_0 - 2]), (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [7U] [14] [i_2 - 1] [i_2])))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned long long int) ((3504152783U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))));
                        var_24 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2]))))), (((((/* implicit */_Bool) (unsigned short)19106)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) 2864484701U))))));
                        arr_18 [i_5] [(short)15] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-17955)) + (2147483647))) >> (((var_8) - (2477351080U))))))))), ((+(min((2864484689U), (2864484727U)))))));
                        var_25 = ((var_1) < (((((var_18) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))) ? (max((var_13), (((/* implicit */long long int) -1652092908)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_5])) ? (((/* implicit */int) arr_17 [(short)2] [i_2] [(unsigned short)10])) : (var_14)))))));
                    }
                    for (short i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_0] [(unsigned short)9] [6ULL] [i_6] = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) (unsigned char)38)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                        arr_22 [i_2] = ((/* implicit */signed char) ((unsigned char) ((((arr_2 [i_0 - 2] [i_2 + 2]) + (2147483647))) >> (((((long long int) arr_3 [i_0])) - (687168769LL))))));
                    }
                    for (short i_7 = 4; i_7 < 19; i_7 += 1) 
                    {
                        arr_25 [(unsigned char)2] [i_2] [i_2] [(signed char)3] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44116))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)33)), (arr_5 [i_1] [i_2] [i_7])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10604))) < (7447511077384274145ULL)))) : ((~(arr_5 [i_0] [i_2] [(signed char)15])))))));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_7 - 2] [i_7] [i_7] [i_2] [i_7] [i_7])) ? (((((/* implicit */_Bool) var_11)) ? (6915892747979502794LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) arr_10 [5LL] [i_1] [(unsigned char)15] [i_7] [i_2])), (var_18))))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (777751190)))) : (max((((/* implicit */unsigned long long int) arr_23 [(signed char)6] [i_2] [i_2] [(short)4] [i_1] [(short)19])), (14ULL)))))));
                        arr_26 [i_0] [i_1] [i_7] [i_7] [(_Bool)1] [i_2] = ((/* implicit */_Bool) arr_23 [(unsigned char)7] [i_1] [i_2] [i_7] [(_Bool)1] [(unsigned char)10]);
                    }
                    var_27 += ((/* implicit */_Bool) (+((-(((long long int) -13LL))))));
                }
            } 
        } 
    } 
    var_28 ^= ((/* implicit */_Bool) (+(((((((/* implicit */int) var_17)) >> (((var_19) - (4512700139278921454LL))))) >> (min((2996743334U), (((/* implicit */unsigned int) var_15))))))));
}
