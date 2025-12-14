/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43864
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((min((var_9), ((-(0))))) >= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))))))))));
                    var_19 = ((/* implicit */signed char) var_12);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] [(unsigned char)13]);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((int) 2766571970U)))))))));
                                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                                var_23 = ((/* implicit */long long int) ((((((unsigned int) var_3)) & (arr_8 [i_4] [i_3] [i_1] [i_1] [i_0]))) >> (((((/* implicit */int) (short)21750)) - (21745)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((arr_4 [(_Bool)0] [(_Bool)0] [i_2] [(_Bool)0]) + (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_3 [i_2] [i_0])), (var_5)))) << (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        for (int i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_17 [i_5 - 2] [i_6] [i_5] [i_6] = (~(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (1528395312U) : (2766571970U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_7] [i_7] [i_6])))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */signed char) arr_22 [i_5] [i_5] [i_5]);
                                var_26 += ((/* implicit */long long int) arr_12 [i_5 - 2]);
                                var_27 &= ((((/* implicit */int) ((unsigned char) var_13))) >> (((((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((1654424772U) * (1528395323U)))))) - (18446744073709545167ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-212))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) (signed char)-64)))))))), (((/* implicit */unsigned long long int) var_11))));
}
