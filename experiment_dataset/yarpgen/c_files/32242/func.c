/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32242
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
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((unsigned short) (short)-32750));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) arr_9 [i_3 + 2] [i_4 + 1] [i_0 + 1])) : (((/* implicit */int) var_7))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((min((arr_4 [i_2] [i_0 + 1] [i_0]), (arr_4 [(short)1] [i_0 + 1] [(short)1]))), (arr_4 [(short)3] [i_0 + 2] [i_0 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(var_3))))));
    var_17 = ((/* implicit */int) var_2);
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((long long int) (-(var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48817)))));
}
