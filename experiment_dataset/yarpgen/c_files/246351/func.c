/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246351
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
    var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_9)) / (94216231))) : (((/* implicit */int) var_1))))));
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((arr_1 [i_0 + 2]) + (((/* implicit */int) var_7)))) / (min((((/* implicit */int) var_9)), (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_1] [i_1]));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) / (arr_8 [i_0 + 3] [i_1] [i_2] [i_0] [i_4])))) ? (((/* implicit */unsigned long long int) 94216256)) : ((~(9733845424773295478ULL))))), (((/* implicit */unsigned long long int) ((arr_8 [i_0 + 1] [i_1] [(short)4] [i_0 + 3] [i_2 + 1]) <= ((-(((/* implicit */int) arr_9 [i_1] [i_2] [i_4])))))))));
                                var_16 = var_7;
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [6ULL] [i_1] [i_2 - 1] [2] [i_2 + 1] [i_2 + 1])) ? (max(((~(var_10))), (((int) -2067591209)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [(short)8] [(unsigned char)6] [i_2])) : (((/* implicit */int) (unsigned char)75))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                                var_19 = ((/* implicit */unsigned short) ((((max((var_4), (arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) - (((int) arr_6 [i_0] [i_1] [i_1])))) ^ (((/* implicit */int) (!(((arr_5 [i_0] [6]) <= (((/* implicit */int) var_5)))))))));
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                                var_21 = ((/* implicit */int) 13ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 13ULL))));
    }
}
