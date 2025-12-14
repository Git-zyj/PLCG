/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 21;
    var_13 -= -7879272102292580664;
    var_14 = (max(var_14, ((((((((var_4 ? var_8 : 46935))) && (((2607263142070731440 ? 0 : 4294967295))))) && (((var_0 ? var_0 : ((var_5 ? var_0 : 0))))))))));
    var_15 = ((!((((((2986545808 << (var_4 - 76)))) ? ((min(var_5, 219))) : ((4294967287 ? 21 : -523927301)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, -var_3));
                    var_17 = (max(((var_11 ? (!0) : ((11 ? (arr_1 [i_0]) : var_4)))), -var_2));
                    var_18 = ((((((arr_0 [i_2]) ? (4294967287 | -4299) : (((max(227, 0))))))) && ((((-523927291 < 2) % 20249)))));
                    var_19 = max((((arr_0 [i_1 - 2]) | (arr_0 [i_1 - 2]))), (min(var_5, (arr_3 [i_0]))));
                    var_20 = (arr_6 [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
