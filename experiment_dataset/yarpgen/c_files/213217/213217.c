/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((8166753928238988774 ? 17956335653617290079 : 490408420092261536)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((min((arr_4 [i_1] [i_1] [i_1]), ((var_6 ? 1357018353 : (arr_2 [7]))))));
                arr_6 [i_0 - 1] [i_0 - 1] = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : (arr_1 [i_1])))) ? (arr_3 [i_0] [i_0] [i_1]) : ((((max(230, 216))) ? (arr_1 [i_0 - 1]) : 490408420092261514))));
            }
        }
    }
    var_14 = var_8;
    var_15 = min((1 <= 763147719), ((((min(182, var_3))) ? var_2 : 5762783440149791000)));
    var_16 = (((((1 ? -1994585930 : 255))) / var_2));
    #pragma endscop
}
