/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((((var_10 ? (((min(16015, 49521)))) : (max(var_1, 10325143333419038798)))) <= var_5));
        var_12 = min((arr_1 [i_0]), (((!(arr_1 [i_0])))));
        arr_2 [i_0] = ((-568685224906466799 ? -568685224906466799 : -8118446183766232765));
    }
    var_13 = var_0;
    #pragma endscop
}
