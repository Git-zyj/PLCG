/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50041
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_2)))))));
                    arr_6 [i_0 - 2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(var_4)))))) : (((arr_0 [i_0]) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) - (880909980U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] |= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) arr_0 [i_0 - 2])));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 2]))))) <= (((var_13) << (((((/* implicit */int) arr_1 [i_0 + 1])) - (22)))))));
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)47207)) << (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2])) - (19459))))) < (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1])) : (arr_9 [i_0] [i_0 + 1] [i_1] [i_3] [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((arr_0 [i_0 + 1]) ? (arr_4 [i_0] [i_2] [i_4]) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_4]))))));
                        arr_16 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_0] [i_0 - 1])));
                    }
                }
            } 
        } 
    } 
}
