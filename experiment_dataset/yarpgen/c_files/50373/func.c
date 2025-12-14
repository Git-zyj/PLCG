/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50373
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */unsigned int) min((arr_4 [i_0]), (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */int) ((signed char) arr_3 [i_0]))))))));
                var_13 = ((/* implicit */signed char) max((((arr_1 [i_1]) % (arr_1 [i_0]))), (((int) arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) max((var_14), ((((+((+(((/* implicit */int) (signed char)127)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-27)))))))));
        arr_7 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_3 [i_2 + 1]) + (2147483647))) << (((((arr_3 [i_2]) + (1249180712))) - (16)))))) ? (((2147483647) | (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_2 [i_2]))))))) : ((-(((/* implicit */int) arr_5 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_3]));
        arr_13 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_4 [i_3]))) ^ (2147483647)));
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483637)) ? (-2147483638) : (((/* implicit */int) (signed char)127))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4])))))));
    }
}
