/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] |= (max(((((((var_2 ? var_2 : var_12)) + 2147483647)) >> (((~var_11) + 58)))), (~var_8)));
                arr_6 [i_0] = var_13;
                arr_7 [i_0] = -711374192043357808;
                arr_8 [i_0] [i_1] [i_0] = ((((max(-6215158384587010277, 7563211621683430382))) ? (min(((1 ? (arr_0 [i_0] [i_1]) : 20991)), ((1 ? 18346 : 250)))) : ((min((1 != var_12), (min(47190, (-127 - 1))))))));
            }
        }
    }
    var_15 = ((((max(var_12, ((var_9 ? -103 : 255))))) ? 1 : ((((max(24481, 5))) ? (~1655266106) : ((1 ? 1 : 1))))));
    var_16 += 35747322042253312;
    #pragma endscop
}
