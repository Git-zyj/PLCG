/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40879
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
    var_12 = ((/* implicit */unsigned long long int) max(((~(var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) min((var_8), (var_8)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) var_1))), ((unsigned short)27507)))), ((+(var_2)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))))));
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned int) ((((arr_10 [i_3 + 4] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 4] [i_3 - 3]) - (min((((/* implicit */int) var_6)), (arr_3 [i_0]))))) != (((((/* implicit */_Bool) 11886652960842623308ULL)) ? (((/* implicit */int) ((_Bool) arr_10 [(short)12] [i_2] [i_2] [i_0] [i_0] [i_2]))) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 + 3]))))));
                                var_16 = ((/* implicit */long long int) min(((~((+(17320069980207899252ULL))))), (((/* implicit */unsigned long long int) ((int) arr_9 [i_3 + 3] [i_4] [i_3 + 3] [i_4])))));
                                var_17 = ((/* implicit */_Bool) var_10);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) ((var_9) == (((/* implicit */unsigned long long int) (((-(-3911684074341710323LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))));
                                var_19 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [(short)4] [i_0] [i_0] [(unsigned short)11]);
                                var_20 = ((/* implicit */unsigned long long int) (signed char)-64);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [(short)12] [i_2] [15] [i_6]);
                                var_22 = max((min((-4476741706282736864LL), (((/* implicit */long long int) (unsigned short)64401)))), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_3] [i_2] [i_0] [i_6])));
                                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)7922)) : (((/* implicit */int) (short)24780))));
                                var_24 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned char) arr_5 [i_3] [i_3 - 1] [i_3 - 2])))));
                                var_26 = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_3 + 1] [i_3 + 3] [i_3] [i_3 - 3] [i_3 - 3] [i_3]) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5185)) ? (var_3) : (arr_8 [i_3] [i_3]))))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned short)19040)) : (((/* implicit */int) (unsigned short)54003))));
                                var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            }
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)6629))));
                        }
                    } 
                } 
            }
        } 
    } 
}
