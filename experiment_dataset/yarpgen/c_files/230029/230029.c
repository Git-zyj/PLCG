/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_7 <= (((38952 ? (var_0 > var_2) : ((var_8 ? -344661650 : var_1))))))))));
    var_11 = (min(-344661650, 3249282843410655664));
    var_12 = (max((((var_6 / -9223372036854775798) ? var_2 : (!12429041718778917))), ((((var_7 ? -344661660 : 101)) ^ -5835156594575312601))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [16] = (121 % 2781491942);
        var_13 = (((((2140029390 ? 101 : 2088937794))) ? ((((arr_2 [i_0]) != -95))) : (((var_5 || var_0) ? ((344661659 & (arr_1 [i_0]))) : 181))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, (((((((max((arr_2 [20]), var_4))) ? 4294967295 : 0)) + (((((101 << (var_6 - 95))) * var_2))))))));
        var_15 = (max(var_15, var_4));
    }
    #pragma endscop
}
