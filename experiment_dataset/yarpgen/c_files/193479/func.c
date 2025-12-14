/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193479
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_12)) : (var_15))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)30931)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) var_17))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6ULL] [6ULL] [i_4])))))) : (((arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 4] [i_1] [i_2] [i_3] [i_4]))) : (var_0)))));
                                arr_12 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned int) 980476963)) : (3190406077U)));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)84)) ? (var_18) : (4974807029341263904LL)));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((1104561217U) + (3190406077U))))));
                                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) 2147483642));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)252))));
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4573480633555520667LL)) ? (((/* implicit */int) (signed char)123)) : (((((/* implicit */_Bool) 12949434011294471614ULL)) ? (-2147483642) : (((/* implicit */int) var_3))))));
                    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (var_6)));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0 - 1] [i_0 - 1] [i_2]))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17573)) ? (-4573480633555520668LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))))));
                                var_30 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)4] [i_0])) ? (arr_15 [i_7] [i_5] [i_1]) : (arr_15 [i_6] [i_5] [0ULL])))));
                                arr_21 [(short)9] [i_0 + 4] [(unsigned char)10] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0 - 1] [i_6] [(unsigned char)8] [i_6] [i_6]) - (var_0)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 3] [(unsigned char)7] [i_5] [i_5] [i_7])) ? (var_6) : (arr_8 [i_0 + 3] [i_0 + 1] [i_6] [i_7] [i_7] [i_7]))) : (((/* implicit */long long int) ((1104561208U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                                arr_22 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) 282610264U))))) : (((/* implicit */int) (unsigned char)20))))) ? (13224322807460252886ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-4573480633555520647LL)))) ? ((~(arr_4 [i_0] [i_1 - 3] [i_8 + 4]))) : (((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) arr_7 [i_1 - 2] [i_1] [i_1] [i_1]))))));
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1104561206U)) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (18446744073709551615ULL)))));
                                var_33 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                                arr_28 [10ULL] [i_0] [i_1 + 1] [i_5] [i_8 + 2] [i_9] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_27 [i_0 + 3] [i_1 - 3] [i_1 - 3])))) + (2147483647))) << (((((unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_7)) : (1348007711)))) - (31ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
