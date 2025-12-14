/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209974
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                            {
                                var_15 = ((unsigned long long int) (-(arr_9 [i_4] [14ULL] [8ULL] [8ULL] [i_1] [i_0])));
                                var_16 = max((var_13), (13ULL));
                            }
                            arr_13 [i_1] [i_2] [i_1] [i_0] = ((9214364837600034816ULL) + (5637857905770627473ULL));
                            var_17 = min((arr_2 [i_2 - 1]), (arr_12 [i_2 + 1]));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [5ULL])) ? (((((/* implicit */_Bool) 15100889185605161439ULL)) ? (5105001335345752965ULL) : (var_3))) : (18446744073709551615ULL))) : (((var_2) >> (((var_1) - (8391338736581228187ULL))))));
                var_19 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min(((+(var_8))), (arr_2 [5ULL]))) : (18446744073709551615ULL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_29 [i_5] [i_6] [i_8] [i_8] &= ((((/* implicit */_Bool) arr_0 [i_5] [i_7 - 2])) ? (((((/* implicit */_Bool) (~(arr_5 [i_6] [8ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8] [2ULL] [i_5])))))) : (((((/* implicit */_Bool) arr_11 [i_7])) ? (arr_5 [14ULL] [i_5]) : (9232379236109516816ULL))))) : (((((((/* implicit */_Bool) arr_22 [i_5] [i_6])) ? (var_9) : (arr_9 [i_7] [i_7] [12ULL] [i_8] [i_6] [i_8]))) / (arr_10 [i_8] [i_7] [i_5] [i_5]))));
                            var_20 += arr_14 [i_8];
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
                            {
                                arr_33 [i_9 + 1] [i_9 + 3] [i_8] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 31ULL)) || (((/* implicit */_Bool) 13236860912509591258ULL)))))) < (var_5)));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 2]) : ((~(var_10)))))));
                                var_22 -= (((!(((/* implicit */_Bool) arr_15 [i_8])))) ? (((18446744073709551615ULL) / (var_1))) : (13236860912509591243ULL));
                                arr_34 [i_5] [i_5] [i_7 - 1] = var_7;
                            }
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((arr_15 [i_5]) ^ (var_0))))))));
                            var_24 = min(((+(arr_1 [i_7 - 1]))), (((7604701507679285191ULL) + (12214975259528920560ULL))));
                        }
                    } 
                } 
                var_25 = 22ULL;
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_26 = ((((((/* implicit */_Bool) (+(18446744073709551615ULL)))) && (((/* implicit */_Bool) arr_21 [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_5] [3ULL])) ? (arr_20 [i_5] [i_10] [i_5]) : (var_3))) : (min(((+(25ULL))), ((-(var_0))))));
                            var_27 *= ((((/* implicit */_Bool) 0ULL)) ? (6ULL) : (617798789809405949ULL));
                            var_28 += ((((/* implicit */_Bool) 3173535509146430988ULL)) ? (14ULL) : (16549728200899315917ULL));
                            var_29 = 564265058980491588ULL;
                            var_30 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(7604701507679285191ULL)))) ? ((+(arr_38 [i_5] [2ULL]))) : (((var_10) | (arr_19 [i_11])))))) ? ((+(18446744073709551615ULL))) : (((((var_7) / (var_11))) + (7744398456371171221ULL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 4; i_14 < 9; i_14 += 3) 
                        {
                            {
                                var_31 = ((((/* implicit */_Bool) 16277581745419952115ULL)) ? (arr_40 [i_5] [i_5] [i_5]) : (min((((var_11) % (var_4))), ((-(var_9))))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (arr_17 [i_14])));
                            }
                        } 
                    } 
                } 
                var_33 = ((((/* implicit */_Bool) var_12)) ? (min((arr_48 [i_5] [i_5] [i_6]), (arr_45 [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_42 [i_5] [i_6] [10ULL])))) && (((/* implicit */_Bool) ((arr_10 [i_6] [i_6] [3ULL] [i_5]) % (18446744073709551615ULL)))))))));
            }
        } 
    } 
    var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5105001335345752967ULL)) ? (var_0) : (15273208564563120630ULL)))) ? ((-(var_3))) : (var_3)))) ? (max((((/* implicit */unsigned long long int) ((18446744073709551615ULL) == (9445645058751833801ULL)))), (((((/* implicit */_Bool) var_10)) ? (910085355786124384ULL) : (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_11))) <= (((var_3) % (4503599627370495ULL))))))));
    var_35 ^= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((11ULL) < (min((var_9), (var_14))))))) : (min((var_11), (((((/* implicit */_Bool) var_13)) ? (var_11) : (18446744073709551615ULL))))));
}
