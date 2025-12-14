/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-44 * -56);
        arr_4 [i_0] = 44;
        var_18 = (min(((+((((arr_2 [i_0]) <= (arr_0 [i_0] [3])))))), 64));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 = (min(-3978080791369760866, (((!(~-44))))));
        var_20 = (min((max((arr_0 [i_1] [i_1]), (arr_1 [i_1]))), 3978080791369760866));
    }
    var_21 = ((var_12 < ((((60 >= 3978080791369760870) <= (min(-3978080791369760865, 134217727)))))));
    var_22 = max(var_14, -26906);
    #pragma endscop
}
