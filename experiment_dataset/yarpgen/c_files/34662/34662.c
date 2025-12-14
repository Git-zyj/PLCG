/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (var_6 <= var_9);
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) >> (34 - 30)));
        arr_4 [12] |= -var_11;
    }
    var_12 = (max(var_12, ((max(((min(((var_6 ? -1251389907499787082 : var_7)), (var_9 > -9)))), ((-((4294967295 ? 1 : 10772857278798899527)))))))));
    var_13 = var_7;
    var_14 = 4294967278;
    var_15 -= (max(var_1, var_6));
    #pragma endscop
}
