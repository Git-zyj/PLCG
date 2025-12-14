/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(~2147483647)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((((536870911 != (max(-3370525466193197949, 2)))) && ((min((((-(arr_1 [i_0])))), ((var_10 ? 32767 : (arr_0 [i_0]))))))));
        var_15 = (min((((min(11306, 1602622733)))), var_11));
        var_16 = (max(var_6, (arr_1 [i_0])));
        var_17 = (((max(((min(var_4, (arr_2 [i_0])))), (((arr_2 [i_0]) ? var_1 : 3370525466193197961)))) < (((max(var_2, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 += (((!var_11) ? (arr_1 [i_1]) : 4488847197705610274));
        var_19 = (max(var_19, ((min((arr_1 [i_1]), 4566363009800818027)))));
    }
    #pragma endscop
}
