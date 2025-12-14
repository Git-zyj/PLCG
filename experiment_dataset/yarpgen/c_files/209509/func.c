/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209509
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) var_19);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 12; i_4 += 4) 
                            {
                                arr_16 [i_4] [i_4 - 2] [i_0] [i_2] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((((arr_14 [i_4] [i_3] [i_2 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_8))) + (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_10 [i_2] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                                arr_17 [i_0] [i_1] [i_4] [i_2 - 2] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_3])))) ? (((arr_7 [i_2] [i_3] [i_4]) ? (4007737699444523041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_3] [i_2 - 4] [i_1] [i_0]))))) : (arr_15 [i_3] [i_2 + 2] [i_3] [i_4 + 2]));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                            {
                                arr_20 [i_3] [i_5 - 1] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3])), (var_12)))) ? ((-(-8679018886241493099LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] [i_3] [i_5])) % (arr_6 [i_5] [i_3] [i_2]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2 - 4] [i_2]))))) : (((/* implicit */int) var_9))));
                                arr_21 [i_0] [i_5 - 1] [i_3] [i_2 + 2] [i_1 + 1] [i_1] [i_0] = ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                            }
                            arr_22 [i_1 - 1] [i_0] [i_1] [i_2 - 4] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_2 + 2] [i_0] [i_0 + 1])) ? (arr_15 [i_0] [i_2] [i_0 + 1] [i_1]) : (arr_19 [i_3] [i_3] [i_0] [i_2] [i_3] [i_2 - 4] [i_1]))) << (((/* implicit */int) ((var_13) > (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_10 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))))));
                        }
                    } 
                } 
                arr_23 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)201)), (arr_18 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_0])))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_5 [i_1 - 2] [i_0 + 1] [14LL]))))));
                arr_24 [i_0] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_18 [i_1 - 2] [i_1] [i_0] [i_0] [i_0 + 1])))) : (arr_19 [i_1 + 3] [i_1 + 3] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((-(27ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (var_2)));
}
