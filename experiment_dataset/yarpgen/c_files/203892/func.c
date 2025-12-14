/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203892
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_1]))))) ? ((~(3341230562617796843ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)75)), ((-(((/* implicit */int) (unsigned short)50547)))))), ((~(var_3)))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_0 [i_2]), (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))))) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) 31LL)) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_4 [i_0])))) : (((var_3) << (((((((/* implicit */int) arr_3 [i_0] [i_0 - 1] [(short)14])) + (133))) - (25)))))))));
                        arr_9 [i_0] [i_0 + 1] [i_1] [(signed char)0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_3] [i_1] [(unsigned char)11])) ? (((((/* implicit */long long int) var_7)) / (var_17))) : (max((((/* implicit */long long int) (signed char)75)), (-1LL)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = (i_0 % 2 == zero) ? (((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_2] [20LL]))) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (19LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))))) : (((((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_2] [20LL]))) : (((/* implicit */int) arr_1 [i_0])))) - (2147483647))) + (2147483647))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (19LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)224)))))));
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_4])) : (((/* implicit */int) var_2))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((25) != (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_1] [i_4] [i_0 + 2] [i_1]))))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_2), (var_15))))))) : (((((/* implicit */_Bool) (~(-19LL)))) ? (((((/* implicit */_Bool) -1LL)) ? (3341230562617796843ULL) : (15105513511091754767ULL))) : (((/* implicit */unsigned long long int) (~(25))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))) % (var_7)));
                    }
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (11LL)));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) ((short) ((11078614740765708811ULL) / (15105513511091754748ULL)))))));
                }
            } 
        } 
        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [(unsigned short)6])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)8])) ? (arr_8 [(signed char)12] [i_0] [i_0 + 2] [(signed char)12]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_7 [(unsigned char)12])) : (min((((/* implicit */int) var_19)), (var_3))))) : (((((/* implicit */_Bool) arr_8 [(short)8] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (arr_8 [(unsigned short)16] [i_0] [i_0] [i_0 + 1]) : (arr_8 [(_Bool)1] [i_0] [i_0] [i_0 + 1])))));
        var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)0] [i_0] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0] [6])) : (arr_8 [18] [i_0] [i_0 - 1] [i_0 + 2])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [(signed char)10])) : (((/* implicit */int) var_19)))), ((~(((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0] [i_0] [14ULL]))))))) : (max((((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [(signed char)16])), (max((-11LL), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [0ULL] [(unsigned char)9]))))))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((short) var_3)), (((/* implicit */short) max(((signed char)75), (((/* implicit */signed char) (_Bool)1)))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-18039)) + (2147483647))) >> (((((/* implicit */int) arr_7 [10U])) + (14146)))))), (min((((/* implicit */unsigned long long int) (short)21469)), (var_14)))))) ? (arr_10 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2]) : (var_5))))));
    }
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (min((((/* implicit */long long int) (signed char)118)), (var_18)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */signed char) var_6)))))) : (min((((((/* implicit */_Bool) var_7)) ? (var_0) : (var_17))), (-1LL)))));
}
