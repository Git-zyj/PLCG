/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228828
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0]))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_0 [19]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((max((13048949819566825971ULL), (((/* implicit */unsigned long long int) arr_0 [22ULL])))) ^ (((/* implicit */unsigned long long int) arr_0 [i_1])))) != (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [16ULL]))))))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned int) 463365701))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_1 + 1])), (var_7))))))));
        }
        for (unsigned char i_2 = 4; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_2 - 3])), (min((arr_9 [i_0 + 1]), (((/* implicit */int) arr_3 [(unsigned char)2] [23U]))))))) ? (arr_9 [i_0]) : (2014393385)));
            arr_10 [10ULL] [(short)4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) arr_0 [(_Bool)1]))) ? (arr_8 [i_0]) : (max((((/* implicit */long long int) (short)-17312)), (arr_7 [11ULL] [8LL] [i_2 - 2]))))), (min((((/* implicit */long long int) arr_1 [i_0])), (((arr_3 [i_0] [i_2]) ? (arr_4 [(unsigned char)14] [i_0] [12]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17312)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                arr_15 [21U] [i_2 + 1] [21U] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_15)) ? (((/* implicit */int) ((_Bool) (unsigned char)76))) : (min((((/* implicit */int) arr_1 [16LL])), (arr_9 [i_0 + 2])))))) ? (var_13) : (min((((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 1] [4LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 - 1] [i_2] [(unsigned char)19]))) : (arr_0 [i_2 + 1]))), (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [9LL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [14LL]))))))))));
                var_19 *= arr_11 [17LL] [15ULL] [i_3];
            }
        }
        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                var_20 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 853743327298815577LL))));
                var_21 = arr_13 [i_0];
            }
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_4 + 1] [10] = ((/* implicit */unsigned char) ((((unsigned long long int) -2029216103)) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [8ULL] [i_4] [0LL] [(unsigned char)19])))));
                arr_23 [i_0] [i_4 - 3] [13U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6])) <= (((/* implicit */int) arr_3 [(unsigned char)6] [i_0]))))), (min((arr_6 [i_0] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_9 [i_0])))))))));
                var_22 = ((/* implicit */short) ((((arr_3 [i_0 - 1] [i_4 - 2]) ? (((/* implicit */int) arr_3 [i_0] [i_4 + 1])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_4 - 1])))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_4 + 1]))) < (arr_12 [(unsigned char)13] [i_4 - 2] [i_6]))))));
                var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_0])))) ? (arr_18 [i_6] [(_Bool)1] [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (var_15)))))))));
            }
            var_24 *= ((/* implicit */_Bool) 255LL);
            arr_24 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_8 [i_0]) : (arr_12 [i_0 + 2] [i_0 - 1] [(short)4])))) ? ((((_Bool)1) ? (arr_19 [i_4] [i_4] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((7352217584735539254LL) & (arr_7 [1U] [i_0] [i_0])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_20 [i_4] [i_4] [(unsigned char)16] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_11 [(unsigned char)19] [i_4] [i_4])) : ((~(arr_9 [i_0]))))))));
            var_25 = ((/* implicit */short) ((unsigned int) max((((arr_6 [i_0] [i_4] [i_4 - 2]) / (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4 - 4])) ? (var_13) : (arr_7 [i_0] [5LL] [20U])))))));
        }
    }
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (var_14)));
        arr_27 [i_7] [13LL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) 9223372036854775789LL))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [15LL] [i_7 + 1]))) + (arr_17 [(unsigned char)15] [i_7 - 2] [i_7]))) : (((-9223372036854775789LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7]))))))), (((/* implicit */long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_7 + 1] [i_7])))))));
        var_27 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (arr_12 [1] [i_7 - 2] [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (min((var_13), (((/* implicit */long long int) var_0)))))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        arr_30 [i_8] [11U] = ((/* implicit */_Bool) (((~(((long long int) var_11)))) + (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_8)), (3740250775U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [0LL] [i_8])) && (((/* implicit */_Bool) -1LL))))))))));
        arr_31 [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((arr_28 [i_8] [i_8]), (((/* implicit */long long int) arr_18 [i_8] [i_8] [i_8] [i_8]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_8] [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_28 [i_8] [i_8])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) > (((/* implicit */int) (unsigned char)55))))))))))));
        var_28 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (+(var_4)))) ? (((arr_18 [i_8] [i_8] [i_8] [i_8]) - (4294967267U))) : (3964690426U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        arr_32 [i_8] = ((/* implicit */unsigned char) var_8);
    }
    for (long long int i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_3)), (arr_9 [i_9 - 1]))), (((/* implicit */int) arr_34 [i_9] [i_9 + 2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [i_9] [7LL]))) / (arr_20 [(_Bool)0] [i_9 + 2] [i_9] [i_9])))) ? (((((/* implicit */_Bool) 554716521U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29252))) : (arr_19 [i_9 - 2] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) (short)-17312)) ? (var_5) : (arr_20 [i_9 + 1] [i_9] [i_9] [i_9 + 2]))))))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9] [i_9 + 2] [i_9]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))));
        arr_38 [i_9 - 2] = ((/* implicit */_Bool) (~(var_6)));
        var_30 = ((/* implicit */unsigned char) ((arr_35 [i_9 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9 - 2] [i_9 - 1] [i_9 + 2] [(short)14]))) : (max((((((/* implicit */_Bool) arr_0 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 + 2]))) : (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)6])))))))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((1595287096160225470ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (arr_9 [i_9]))))))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) (+(var_6)));
}
