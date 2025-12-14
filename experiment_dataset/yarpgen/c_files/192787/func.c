/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192787
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0]))))) / (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_2 [(signed char)1])))))) + (((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)-24924))))))));
                    arr_6 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >= (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_1])))))) && (((/* implicit */_Bool) var_5))));
                    arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_1] [2U])), (var_11)))) / (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_15 [i_3] = ((/* implicit */signed char) (short)26229);
                arr_16 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3])) ^ (((/* implicit */int) (signed char)-41))))) : (arr_0 [(_Bool)1]))) : (((/* implicit */unsigned int) arr_1 [i_3]))));
            }
        } 
    } 
}
