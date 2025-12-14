/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19325
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))) ? (((max((((/* implicit */int) arr_2 [13U] [22U])), (arr_0 [i_0 + 1] [i_0]))) ^ ((-(((/* implicit */int) arr_2 [i_0 + 2] [1LL])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) * (((/* implicit */int) arr_1 [13U])))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_0 [(short)22] [i_0]) : (((/* implicit */int) arr_2 [i_0 + 2] [15U]))))))));
        arr_4 [(unsigned short)17] [7] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [12U] [i_0 + 1]))))));
        var_10 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) arr_1 [i_0 + 2]))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 2] [19ULL]), (((/* implicit */unsigned short) arr_1 [i_0])))))) / (max((15094265139357637LL), (15094265139357649LL)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [15LL])) ? (max((((unsigned int) arr_5 [i_1])), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [13ULL] [17ULL]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1]))))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                {
                    var_12 = arr_9 [i_3] [i_2] [0LL];
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_3] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
                                arr_17 [3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (+((-(arr_6 [i_3]))))));
                                arr_18 [i_1] [i_2 - 2] [i_3] [9U] [19LL] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(arr_14 [(signed char)16] [5LL] [(signed char)20] [i_3 + 1] [i_4] [i_5] [13ULL]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15094265139357637LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [18ULL] [(unsigned short)16])) ? (arr_6 [i_3]) : (((/* implicit */long long int) arr_7 [12ULL] [(short)2] [i_3 - 1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_13 *= ((/* implicit */short) max(((-(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [20ULL])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */int) arr_12 [(short)6] [19] [(short)17] [i_1])))))), ((-(min((arr_9 [i_1] [(signed char)20] [2]), (((/* implicit */int) arr_1 [i_1]))))))));
        var_14 = ((/* implicit */short) ((_Bool) max((arr_9 [i_1] [(unsigned short)4] [i_1]), (max((arr_7 [i_1] [i_1] [i_1]), (arr_10 [i_1]))))));
        arr_19 [16LL] = min((((((/* implicit */_Bool) ((signed char) arr_15 [i_1] [i_1] [(signed char)2] [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [20])) ? (arr_8 [i_1] [i_1]) : (((/* implicit */int) arr_1 [(signed char)17]))))) : (max((arr_6 [i_1]), (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [(short)14] [18LL])))))), (((/* implicit */long long int) min((max((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])), (arr_8 [i_1] [i_1]))), (arr_9 [i_1] [i_1] [i_1])))));
    }
    var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((unsigned long long int) var_2)) / (((/* implicit */unsigned long long int) ((int) var_3))))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_3))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))) ? (var_1) : ((~(((int) var_1)))));
}
