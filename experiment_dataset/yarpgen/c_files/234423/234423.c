/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 *= max(((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (max((3003032495 >= var_0), (arr_1 [i_0]))));

        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((min((3003032513 + 3003032495), (arr_3 [i_0] [i_0])))) ? (max(3003032513, 201326592)) : (max(((((arr_3 [i_0] [i_1]) <= 1291934803))), (max(var_7, 567849781)))));
            arr_8 [i_0] = -4294967294;
            arr_9 [i_0] [i_0] [i_1] = arr_0 [i_0] [i_1];
        }
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            var_17 = (max(3528553043, 3003032513));
            arr_13 [i_0] = max(65535, 937584750);
        }
    }
    var_18 = (min(var_18, var_9));
    #pragma endscop
}
