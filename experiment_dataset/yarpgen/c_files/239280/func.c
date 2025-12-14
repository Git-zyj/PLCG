/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239280
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) min(((~(arr_2 [i_0]))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 &= ((/* implicit */unsigned short) ((short) min((7163967970719450906ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)109)) & (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (short)-1)))) && (((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)57216)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (16569816458021444343ULL))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (-2147483647 - 1));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                arr_20 [i_2] [(_Bool)1] [6ULL] &= ((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_5);
                        var_17 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_6 [i_2])) : (arr_18 [i_1] [i_1] [i_2] [6LL] [i_3] [i_6] [(unsigned char)10])));
                    }
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2924674299821775155LL), (((/* implicit */long long int) (short)0))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_8), (var_8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)8299)), (var_1)))) ? (var_3) : ((+(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) var_0))));
    var_20 = ((/* implicit */int) var_8);
}
