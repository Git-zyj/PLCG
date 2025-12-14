/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43548
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_8 [i_0] [i_0] [i_1] [0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1] [i_1]) & (arr_6 [i_1] [i_1] [i_1])))) : (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [i_1])), (var_9)))));
                        arr_9 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) 570975165U);
                    }
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        var_11 -= ((/* implicit */unsigned char) 3723992130U);
                        var_12 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) : (arr_1 [i_2] [i_0])))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_4 - 2] [i_4])) ? (((/* implicit */unsigned long long int) 3723992125U)) : (arr_11 [i_0] [i_1] [i_2 - 1] [i_4] [i_2] [i_2]))))) ? ((((((+(((/* implicit */int) arr_4 [i_0] [i_0])))) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0])) + (91))))) : (((/* implicit */int) var_7))));
                        var_13 = ((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0 + 2] [12] [i_0 + 2] [i_0 + 2] [i_4]);
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_0])), (((137430564864LL) >> (((((/* implicit */int) (unsigned short)19527)) - (19518)))))));
                    var_14 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 1692524027U)))))) : (570975165U)));
                    var_15 = ((/* implicit */int) (~(min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2602443268U)) ? (((/* implicit */int) (signed char)3)) : (-1408000093))))))));
                }
                var_16 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) ((unsigned long long int) arr_7 [12ULL] [12ULL] [i_1])))), (((((arr_3 [i_0]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 3723992131U)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) arr_0 [i_1])))) - (32701)))))));
                var_17 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) (signed char)2)))))));
                arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((arr_2 [i_0 + 1]) - (((/* implicit */unsigned int) ((1408000097) - (1408000093)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_0] [(short)6] [i_0 + 3] [i_1] [i_1])), (arr_6 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) ((unsigned char) ((int) var_4)));
}
