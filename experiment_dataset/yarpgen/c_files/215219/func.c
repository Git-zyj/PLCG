/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215219
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 += max((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))), (((((/* implicit */_Bool) var_10)) ? (1331686588U) : (((/* implicit */unsigned int) arr_1 [i_1 + 1])))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 |= ((arr_6 [2U]) & (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (short)-6945)))))));
                                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)246))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_2]) : (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                                arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) var_5));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) (((~(((unsigned int) 1331686604U)))) ^ (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_6)))))));
                arr_12 [i_0] [i_0] [i_1] &= ((/* implicit */int) var_8);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)15)));
}
