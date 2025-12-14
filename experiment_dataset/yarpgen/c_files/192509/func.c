/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192509
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((min(((-(((/* implicit */int) var_14)))), (min((((/* implicit */int) (short)0)), (var_10))))) + (2147483647))) >> (((((((((/* implicit */int) (unsigned char)171)) >> (((((/* implicit */int) var_11)) + (6188))))) + (((/* implicit */int) var_6)))) - (49940))))))));
    var_19 = var_2;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 8321341200000658159ULL);
        var_20 = ((/* implicit */unsigned int) (short)10341);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned int) arr_5 [i_1] [i_1])) / (4294967295U))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))));
        arr_8 [i_1] [i_1] = arr_3 [i_1];
        /* LoopSeq 3 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((((((((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551599ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6561088854312061707LL)))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) 6561088854312061728LL)) ? (17U) : (((/* implicit */unsigned int) var_10))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), ((~(17ULL)))));
                arr_17 [i_1] [(short)13] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10804))) + (18446744073709551615ULL))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (1729837307711505169LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))), (((arr_11 [i_1]) >> (((-6561088854312061709LL) + (6561088854312061746LL)))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */_Bool) ((((int) ((arr_6 [i_2] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_1])))))) * (((((/* implicit */_Bool) ((unsigned int) (unsigned char)18))) ? (((/* implicit */int) ((15506042132217070557ULL) >= (4ULL)))) : (((/* implicit */int) (unsigned char)64))))));
                arr_20 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_4 [i_1]);
                var_23 = ((((((/* implicit */_Bool) 12919777286131451417ULL)) ? (((/* implicit */unsigned long long int) -6561088854312061707LL)) : (32767ULL))) >> (((((/* implicit */int) var_16)) - (220))));
                arr_21 [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) -6561088854312061729LL))) ? (-6561088854312061707LL) : (((/* implicit */long long int) ((min((3460550600U), (((/* implicit */unsigned int) arr_19 [i_2] [i_1])))) ^ (0U))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_5 + 2] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_15 [i_2 - 3] [i_5 + 1] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_15 [i_2 - 2] [i_5 - 3] [i_6 + 1] [i_6])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_30 [i_1] [i_6] [i_6 + 1] [i_6] [i_6 + 1] = var_11;
                        arr_31 [i_1] [i_1] [i_5] [i_6 - 1] [11ULL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))) ? (((/* implicit */int) arr_14 [i_2 - 2] [i_5 + 2] [i_6 + 3])) : (((/* implicit */int) arr_9 [i_6 + 1] [i_5 - 2] [i_1]))));
                        var_25 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((arr_11 [i_1]) >> (((arr_11 [i_1]) - (6299361918077180169ULL)))))) : (((/* implicit */signed char) ((arr_11 [i_1]) >> (((((arr_11 [i_1]) - (6299361918077180169ULL))) - (4046241730204232830ULL))))));
                        var_26 ^= ((/* implicit */long long int) 1668865483);
                    }
                    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        arr_36 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_6 + 3])) ? (((4742266287073937917LL) + (((/* implicit */long long int) ((/* implicit */int) arr_28 [17ULL] [(short)17]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)5735)))));
                        arr_37 [i_1] [i_6] [i_5] [i_2] [i_1] = arr_11 [i_1];
                        var_27 = ((/* implicit */unsigned long long int) (short)-20361);
                        arr_38 [i_1] [(signed char)2] [i_1] [i_6] = ((/* implicit */short) arr_34 [i_1] [i_5] [i_6 + 2] [i_8] [i_8 - 2]);
                    }
                    arr_39 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned short) arr_32 [i_6] [i_1] [i_5] [i_1] [i_1])));
                }
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                arr_40 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))) : (4742266287073937917LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208)))));
            }
        }
        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            var_29 = ((/* implicit */int) min((arr_4 [i_1]), (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            arr_44 [i_1] = ((/* implicit */unsigned int) min((((18446744073709551601ULL) >> (((var_3) + (6709277559925660770LL))))), (max((((((/* implicit */_Bool) (short)7861)) ? (((/* implicit */unsigned long long int) var_3)) : (20ULL))), (((/* implicit */unsigned long long int) max((-5700597381779978676LL), (((/* implicit */long long int) (short)-1)))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            arr_48 [i_1] = ((/* implicit */short) (-((-((~(arr_41 [i_1])))))));
            var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_1] [i_10])))) * (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_3)))) + ((((_Bool)1) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5741)))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_54 [i_1] [i_11] [i_11] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)4096))) - (1597052780U)))));
                        var_31 += ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_43 [(unsigned short)20] [i_12 + 1] [i_12])), (((var_15) | (3460550596U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                } 
            } 
        }
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_41 [i_1]) >> (((((/* implicit */int) (unsigned short)19803)) - (19785)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) arr_13 [i_1] [i_1] [(unsigned char)4]))))), (((/* implicit */int) arr_23 [16] [i_1] [16])))))));
    }
}
