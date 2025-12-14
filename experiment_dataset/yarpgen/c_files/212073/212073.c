/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 5739779167824245333;
    var_20 = ((((max(var_12, var_3))) ? (~var_2) : (((((min(var_17, 12706964905885306282))) && (~1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = 12706964905885306282;
                var_21 = (((((((var_15 ? 126 : 1406626908))) ? (~var_6) : -1406626933))) ? (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) >> (-27432 + 27441))) : (((arr_4 [i_1 - 1] [12] [9]) ^ ((12706964905885306279 ? 210 : (arr_2 [i_1] [i_1 - 2] [i_1]))))));
                arr_6 [i_1] = (((((arr_2 [i_1] [i_1 + 1] [i_1 - 2]) ? (arr_3 [i_1 + 3] [i_1 + 1]) : (arr_2 [i_1] [i_1 + 2] [i_1 - 3])))) ? (((var_6 | var_18) ? (arr_2 [i_1] [i_1 + 4] [i_1 - 1]) : (((209 > (arr_4 [i_0] [i_0] [i_1])))))) : (arr_1 [i_0]));
                arr_7 [i_1] = var_5;
            }
        }
    }
    var_22 = 121;
    var_23 = (~var_0);
    #pragma endscop
}
