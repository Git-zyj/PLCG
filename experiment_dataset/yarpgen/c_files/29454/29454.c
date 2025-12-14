/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1457620133 ? ((((((-145094500 + 2147483647) << (5528605326372606625 - 5528605326372606625))) << (((14192399124867111728 ^ 23) - 14192399124867111719))))) : ((~(10142504669102701320 & -46)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((min((!-68), 750658951914327209)));
                var_15 = (0 != -100);
                var_16 = (max((min(99, 1238898812)), -26130));
            }
        }
    }
    var_17 += var_1;
    #pragma endscop
}
