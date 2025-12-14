/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_10 += ((1 > (((~1710856743) ? 8981 : (arr_0 [5])))));
        var_11 = ((-8981 ? (((max(223, 1)))) : ((-((11430 ? -8982 : 0))))));
        var_12 |= -8985;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (arr_1 [i_1] [i_1]);
        var_13 -= (max(1, 2195693679));
        var_14 = (min(-32765, (((((((59 > (arr_1 [6] [i_1]))))) >= (min(8981, 0)))))));
    }
    var_15 = (min(var_15, (((!((max(((max(72, 1))), ((28116 ? 15646616874564468319 : 8981))))))))));
    var_16 |= (min(((((((var_7 ? 2150542534 : 1))) ? 23256 : (~32754)))), (max(697992727, var_0))));
    var_17 = (min(var_17, (((~((~(var_3 ^ 0))))))));
    var_18 = (((((min(3371401997, 7412343469332295451)))) ? var_7 : var_1));
    #pragma endscop
}
