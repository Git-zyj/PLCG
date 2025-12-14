/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25647
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1 - 2] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-79)))))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_8), (arr_3 [i_0] [i_1] [(signed char)14])))) <= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (97))))) <= (((/* implicit */int) (unsigned char)16)))))));
                var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) | (8875021476171592141LL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_2), (-2807915140897324300LL)))))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_4))))), (-884243390)))) : (arr_8 [i_0] [i_1] [14] [i_3])));
                            /* LoopSeq 2 */
                            for (int i_4 = 4; i_4 < 13; i_4 += 2) 
                            {
                                var_15 += ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) ? (10442429) : (((((/* implicit */_Bool) var_0)) ? (-10442430) : (((/* implicit */int) arr_10 [i_4] [i_2]))))))));
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_4])))) - (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) - (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))))) : (((var_9) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) (~(arr_9 [i_5] [i_2] [i_2] [i_1] [i_2] [i_0])));
                                var_18 = ((/* implicit */unsigned int) -10442430);
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)-21))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (min((((((/* implicit */_Bool) var_10)) ? (1074086518) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned short) var_2)))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_4))))) : (((/* implicit */int) var_10))))) ? ((-(var_2))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
}
