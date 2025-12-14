/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190748
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
    var_10 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_8 [i_0] [i_2] [i_0] [(_Bool)1] = (signed char)127;
                    var_11 = ((/* implicit */unsigned long long int) var_2);
                    var_12 = ((/* implicit */_Bool) max((((long long int) ((((/* implicit */_Bool) 2305843009212645376ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (var_5)))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_0 [i_1]))))))));
                    arr_9 [i_0] [(short)11] [(short)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL)))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (34359730176ULL))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 2305843009212645354ULL))), (((16140901064496906262ULL) + (((/* implicit */unsigned long long int) var_6)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(3096405537U)))), ((~(((((/* implicit */_Bool) (unsigned short)6573)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_3] [i_5] = (~(2305843009212645354ULL));
                            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_4])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) + (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9474))) : (2305843009212645354ULL)))));
                            arr_20 [i_5] [i_0] [(signed char)0] [i_0] [i_0] = ((/* implicit */unsigned short) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 128U)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)29104))) + (var_2)))) ? (6474028160954184877ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))));
                            var_14 = ((/* implicit */unsigned int) var_3);
                        }
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)67))));
                            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) : ((+(0ULL)))));
                            arr_26 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9474))) : (max((((/* implicit */unsigned long long int) var_9)), (arr_23 [i_0])))))) ? (max((9ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-(var_6))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (-4156878190976364921LL))))))));
                        }
                        for (short i_7 = 4; i_7 < 14; i_7 += 1) 
                        {
                            arr_29 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)1);
                            var_16 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_6)) >= (18446744073709551605ULL))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7 - 1] [i_0] [i_7 - 3]))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_22 [i_7 - 4] [i_7 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_22 [i_7 + 1] [i_7 - 4]) : (arr_22 [i_7 - 1] [i_7 - 1])))) : (((((/* implicit */_Bool) (short)1)) ? (-5725751218430427LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21070)))))));
                            arr_30 [i_0] = ((/* implicit */long long int) arr_5 [i_1] [i_3] [i_0]);
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (_Bool)1);
                            var_19 = 2147483647;
                            var_20 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 7323030739921630925ULL)) ? (((/* implicit */long long int) -2147483647)) : (9223372036854775807LL))), (((/* implicit */long long int) (signed char)-1)))) ^ (((((/* implicit */_Bool) ((5070613152667457972ULL) & (((/* implicit */unsigned long long int) 611293450))))) ? (var_2) : (((/* implicit */long long int) min((1208445287U), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                            var_21 = 16140901064496906261ULL;
                        }
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_7))));
                            var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (262143U)))), (((unsigned long long int) (!(arr_28 [i_9] [i_9] [i_9] [i_9] [(_Bool)1] [i_9] [i_9]))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_33 [i_10] [i_4] [i_0] [i_3] [i_3] [i_1] [i_0])), (arr_23 [(unsigned short)9])))) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551586ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305843009212645354ULL)) ? (5725751218430426LL) : (270582939648LL)))) : (((((unsigned long long int) -255222316)) / (((/* implicit */unsigned long long int) 2918109863U))))));
                            arr_38 [i_10] [i_0] [i_1] = ((/* implicit */short) 18446744073709551615ULL);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 4; i_11 < 12; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [13LL] [i_0] = ((/* implicit */unsigned short) var_4);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((5725751218430427LL) ^ (((/* implicit */long long int) 329255968U))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((-270582939648LL) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_4] [(_Bool)1] [i_4] [i_0] [i_0] [i_0]))) % (arr_37 [(_Bool)1] [i_0] [i_3] [i_3] [(signed char)11] [i_0]))) - (1ULL)))));
                        }
                    }
                }
                arr_43 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 2147483647);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_6)) ? (2305843009212645354ULL) : (((/* implicit */unsigned long long int) 270582939653LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -270582939648LL)))))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) (signed char)-1);
                var_29 = ((((/* implicit */_Bool) (~(4294967295U)))) ? (((((/* implicit */_Bool) -5725751218430427LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) arr_34 [i_13] [i_13] [i_13] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) arr_34 [i_12] [14ULL] [i_12] [i_12] [i_12] [i_12])) : (0ULL))));
                var_30 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (unsigned char)30)) ? (arr_37 [i_13] [i_13] [i_12] [i_12] [i_12] [i_13]) : (404781695753482561ULL))))) << (((((((/* implicit */_Bool) ((8) % (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */int) var_9)))) : ((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))) - (2006364252)))));
            }
        } 
    } 
}
