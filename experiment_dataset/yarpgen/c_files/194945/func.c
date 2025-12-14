/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194945
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
    var_15 -= ((/* implicit */unsigned char) ((unsigned int) max((max((3547438980U), (((/* implicit */unsigned int) 50475104)))), (((/* implicit */unsigned int) var_13)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 -= (short)-32760;
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [i_0 - 2] [i_3]))));
                            var_18 -= ((/* implicit */_Bool) -50475105);
                            arr_10 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) >= (((/* implicit */int) (short)-718))));
                            var_19 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])) ? (-50475092) : (-50475098)))) ? (((((/* implicit */int) (signed char)15)) - (((/* implicit */int) var_14)))) : (7)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
