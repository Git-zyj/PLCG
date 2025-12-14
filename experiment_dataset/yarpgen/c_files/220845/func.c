/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220845
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (-(((var_13) ? (2140853429239490789ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2140853429239490789ULL))))) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) var_8);
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((((!((_Bool)1))) ? ((~(7881299347898368ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_3 [i_0] [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (!((_Bool)1))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
