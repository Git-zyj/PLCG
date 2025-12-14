/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210685
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (short)-18)) : (-181372212))))))) <= (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (short)-13980))))))) ? (((/* implicit */int) ((((var_3) ? (((/* implicit */int) (short)-29741)) : (((/* implicit */int) arr_4 [i_4])))) > (((/* implicit */int) ((960U) > (((/* implicit */unsigned int) 2147483647)))))))) : (((int) (!(((/* implicit */_Bool) (unsigned short)1536)))))));
                                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)0))));
                            }
                        } 
                    } 
                } 
                var_15 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1 + 3])) <= (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 2] [i_1 + 3] [i_1 + 1])))));
            }
        } 
    } 
}
