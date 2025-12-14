/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((((~(arr_4 [i_0])))) != ((3682396999543763675 ? ((2112218158993037003 ? 4410672102546701601 : 127)) : (max(14036071971162849986, -317128556))))));
                    arr_10 [i_0] = ((((~(min(1, var_11))))) ? (((((arr_7 [i_1] [i_0] [i_1]) <= ((4410672102546701601 ? (arr_4 [i_0]) : var_13)))))) : ((((((0 && (arr_1 [i_0] [i_0]))))) % ((-(arr_2 [i_0] [1]))))));
                }
            }
        }
    }
    var_17 = (max(var_17, 110));
    var_18 = var_8;
    var_19 = ((((var_1 ? 37 : var_5)) & var_7));
    #pragma endscop
}
