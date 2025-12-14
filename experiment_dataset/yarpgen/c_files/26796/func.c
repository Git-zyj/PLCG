/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26796
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
    var_14 = ((/* implicit */unsigned short) var_12);
    var_15 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_12);
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned short) var_11));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 + 2] [i_1])) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [(short)16])))))));
                arr_14 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned char) ((int) (~(4261412865U))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
            {
                arr_19 [i_2] [i_2] [i_1] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (-1322725543587641504LL)));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_12))));
                var_20 = ((/* implicit */_Bool) (unsigned short)8882);
            }
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
            {
                arr_23 [i_2] [i_2] [13U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)56169), ((unsigned short)40061))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (504U) : (var_12)))) ? (7339508252601017887LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_1])) ? (arr_20 [i_1] [i_1] [i_1]) : (var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))));
                arr_24 [i_2] = ((/* implicit */unsigned char) -109874555);
                arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (789467290119522184LL))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50510))))))));
                var_21 = ((/* implicit */int) var_10);
                arr_26 [13U] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (673387585U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 965363846)))) - ((-(var_3))))))))));
                arr_29 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_22 [i_2])))) ? (max((arr_22 [i_2]), (((/* implicit */unsigned int) arr_13 [i_6 - 2] [i_6 - 2])))) : ((~(33554416U)))));
                arr_30 [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_2]);
            }
            arr_31 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (((_Bool)1) ? (644360124) : (((/* implicit */int) (short)15440))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (arr_5 [i_2])))) : (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65023)))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_2]))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) var_7))), (((((/* implicit */_Bool) arr_21 [i_2])) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) var_3)) ? ((+(var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((arr_8 [i_2]) - (15514300919763273159ULL))))))))));
            arr_32 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_1] [2ULL])), ((+(((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 4193280)), (33554444U)))) ? (((/* implicit */int) arr_17 [18] [i_2] [i_2] [i_2])) : (arr_5 [i_1])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967291U)) - (-7339508252601017888LL)))), (arr_28 [i_2])))));
        }
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
        {
            arr_36 [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_7] [i_7] [i_7]) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) - (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) arr_7 [i_7] [i_7])) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_33 [i_1])), (4193280))))))));
            var_24 = ((/* implicit */_Bool) var_12);
            arr_37 [i_7] [i_7] = ((((/* implicit */_Bool) min((var_5), ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7]))) : (min((((arr_22 [i_7]) >> (((var_1) - (2816898911536849203LL))))), (((/* implicit */unsigned int) var_13)))));
            arr_38 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4477579799366130847LL)) ? (var_10) : (-7339508252601017906LL)))) ? (max((5U), (((/* implicit */unsigned int) 843176085)))) : (((/* implicit */unsigned int) (-(arr_18 [i_7]))))))) ? ((+(arr_6 [i_7]))) : (((/* implicit */unsigned int) -477864239))));
            arr_39 [i_7] = ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_7 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)15026)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) arr_5 [i_1])) : (max(((~(7339508252601017883LL))), (min((var_3), (7339508252601017898LL))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */int) arr_27 [i_8] [i_8] [i_8]);
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_8] [i_8])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8] [i_8])))))));
            var_27 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_8)) : (arr_18 [i_1]))));
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) min((min((var_3), (((/* implicit */long long int) (unsigned short)18981)))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)61357)) : (2147483647))))))));
            var_29 ^= ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) -7339508252601017936LL)) : (17670675542334708963ULL));
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((((unsigned int) max((((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1])), (arr_9 [(short)8] [i_9])))), (((/* implicit */unsigned int) arr_12 [i_9] [(short)20] [i_9] [i_9])))))));
        }
        var_31 ^= ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */long long int) -109874555)) > (var_1)))) >> (((arr_6 [i_1]) - (2923015913U)))))));
    }
}
