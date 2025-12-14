/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((-(((max(var_9, 3361214697)) & -var_5))));
    var_14 &= var_0;
    var_15 |= ((-((~((min(177, 1)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] &= 1216824169;
            var_16 = (max(var_16, (((-(((13 || ((((arr_1 [i_0]) ? var_0 : -4701352898871943844)))))))))));
            var_17 += (~var_10);
        }
        arr_7 [i_0] &= ((((arr_1 [i_0]) ? 4256191667363968477 : ((933752599 ? -7445792210745037548 : var_3)))) / ((+(max((arr_0 [i_0]), var_2)))));
    }
    #pragma endscop
}
