/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35435
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29195)) * (((/* implicit */int) (short)9756))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 ^= ((((((/* implicit */int) var_10)) < (((/* implicit */int) arr_7 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1] [i_0])))) ? (((arr_1 [i_3]) << (((var_5) - (645097377U))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_9)), (var_0))), (((/* implicit */int) arr_6 [8ULL] [8ULL] [12LL]))))));
                            arr_11 [i_2] [(unsigned short)13] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_0]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_13 = ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2] [i_1 - 1])) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))));
                                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                                arr_15 [i_0] [i_2] = ((/* implicit */_Bool) var_5);
                            }
                            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((((/* implicit */_Bool) 5119668561433773073ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [(short)8] [i_5])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])))) : ((-(((/* implicit */int) var_3))))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))) ? (max((max((((/* implicit */int) var_3)), (arr_14 [i_2] [11ULL] [i_2] [i_3] [i_5]))), (var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) && (((/* implicit */_Bool) arr_14 [i_2] [i_1] [(short)0] [i_2] [i_1 + 1])))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [11] = (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1 + 1] [i_2])))));
                                var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_2] [i_1 - 1])) ? (min((arr_10 [(short)7] [i_1] [0ULL] [i_3] [i_2]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9777)))))));
                            }
                            arr_20 [i_0] [i_2] = ((/* implicit */unsigned long long int) (short)9802);
                        }
                    } 
                } 
                arr_21 [(unsigned char)9] [(unsigned char)9] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_0] [i_0]))))));
                var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)9779))))));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))));
            }
        } 
    } 
}
