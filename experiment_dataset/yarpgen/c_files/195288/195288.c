/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((77 ? var_6 : ((((((3336355660 ? var_9 : 1240706160))) ? (3886474156 || var_9) : 3304821340)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_11 = (7 >= 14);
            arr_7 [i_1] = (max(1, -29));
        }
        var_12 = (max((max((-1 >= 7), (arr_1 [i_0] [i_0]))), (((!((max(-7, 7))))))));
        arr_8 [i_0] [i_0] = ((+(max((-7 <= 7), ((18 ? var_4 : 15))))));
        arr_9 [i_0] [i_0] = (max(((18 ? (arr_2 [i_0]) : 7)), (((-((min(23, 23))))))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_13 = var_0;
        arr_12 [i_2] [i_2] = (((min(23, 18))) % ((~(((arr_11 [i_2] [i_2]) ? -15 : var_1)))));
        var_14 = ((!((max((arr_2 [i_2 - 1]), (arr_1 [i_2] [i_2 + 2]))))));
        arr_13 [i_2] [i_2] = var_4;
        arr_14 [i_2] = 42;
    }
    var_15 = var_0;
    #pragma endscop
}
