/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (min(9, 246));
                arr_5 [i_0] [i_0] [i_1] = (((((!((min(6295889022858491467, (arr_2 [2] [i_0] [i_1]))))))) & ((((246 ? 29 : (arr_0 [i_0]))) ^ -89))));
                arr_6 [i_1] [i_1] [i_0] = ((((min(((4294967293 | (arr_1 [i_0] [i_0]))), ((min((arr_0 [i_0]), 17)))))) ? (((arr_4 [i_1]) ? -1099642819 : (arr_4 [i_0]))) : (min((arr_0 [i_0]), ((var_1 ? (arr_3 [i_0] [i_0]) : -12497))))));
                var_20 = ((+(((!var_0) ? ((57 >> (198 - 174))) : (arr_0 [i_1])))));
            }
        }
    }
    var_21 |= 1174068654;
    var_22 = ((~((~((var_6 ? var_6 : 29))))));
    #pragma endscop
}
