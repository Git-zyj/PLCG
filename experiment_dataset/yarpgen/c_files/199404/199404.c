/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_2 ? 6850777231178029168 : var_10))) ? ((1 ? 6850777231178029168 : var_6)) : (((1 ? var_1 : var_5)))))) ? (((((var_0 ? 2249910269 : var_2))) ? (((var_4 ? var_8 : var_8))) : ((var_0 ? var_2 : var_9)))) : ((((((6850777231178029162 ? var_10 : var_6))) ? ((var_5 ? var_0 : var_2)) : (((2365502065 ? 28914 : 1))))))));
    var_12 = ((((((((var_5 ? var_2 : var_6))) ? ((var_9 ? 15434 : var_9)) : (((0 ? var_10 : var_8)))))) ? (((((var_6 ? var_10 : -509065597))) ? ((6908139298343202341 ? var_9 : var_1)) : (((-703426312 ? var_3 : 1355723074))))) : ((((((var_4 ? var_8 : var_8))) ? ((var_8 ? var_2 : var_4)) : ((var_10 ? var_2 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((1 ? -509065597 : (((((-502952399 ? 1278517192 : 1))) ? (((-6055564654671803741 ? 0 : 1))) : ((39628 ? 2723 : 234626077))))));
                var_14 = ((((((((4443643063767786296 ? var_6 : -6055564654671803741))) ? ((27669 ? 579825856 : 0)) : ((var_1 ? var_1 : var_5))))) ? (((((1 ? (arr_2 [i_0] [i_1]) : (arr_3 [i_1] [i_1] [i_0])))) ? (((arr_3 [i_0] [i_0 + 2] [i_0 + 2]) ? var_9 : 1)) : (((var_8 ? (arr_2 [i_0] [i_1]) : 1))))) : (((((((arr_5 [i_0] [i_0] [i_1]) ? 4268929557 : (arr_3 [i_1] [i_0] [i_1])))) ? (((arr_2 [i_0] [i_1]) ? var_7 : 25970)) : (((var_7 ? 58308 : -479692437))))))));
            }
        }
    }
    #pragma endscop
}
