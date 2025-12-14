/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215265
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (min((((/* implicit */long long int) var_8)), (var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */int) (((-(min((((/* implicit */unsigned int) 1899100419)), (var_5))))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((var_1) < (((/* implicit */long long int) 1899100419))))), (var_6)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_3] [7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_4]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-26175)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) -3613837306972142247LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_2])))))))));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_5))) ^ (((var_9) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (var_5) : (var_3)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
