/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19520
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
    var_15 = ((/* implicit */_Bool) ((min((13842972209883669801ULL), (((/* implicit */unsigned long long int) 8551200224602458867LL)))) - (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */unsigned long long int) var_0)) : (((4603771863825881799ULL) - (13842972209883669814ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0 - 3] [i_1] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */_Bool) ((arr_0 [i_0 - 3] [6ULL]) + (var_8)));
                                var_16 = arr_1 [i_2];
                                arr_19 [i_0 + 1] [i_3] [i_2] [8] [i_0 + 1] = ((/* implicit */unsigned long long int) ((arr_17 [i_0 - 2] [(_Bool)0] [(_Bool)0] [i_2] [i_3] [i_3 - 1]) / (arr_17 [i_0 - 2] [i_2] [i_2] [i_2] [i_2] [i_3 - 1])));
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 4603771863825881815ULL)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [6ULL])) : (var_6))));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_4] = ((((4603771863825881809ULL) >> (((var_5) - (3650577955U))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) min((var_18), (var_5)));
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 13842972209883669785ULL);
                    var_19 *= ((/* implicit */unsigned short) var_2);
                }
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_20 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_26 [i_5] [i_1] &= ((/* implicit */unsigned char) (~(((unsigned long long int) 4603771863825881796ULL))));
                        arr_27 [i_6] [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) 4603771863825881801ULL)) ? (13842972209883669819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (var_9)));
    var_22 = ((/* implicit */unsigned short) (((-(max((13842972209883669822ULL), (((/* implicit */unsigned long long int) var_4)))))) << (((((/* implicit */int) ((short) var_6))) + (1580)))));
}
