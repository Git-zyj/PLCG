/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36111
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) var_1)) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_1]))))))));
                var_22 += ((/* implicit */long long int) ((((6453392862281059481ULL) > (((((/* implicit */_Bool) var_13)) ? (6453392862281059481ULL) : (arr_3 [i_0] [i_0]))))) ? (((((arr_0 [i_1]) > (11993351211428492143ULL))) ? (((/* implicit */unsigned long long int) var_2)) : (6453392862281059472ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) var_9))))), (min((((/* implicit */unsigned long long int) var_5)), (6453392862281059477ULL)))))));
                    arr_7 [i_0] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 11993351211428492134ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (11993351211428492164ULL)))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))), (((var_11) ? (arr_0 [i_0]) : (6453392862281059481ULL)))))) ? ((-(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (6453392862281059472ULL) : (arr_3 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 11993351211428492135ULL))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_24 = ((/* implicit */long long int) 11993351211428492139ULL);
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 4; i_4 < 16; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11993351211428492134ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) != (11993351211428492139ULL))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((var_6) * (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])))) : ((-(var_2)))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_4 [i_3] [i_3]))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) : (var_6)))))) * (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_17 [i_0] [i_0] [i_0] [i_0] = (~((((!(((/* implicit */_Bool) 6453392862281059470ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((-(6453392862281059483ULL))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) - (50228))))), (((/* implicit */int) var_18))))) ? (max((var_0), (((/* implicit */unsigned long long int) arr_9 [i_4 - 3] [i_4 + 1] [i_4 + 2] [i_4 + 2])))) : ((-(6453392862281059472ULL))))))));
                        var_26 = (-(((((/* implicit */int) ((((/* implicit */_Bool) 6453392862281059476ULL)) && (((/* implicit */_Bool) 11993351211428492166ULL))))) & (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) && (((((/* implicit */_Bool) 11993351211428492152ULL)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11993351211428492135ULL)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))))) : (((((/* implicit */unsigned long long int) (-(arr_18 [i_1] [i_1] [i_1])))) / (((((/* implicit */_Bool) 6453392862281059476ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11993351211428492135ULL)))))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) / (var_16)))) ? (((/* implicit */int) arr_2 [i_0])) : ((+(((/* implicit */int) var_14)))))) >= (((/* implicit */int) (!(((((/* implicit */int) var_3)) != (((/* implicit */int) var_10)))))))));
                        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_16)) ? (6453392862281059472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (6453392862281059495ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((((11993351211428492141ULL) > (var_16))), (((((/* implicit */_Bool) 6453392862281059469ULL)) || (((/* implicit */_Bool) var_6))))))) << (((/* implicit */int) ((11993351211428492122ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 11993351211428492139ULL)))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6453392862281059481ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))))))) ? (var_6) : (((/* implicit */unsigned int) min((((((var_4) + (2147483647))) >> (((((/* implicit */int) var_9)) + (30238))))), (((/* implicit */int) var_7)))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) var_10)) == ((+(((((/* implicit */unsigned long long int) var_6)) * (11993351211428492134ULL)))))));
                    }
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11993351211428492147ULL)))))) != (((arr_12 [i_0] [i_1] [i_3]) ? (11993351211428492139ULL) : (((((/* implicit */_Bool) 11993351211428492147ULL)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_6))))))));
                    var_29 -= ((/* implicit */_Bool) (-(((((/* implicit */int) var_14)) & (((/* implicit */int) var_19))))));
                }
                var_30 += ((/* implicit */_Bool) 6453392862281059518ULL);
            }
        } 
    } 
}
