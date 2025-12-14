/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224677
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
    var_14 = var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_1)))));
                arr_6 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (arr_2 [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0])))) : (((/* implicit */int) max((arr_1 [i_1]), (arr_4 [i_1]))))));
                arr_7 [i_0] [i_0] [i_0] = max((min((max((var_6), ((unsigned char)124))), (arr_1 [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_9))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_2] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)42)) || (((/* implicit */_Bool) min((var_8), ((unsigned char)26))))));
                    arr_18 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_2]), (var_1)))) ? (((/* implicit */int) (unsigned char)151)) : (((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) max(((unsigned char)255), ((unsigned char)151)))) - (249)))))));
                }
            } 
        } 
    } 
}
