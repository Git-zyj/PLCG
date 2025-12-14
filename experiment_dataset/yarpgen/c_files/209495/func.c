/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209495
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
    var_17 &= ((/* implicit */_Bool) (-(((var_11) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-839)))))))));
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) var_4)) - (1993717226U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_3)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_19 *= ((unsigned short) arr_6 [i_2] [i_1]);
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)859)), (arr_2 [i_3])));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_0] [i_1 + 1])) ? (var_4) : (((/* implicit */int) arr_8 [i_1 + 2] [i_0] [i_0] [i_1 + 2]))))) ? (((/* implicit */int) ((unsigned char) (short)-843))) : (((/* implicit */int) arr_8 [i_2] [i_0] [i_0] [i_1 - 2]))));
                    }
                    arr_10 [i_2] [i_1 - 2] [i_2] [i_2] &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_10))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        arr_13 [i_2] [i_1] [(signed char)7] [i_0] [i_2] = ((/* implicit */long long int) min((((unsigned long long int) ((signed char) var_10))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_4]))));
                        var_22 *= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) 0U)), (11765025343493616109ULL)))));
                    }
                }
            } 
        } 
    } 
}
