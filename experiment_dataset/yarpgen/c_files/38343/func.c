/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38343
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */short) (-(283060593936638895ULL)));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_10)) : (-376049755)));
        }
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_0] = (+(((((/* implicit */_Bool) 6ULL)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                arr_11 [i_0] [i_3 - 1] = ((/* implicit */short) (-(arr_3 [i_2 + 1] [i_0])));
                arr_12 [i_3 - 1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((unsigned long long int) 1283268625U));
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_20 &= ((/* implicit */_Bool) ((1283268608U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)6920)))));
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_20 [i_0] = ((/* implicit */short) ((((arr_6 [i_0 - 3]) + (9223372036854775807LL))) << (((var_4) - (12291358)))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        arr_25 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0 + 1] [i_2 - 1] [i_4] [i_0 - 1])) - (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_10))))));
                        var_21 = ((/* implicit */int) arr_4 [i_0]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_22 = ((_Bool) 1283268599U);
                        arr_29 [i_7] [i_4] [i_5] [i_7] |= ((/* implicit */unsigned long long int) 1283268599U);
                        arr_30 [i_0] [i_4] [i_2 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1275071753858007932LL)))) != ((~(arr_3 [i_0 - 1] [i_0])))));
                    }
                    arr_31 [i_5] [i_0] [i_4] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_13)) + (3011698672U)));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0])) || (((/* implicit */_Bool) 1799550411))));
                }
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 1283268625U)) ? (9223372036854775804LL) : (((/* implicit */long long int) 3011698692U))));
            }
        }
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
        {
            arr_35 [i_0 + 1] [i_0 - 3] [i_0] = ((/* implicit */unsigned char) ((int) (+(1283268608U))));
            /* LoopSeq 1 */
            for (short i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) arr_37 [i_0 - 2] [i_0] [i_9 - 2] [i_10])) : (arr_21 [i_0 - 2] [i_8] [i_9 + 3] [i_0])))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) 1283268625U)) : (var_16))) : (arr_27 [i_10] [i_9 + 1] [i_9 - 1])));
                    arr_41 [i_0 - 3] [i_8] [i_0] [i_10] [i_0 - 3] [i_10] = ((/* implicit */unsigned int) 2147483647);
                    var_26 = ((/* implicit */unsigned char) ((_Bool) arr_37 [i_9 - 1] [i_0] [i_9 - 2] [i_9 - 2]));
                }
                var_27 += ((/* implicit */unsigned char) ((((_Bool) arr_15 [i_9 - 2] [i_8] [i_0 - 1] [i_0 - 1])) ? (arr_16 [i_0 - 2] [i_0 + 1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_11] [i_0 - 1])) ? (((1712365183760432921LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))))) : (((var_14) + (((/* implicit */long long int) 1283268627U))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1518849528U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1540216253580592391LL) > (((/* implicit */long long int) var_12)))))) : (((unsigned long long int) var_16))));
        }
        arr_44 [i_0] [i_0 - 1] = ((/* implicit */signed char) (+(-1540216253580592391LL)));
    }
    for (int i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        arr_48 [i_12] [i_12 - 1] = ((/* implicit */short) (-(max((arr_46 [i_12]), (0LL)))));
        arr_49 [i_12] = ((/* implicit */_Bool) 0LL);
    }
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9536))) : (((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) 1283268610U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14))))))))));
}
