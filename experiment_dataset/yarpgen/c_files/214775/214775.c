/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((~(arr_5 [i_0]))) % (((((min(12, (arr_3 [i_1] [i_0])))) >= ((~(arr_0 [i_0])))))))))));
                var_17 = ((~(((arr_4 [i_0] [5]) ? ((((arr_1 [i_1]) != (arr_3 [i_0] [i_1])))) : (((arr_4 [i_1] [i_0]) ? (-2147483647 - 1) : (arr_4 [i_0] [4])))))));
                var_18 = (((min((min((arr_1 [i_0]), (arr_0 [i_1]))), ((((arr_3 [i_1] [i_0]) != 255))))) == (((-((((arr_5 [i_0]) != 7003))))))));
                arr_6 [i_0] [i_0] = (min(3491704577, (((min((arr_2 [i_1]), (arr_1 [i_1]))) / (((((arr_2 [i_0]) != (arr_0 [i_1])))))))));
                arr_7 [i_0] [1] = (arr_0 [i_0]);
            }
        }
    }
    var_19 = (min(var_19, (var_6 / var_8)));
    #pragma endscop
}
