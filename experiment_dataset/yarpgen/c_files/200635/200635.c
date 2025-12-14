/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((36645 ? ((147 << (var_11 - 2020957627))) : 28904)) * 38382));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((!((min(120, 28900))))) ? 28900 : (57071 < 27155)));
                var_21 *= var_19;
            }
        }
    }
    var_22 = max(((((!3689047536) || (((28894 ? var_3 : 65535)))))), 27153);
    var_23 = (min(var_23, (((((var_6 ? var_1 : ((-1481174249 ? 11478489089815822362 : 1)))) + (min(66060288, ((max(var_8, 65535))))))))));
    #pragma endscop
}
