/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((((max(2, 1))) && ((max(11559, 1))))), ((((min(-5213307439148775150, -29055))) && ((min(-5213307439148775152, 0))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (2766888417511168611 && 15679855656198383002);
        arr_4 [i_0] [i_0] = 22338;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = ((min(554153860399104, 57)) % ((((max(228, 102))))));
        arr_9 [i_1] = (min((max((1 % 38), (max(11555, 176058021962265782)))), ((max(2540, (5213307439148775170 / 16974))))));
    }
    var_19 = var_15;
    var_20 = var_5;
    #pragma endscop
}
