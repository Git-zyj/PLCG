/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_8, (max((var_12 != var_11), (min(252, var_12))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((((min((0 % var_2), (4342035268002882106 < var_12)))) ? ((((var_7 && (arr_1 [i_0]))) ? ((27864 ? 4342035268002882106 : (arr_1 [1]))) : var_6)) : var_5))));
        var_16 = (min(var_16, ((min(((4342035268002882106 == (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))), (((max((-2147483647 - 1), var_12)) != ((-215278620 ? (arr_0 [i_0] [i_0]) : -4342035268002882109)))))))));
        arr_2 [i_0] [i_0] = max((((min(0, var_9)) % ((max(var_4, var_13))))), (min(var_5, 2100066267180345679)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 ^= ((((((var_6 != (arr_3 [5]))) ? (max(var_8, (arr_3 [i_1]))) : ((max(var_13, var_9))))) < ((((3840 ? 4342035268002882106 : 7521973726048919711)) % ((((var_0 || (arr_4 [i_1])))))))));
        arr_5 [i_1] = (((max((min(65523, 4342035268002882090)), var_1)) % (((((max((arr_3 [13]), var_6)) > (var_11 - 2924)))))));
        arr_6 [i_1] = (((((min(var_5, 65523)))) - (0 ^ var_4)));
    }
    #pragma endscop
}
