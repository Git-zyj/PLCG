/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 23969;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = ((max(0, -9)));
                var_15 = ((((((((0 ? var_3 : 30))) ? (250 > 1) : ((((arr_1 [i_1]) > 18277592877661110932)))))) ? ((min((((250 ? 535626854 : (arr_0 [0])))), var_0))) : (((((18277592877661110936 ? (arr_1 [i_1]) : (arr_5 [i_1])))) ? (arr_2 [i_0]) : (~var_7)))));
                var_16 = (min(var_16, ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (((arr_0 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
                var_17 = ((~3157727553) ? (var_0 > -458949474) : (var_12 ^ 26611));
            }
        }
    }
    var_18 &= (((var_7 ? var_9 : var_2)));
    var_19 += (((~var_11) > ((((2945134091220450843 ? 0 : 1)) << (var_0 - 1318564774548639173)))));
    #pragma endscop
}
