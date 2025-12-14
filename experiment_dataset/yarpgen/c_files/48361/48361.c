/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((var_2 ? var_6 : (max(-5328044114852823959, (1 % 36117)))));
        arr_4 [i_0] [i_0] = (((9223372036854775799 && 5328044114852823959) ? -1228123757 : ((((max(4649473453696810080, 126))) ? ((var_0 ? 9752 : var_2)) : 29418))));
        arr_5 [i_0] = ((((((arr_0 [i_0]) ? 63 : (arr_0 [i_0])))) ? var_4 : var_9));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = 10;
        var_12 = (((arr_2 [i_1]) ? ((6 ? 55783 : -1)) : (((var_3 ? 0 : 1228123757)))));
        arr_9 [i_1] = var_5;
    }
    var_13 = var_7;
    #pragma endscop
}
