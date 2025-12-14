/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231319
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_8 [23ULL] [(short)3] [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3302564765U)) : (var_7)))), (((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3] [i_0] [i_0 - 1])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0 + 2])), (15630970154667668769ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [8U])))) : (((/* implicit */int) max(((signed char)127), ((signed char)-7))))))) : (min((min((var_7), (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) max(((unsigned char)14), (((/* implicit */unsigned char) (signed char)-7)))))))));
                arr_9 [(signed char)22] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */int) (short)32767)), (-865658499)))), (min((((/* implicit */long long int) min((var_4), (((/* implicit */short) (unsigned char)70))))), (max((((/* implicit */long long int) 992402530U)), (arr_7 [i_0 + 1])))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3302564765U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (3302564765U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (min((3302564745U), (992402551U)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned long long int) 1051964071)) : (12887627511009431263ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [11LL])) ? (992402545U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-6704620034618398995LL))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_3] [i_0] [i_4 + 1]))) : (3ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0 - 1])), (var_0)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1051964072)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */_Bool) var_4)) ? (992402530U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))))))))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_2])) : (var_9))), (((/* implicit */int) max((((/* implicit */short) arr_10 [(short)2] [13ULL])), (arr_14 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5559116562700120341ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [18ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)8263), (((/* implicit */short) (signed char)127)))))) : (min((((/* implicit */long long int) arr_6 [4ULL])), (arr_0 [i_0] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)252)))))) ? (((/* implicit */unsigned long long int) max((arr_0 [i_2] [(short)1]), (((/* implicit */long long int) 3302564745U))))) : (((((/* implicit */_Bool) var_6)) ? (arr_19 [14ULL] [14ULL] [14ULL] [14ULL] [14ULL] [i_4 - 1]) : (((/* implicit */unsigned long long int) 2147483647))))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_6), (((/* implicit */short) (signed char)7))))), (((((/* implicit */_Bool) 5559116562700120360ULL)) ? (((/* implicit */long long int) -1051964071)) : (8216508057570451434LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (13458804188912459954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (max((((/* implicit */long long int) (short)-7259)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1856267755621559696ULL)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_1]))))))) : (min((((((/* implicit */_Bool) 992402545U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_3] [(short)15]))))), (((/* implicit */long long int) max((arr_17 [i_1] [i_1] [i_2]), (((/* implicit */short) arr_11 [i_1] [i_0])))))))));
                                var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4707)) ? (((/* implicit */int) (short)8707)) : (((/* implicit */int) (signed char)-37))))) ? (((/* implicit */int) (short)27758)) : (((/* implicit */int) (signed char)13)))), (((/* implicit */int) min((max((((/* implicit */short) (signed char)31)), (arr_12 [i_0] [i_1] [i_3]))), (min((((/* implicit */short) arr_18 [(short)12] [(short)12] [i_2] [i_2] [i_4 + 2])), (arr_5 [(short)19] [i_1] [i_3]))))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((short)-4708), ((short)5941)))), (((((/* implicit */_Bool) 8128588592296576096ULL)) ? (arr_7 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)0])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [14LL] [22ULL] [(signed char)8] [(short)1] [(unsigned char)6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)13), (((/* implicit */signed char) (_Bool)0)))))) : (min((var_3), (((/* implicit */unsigned long long int) (signed char)-8))))))));
                    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)127)), (var_3)))) ? (max((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8685)) ? (1150284570U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 3] [i_1] [14LL] [i_2])) : (((/* implicit */int) arr_11 [(signed char)12] [i_0]))))) ? (max((17275805536352841754ULL), (((/* implicit */unsigned long long int) 992402531U)))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_5)))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_1), (var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1065828060U)))) : (((((/* implicit */_Bool) 992402524U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (var_7)))) : (max((((/* implicit */unsigned long long int) var_2)), (var_8)))))))));
}
