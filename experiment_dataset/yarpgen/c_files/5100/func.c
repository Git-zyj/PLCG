/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5100
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
    var_12 = ((/* implicit */int) ((8257536U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33965)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) (((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) min((arr_8 [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */short) arr_1 [i_0])))))));
                    var_14 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))))) <= (arr_7 [i_0] [i_1] [i_2]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_10))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-6495362369535326971LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2] [0U])) / (((/* implicit */int) arr_5 [i_2] [(short)4] [i_2]))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_0] [i_0] [i_1] [15U] = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (-(arr_6 [i_0])))))))));
                    var_15 = ((/* implicit */signed char) var_2);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 1] [i_3] [(unsigned char)3])) + (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 1] [i_3] [5]))))) - ((+(arr_10 [i_3] [(signed char)4] [i_3 - 1] [i_3])))));
                                var_17 |= (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [3] [i_1] [i_4])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (signed char)-123))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)122)), (arr_15 [i_0 - 1])))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_22 [i_0] [i_0] = ((/* implicit */short) min(((+(((arr_0 [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (var_0))))), (((((/* implicit */_Bool) ((arr_6 [11]) ^ (((/* implicit */int) arr_3 [i_6] [i_0] [i_6]))))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_5] [i_0])) : (arr_19 [14ULL])))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) var_11);
                            arr_25 [i_0] [(_Bool)1] [i_0] [14LL] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) 566465432);
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_20 [i_0])), (arr_10 [i_5] [i_6] [i_7] [i_8])));
                        }
                        var_21 = ((/* implicit */_Bool) var_1);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_18 [i_7] [i_7]))));
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_16 [i_7])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)102)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_29 [i_9 - 1])) != (((/* implicit */int) arr_28 [i_9 - 1]))))), (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (short)-26628)) : (((/* implicit */int) arr_29 [i_9 - 1]))))));
        arr_30 [i_9] [i_9] = ((/* implicit */short) arr_27 [i_9 - 1]);
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_26 [i_9 - 1])) & (((/* implicit */int) (signed char)28)))) & (((/* implicit */int) max((arr_26 [i_9 - 1]), (arr_26 [i_9 - 1])))))))));
    }
}
