/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((12728969990510799539 ? ((-6911877101612685885 ? -6911877101612685858 : (((var_6 ? var_8 : var_6))))) : (((-6911877101612685902 ? ((2147352576 << (((-1491151677 + 1491151680) - 3)))) : (1 ^ var_5)))))))));
    var_12 = ((2139095040 ? ((-2139095038 ? (((70351564308480 ? var_5 : var_9))) : (min(var_6, 10050056964925481212)))) : var_6));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((317185079 * (arr_1 [i_0]))) * 33));
        var_13 &= 3377096419;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = (max(-var_8, (max((min((arr_4 [i_1]), (arr_4 [i_1]))), ((((((arr_5 [i_1] [i_1]) + 2147483647)) >> (1942570548 - 1942570526))))))));
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
    }
    #pragma endscop
}
