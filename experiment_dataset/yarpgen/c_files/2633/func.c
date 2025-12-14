/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2633
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */int) var_15)) + (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (var_2))))))));
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = -1259339636738648639LL;
                                arr_13 [15] [15] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((_Bool) (unsigned char)21));
                                var_21 = ((/* implicit */long long int) arr_7 [i_1]);
                                var_22 = ((/* implicit */unsigned short) ((long long int) ((arr_2 [i_0 - 1] [i_0 + 2]) || (((((/* implicit */_Bool) 2640556198085952737LL)) && (((/* implicit */_Bool) var_4)))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_1] [i_1] [19U] [(signed char)14] [i_2]))) : ((~(var_12)))));
                    arr_14 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) 2640556198085952737LL);
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */long long int) var_3);
}
