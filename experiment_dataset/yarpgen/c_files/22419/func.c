/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22419
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
    var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((signed char)53), (((/* implicit */signed char) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24662)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)24827)), (var_2)))) ? (((((/* implicit */_Bool) (short)24827)) ? (((/* implicit */int) var_0)) : (var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (0))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 16376U)) ? (0) : (-1))), (max((((/* implicit */int) (short)18022)), (var_5)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-38)), (var_6)))) ? (min((((/* implicit */unsigned int) var_0)), (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)128)))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_9), (((/* implicit */unsigned int) 0)))), (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) max((max((-243787060), (var_2))), (min((-1), (var_5)))))) : (((((/* implicit */_Bool) max((var_1), (var_10)))) ? (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */_Bool) (unsigned short)7466)) ? (((/* implicit */long long int) var_9)) : (var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1645354931)), (0U)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)30)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ? (arr_4 [i_0] [i_1] [(unsigned short)6]) : (((/* implicit */long long int) 16376U))))) ? (((/* implicit */int) max((var_7), (arr_9 [i_0] [(unsigned char)7] [i_0])))) : (max((((/* implicit */int) (_Bool)1)), (arr_8 [i_2] [i_0])))))) : (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) 0)) : (var_9)))))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22889)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32321)))))) ? (min((arr_8 [i_0] [(signed char)8]), (var_5))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_0)) : (arr_7 [10LL])))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (-5121145442564241897LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1] [i_0]), (((/* implicit */unsigned char) (signed char)-1))))))))) : (min((((/* implicit */unsigned long long int) max((arr_8 [i_2] [(short)7]), (arr_7 [i_2])))), (min((((/* implicit */unsigned long long int) arr_6 [0] [i_1] [i_2])), (18446744073709551615ULL)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_0 [i_3]) : (((/* implicit */int) (signed char)-2))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)3])))))));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_11 [i_3] [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (-1384661778) : (((/* implicit */int) (unsigned char)178))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))))));
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((1677101648), (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1078084156)), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [9U])) ? (var_9) : (131510120U)))) : (max((1621291170916730615LL), (((/* implicit */long long int) (unsigned short)29531))))))) : (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [8] [(signed char)3] [(signed char)1] [i_2]))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_3 [3LL] [i_2]) : (arr_3 [i_0] [i_1]))))))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */int) (short)(-32767 - 1))), (arr_8 [i_1] [i_2]))), (max((((/* implicit */int) (signed char)-29)), (arr_7 [i_1])))))) ? (max((((/* implicit */long long int) max((arr_8 [i_0] [i_0]), (-1638245765)))), (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_9)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (unsigned char)168)))))))));
                }
            } 
        } 
    } 
}
