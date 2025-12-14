/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222935
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
    var_18 = (+((+(((((/* implicit */int) (_Bool)1)) * (var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_8 [i_0] [(unsigned short)10] [(_Bool)1] [i_3])))));
                            var_20 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [(signed char)15] [(signed char)15])) ? (((unsigned int) 67582882)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1693689511)) ? (((/* implicit */int) arr_1 [i_1] [i_2 + 1])) : (1693689498))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((_Bool) ((((arr_10 [i_0] [5ULL] [i_0] [i_0] [5ULL] [i_1]) + (2147483647))) >> (((67582872) - (67582842))))))));
                arr_12 [i_1] = max((((((/* implicit */int) arr_6 [3] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0])))), (((1693689510) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])))));
                var_22 = ((/* implicit */int) max((var_22), (((((((min((((/* implicit */int) var_8)), (-67582883))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
