/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209319
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
    var_15 -= ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) (unsigned short)45628)) : (((((/* implicit */_Bool) ((unsigned short) (signed char)31))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-20)) : (1228698662))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5363012139311487377LL)))))))));
                                arr_12 [(short)1] [(short)1] [i_2] [i_3] [(short)1] [i_4] [(short)1] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [5ULL])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2202))) / (arr_5 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)44219)) : (((/* implicit */int) (unsigned short)44219))))))))));
                }
            } 
        } 
    } 
}
