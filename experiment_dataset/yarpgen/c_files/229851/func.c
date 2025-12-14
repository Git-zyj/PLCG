/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229851
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) arr_2 [i_1 + 1] [(short)14] [i_1 - 1]))));
                                arr_15 [i_0] [i_1] [i_1] [i_1 + 1] [i_2] [17ULL] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2 - 1]))));
                            }
                            var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-28)) && ((_Bool)1)));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((arr_11 [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_4 [5ULL] [i_1])) : (arr_11 [(short)17] [i_0] [i_0 - 1] [i_0] [(signed char)16] [i_1 + 1]))))))));
            }
        } 
    } 
    var_12 = ((long long int) ((unsigned short) max((var_5), (((/* implicit */unsigned short) var_7)))));
    var_13 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) >> (((/* implicit */int) min(((signed char)13), (((/* implicit */signed char) (_Bool)1)))))))));
}
