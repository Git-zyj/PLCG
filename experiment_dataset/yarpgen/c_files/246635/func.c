/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246635
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] |= ((/* implicit */unsigned short) ((int) arr_0 [i_0 + 1]));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((var_1) + (695815653))) - (15)))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6)))) : (arr_3 [i_2])))));
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_4 [i_0] [7]))) << (((/* implicit */int) var_3)))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [(unsigned char)10])) : (((/* implicit */int) arr_5 [i_0 + 1]))));
                    arr_9 [i_1] [i_1] [(unsigned short)1] = ((unsigned short) (unsigned short)65529);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))));
    }
    var_13 = ((/* implicit */unsigned short) var_3);
}
