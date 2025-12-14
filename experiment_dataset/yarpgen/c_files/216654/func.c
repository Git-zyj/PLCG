/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216654
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (min((min((var_15), (arr_9 [16U] [16U] [i_0] [i_0]))), (((/* implicit */unsigned int) (+(var_2))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned int) var_0);
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [12U]), (arr_12 [i_0] [i_1 + 2] [11ULL] [(_Bool)1] [i_4 - 1]))))) < (min((((/* implicit */unsigned int) arr_4 [i_1] [i_1 + 1] [i_1 + 2])), (2340682385U)))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                            {
                                var_22 ^= arr_10 [12U] [i_3] [i_2] [i_2] [16LL] [i_3] [i_0];
                                arr_15 [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1] [(signed char)1] [i_2]);
                            }
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) min((((min((((/* implicit */unsigned int) (_Bool)1)), (2904747499U))) - (arr_10 [i_3] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_1] [i_1] [14ULL])), ((-(84295725)))))) ^ (max((67108863ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))));
                            var_24 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3965498869U)) ? (4265955348U) : (((/* implicit */unsigned int) -1779118688))))) ? (((/* implicit */int) ((var_6) > (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] [i_3])))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_6 = 4; i_6 < 18; i_6 += 4) 
                {
                    var_25 = ((/* implicit */long long int) arr_18 [3] [i_1 + 1] [6U] [(_Bool)1]);
                    var_26 = ((/* implicit */_Bool) ((min((1954284919U), (((/* implicit */unsigned int) (signed char)106)))) * (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(signed char)12] [i_1 - 1] [i_1 - 1] [i_1]))))))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1] [i_6 - 1] [2])) : (min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) 3861928704U))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) & (max((((/* implicit */unsigned long long int) var_5)), (var_18)))))) ? (max((((/* implicit */unsigned int) min((var_10), (((/* implicit */short) var_0))))), (max((var_15), (((/* implicit */unsigned int) var_3)))))) : (min((((/* implicit */unsigned int) ((_Bool) var_17))), (var_15)))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_14)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [8] [i_8] [i_8]))) + (16316322321142571025ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_19 [i_7] [i_7])), (arr_22 [i_7] [i_7] [i_8])))))))))));
                arr_25 [i_8] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_19 [i_8 + 1] [i_8 + 1])), (arr_20 [i_8 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_8 + 1] [i_8]))) - (((((/* implicit */_Bool) arr_20 [13LL])) ? (arr_19 [9] [i_8 + 1]) : (var_17))))))));
            }
        } 
    } 
}
