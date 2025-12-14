/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(91, 166))) % 166));
    var_19 = 88;
    var_20 |= 83;
    var_21 ^= ((var_13 > ((((-158750016 < var_1) < (~var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = 132120576;
                arr_6 [i_0] [i_0] = (arr_0 [i_0]);
                var_23 = (max(((((arr_4 [i_1] [i_0] [i_0]) < (arr_5 [5] [i_0] [i_1])))), (arr_5 [i_0] [i_0] [i_1])));
                var_24 = ((((((arr_5 [0] [i_0] [i_1]) ? ((var_16 ? 4162846719 : (arr_3 [i_0]))) : 9742180722993606492))) ? (((((((arr_4 [i_0] [i_1] [i_1]) && 3255149684653077232)))) - (arr_4 [i_0] [i_0] [1]))) : ((((((4162846719 | (arr_1 [i_1]))) == ((((arr_2 [6]) & var_17)))))))));
                arr_7 [i_0] = (((16880 | 0) ? (arr_4 [i_0] [i_0] [i_1]) : ((-(arr_4 [i_0] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
