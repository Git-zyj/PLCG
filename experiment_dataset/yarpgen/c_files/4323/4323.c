/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((max((~2151705043), (((arr_0 [i_0]) ? var_10 : 2143262252))))) || ((((arr_1 [i_1 + 1]) >> ((((~(arr_1 [i_1]))) + 570442962)))))));
                var_12 = -2151705043;
            }
        }
    }
    var_13 = ((2151705042 && ((((((2143262256 ? 2008244932 : var_10))) ? var_9 : ((-2008244933 ? 313965030 : var_9)))))));
    var_14 = ((((((var_3 & var_10) ? (min(var_9, var_10)) : (max(var_9, 1433954826))))) ? (max(var_8, (((var_2 + 2147483647) << (981738948 - 981738948))))) : ((max(var_2, var_9)))));
    var_15 = var_6;
    #pragma endscop
}
