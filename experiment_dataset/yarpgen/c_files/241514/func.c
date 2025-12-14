/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241514
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
    var_11 = ((/* implicit */unsigned int) (+(var_4)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_2] [i_2])), (var_9))))));
                        arr_12 [i_0 + 3] [i_0 + 3] [i_3] = ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_3]))));
                    }
                    arr_13 [10LL] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) + (((/* implicit */int) var_2))))) - (min((var_5), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_2]))))))));
                    var_12 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) == (((/* implicit */int) var_10))))), (max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) | (((/* implicit */unsigned long long int) 2140934963))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) var_6);
                        var_14 += ((/* implicit */signed char) (_Bool)1);
                        arr_17 [i_0] [i_0] [i_0 + 1] [i_0] |= ((/* implicit */unsigned long long int) (-(((1700444260) << (((((-1900860435) + (1900860440))) - (5)))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) var_10);
                        var_15 = ((/* implicit */unsigned char) (+((-(-9223372036854775799LL)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((min((min((4248133645606269552ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_5])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (913935718U)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749)))));
                        var_17 = ((/* implicit */unsigned int) arr_3 [i_0]);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((max((var_6), (((/* implicit */short) arr_2 [i_0 + 1])))), (((/* implicit */short) (((!(((/* implicit */_Bool) -1106822263)))) && (((/* implicit */_Bool) max((arr_16 [i_0] [i_1] [i_0] [i_2] [i_1]), (((/* implicit */unsigned int) arr_19 [i_2] [i_1] [i_2] [i_2])))))))))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) var_8)) & ((+(arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))))));
    }
}
