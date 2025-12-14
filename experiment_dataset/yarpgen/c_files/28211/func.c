/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28211
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
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] = 25ULL;
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2]))))) >> (((((((/* implicit */_Bool) 234192964U)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) + (1124253252827648369LL)))));
                    arr_10 [i_2] [(unsigned char)0] = ((/* implicit */short) ((unsigned long long int) var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((signed char) (~(234192968U))));
                                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (short)22566))));
                                var_23 = ((/* implicit */unsigned char) ((int) var_7));
                            }
                        } 
                    } 
                }
                arr_19 [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) (short)-1053))))));
                var_24 = 3250556338U;
                var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_1] [(short)4] [i_0]), (((/* implicit */short) var_2))))) ? (((((/* implicit */_Bool) 234192959U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) (short)2777)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            {
                var_26 -= ((/* implicit */unsigned long long int) arr_20 [17]);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4060774331U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2396))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12)))) : (max((((/* implicit */unsigned int) var_8)), (4060774331U)))))));
                arr_27 [(signed char)8] [i_6] [i_6 + 1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)-4223)) == (((/* implicit */int) arr_26 [i_6 + 1] [i_5])))))));
            }
        } 
    } 
}
