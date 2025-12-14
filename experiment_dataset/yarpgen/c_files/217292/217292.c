/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? ((min((1073741824 ^ var_0), (!var_5)))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [1] [i_1 + 1] = ((((arr_3 [i_1 + 1] [1]) ^ (arr_3 [i_1 + 1] [i_1]))));
                var_12 ^= (1700544576 % 4281);
            }
        }
    }
    var_13 += var_10;
    var_14 = (((min(6572889156512608181, 0))) ? var_6 : ((((274341036032 + 2147483647) >> (-var_7 + 2879185721847583288)))));
    var_15 = ((((!(!var_2))) ? var_8 : ((((var_8 ? var_6 : 11873854917196943434)) ^ (!var_1)))));
    #pragma endscop
}
