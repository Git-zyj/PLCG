/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221197
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) var_10);
        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0] [i_0])))))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122)))))) / (max((((/* implicit */long long int) var_6)), (arr_0 [i_0 - 3] [i_0])))))));
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) max((arr_1 [i_0]), (var_3)))), (min((3794559473257083289LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((max((var_10), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (~(arr_10 [i_5]))))))), (((long long int) (-(var_10))))));
                                arr_18 [i_4] [i_4] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_12);
                                var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (arr_6 [i_2])));
                                arr_19 [i_1] [i_2] [i_4] [7ULL] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_16 [i_1] [i_5] [i_4 + 1] [(_Bool)1] [i_1] [i_1])) ? (var_13) : (max((((/* implicit */unsigned int) var_9)), (var_13)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) var_0);
                    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) ? (min((((arr_7 [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18776))))), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_3] [i_2])) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_3] [i_2] [i_1] [i_1])))));
                    var_20 -= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 127ULL)) ? (8184500245292085377ULL) : (18446744073709551603ULL))))) >> (((((min((((/* implicit */unsigned int) arr_10 [5])), (arr_3 [i_3] [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6))))))) - (1265113558U)))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_1] [(_Bool)1] [1U] [i_1] [i_1] [i_1])))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_4 [i_1] [i_1]))));
        arr_20 [(signed char)7] [i_1] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(12ULL)))) ? (((/* implicit */int) (unsigned short)23451)) : (((int) (unsigned short)42330))))) ? (((/* implicit */int) var_4)) : (max((((/* implicit */int) min(((unsigned char)251), ((unsigned char)5)))), ((~(((/* implicit */int) var_11))))))));
}
