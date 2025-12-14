/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max((((16384 < var_9) ? ((4736744068977767219 ? 1 : 1001364855)) : 2016)), ((((4687 / var_7) != 4517581705307241527)))));
    var_16 = (min(var_2, var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 2] [i_1] [i_2] = ((+((((((arr_0 [i_1] [i_0]) - 1))) ? ((~(arr_5 [i_0] [i_1] [i_2] [i_0]))) : (((~(arr_0 [i_0] [i_2]))))))));
                    var_17 = (((arr_2 [i_0 + 2] [i_0 - 1] [i_0]) ? ((-(((arr_1 [9] [i_0 + 2]) ? (arr_2 [i_2] [4] [i_0]) : 0)))) : ((((((~(arr_3 [0] [i_2])))) ? ((4698 ? 1 : 4688)) : (((-127 - 1) | 4669)))))));
                    var_18 = ((min(4294967295, 4517581705307241537)));
                    var_19 = (max((((((11234644228407323798 ? (-127 - 1) : (arr_1 [i_0 + 2] [0])))) ? (((16777184 ? 4279785516 : (arr_3 [i_0] [i_1 - 2])))) : ((-8605189410609602341 ? 5 : 4590460666650303162)))), -19046));
                }
            }
        }
    }
    #pragma endscop
}
