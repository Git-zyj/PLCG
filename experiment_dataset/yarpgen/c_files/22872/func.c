/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22872
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
    var_10 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= ((-2147483647 - 1)))))) : (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    var_11 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) 1048575ULL)) ? (((/* implicit */int) (unsigned short)36586)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12540955458334987097ULL)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)31))))));
                arr_4 [21] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)-32748)) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [(unsigned char)15] [i_1] [i_1])) : (((/* implicit */int) (short)-1)))) : (((((/* implicit */_Bool) 9107878761614347807ULL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) var_4)))))) - ((-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)14] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))))));
                var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3585513785729534389LL)))) % ((((!(((/* implicit */_Bool) arr_1 [(signed char)21] [i_1])))) ? (((var_8) << (((1036183254U) - (1036183243U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(7623066056161132375LL)))) ? (((((/* implicit */_Bool) (unsigned short)29982)) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned short)32382))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */int) (unsigned short)54425))))) ? (((((/* implicit */_Bool) 14U)) ? (arr_6 [i_0] [i_3]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)6] [i_4 + 2] [i_3]))) <= (arr_1 [i_0] [i_4])))))))));
                                var_16 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 911415027)) ? (((/* implicit */int) (unsigned short)37064)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1] [i_3]))))) ? (((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_2])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (var_8))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */int) (signed char)-87))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44))))))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned short)3837)) : (((/* implicit */int) (short)-3976)))))))));
                            }
                            arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2 - 1])) + (arr_0 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_2)) : (arr_1 [(unsigned char)22] [i_3]))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)246)) ? (-1056934280) : (-1927396223))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
