/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = ((-(!0)));
                var_11 = (+-12);
                var_12 = (max(var_12, ((max(41043, ((0 / ((8177211746690657733 ? 8395961712416341894 : -7167681411313194074)))))))));
            }
        }
    }
    var_13 = ((((min(1635580711323432823, -65)) & -2066472832)));
    var_14 = (38005 <= 195);
    var_15 = (min(var_15, (((((63 ? 8177211746690657737 : 1314816044)) ^ (((!(((10269532327018893857 ? 0 : 3508527928)))))))))));
    var_16 = -21141;
    #pragma endscop
}
