/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((max(((max(-85, var_2))), (max(var_1, var_5)))), ((min(92, var_9))))))));
    var_14 ^= (max(2402415752, 1892551543));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (max((max(1892551543, 1892551545), ((((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0] [i_1 - 1])))))));
                arr_4 [7] [i_1] [i_0] = ((-9223372036854775805 ? 255 : 250));
                var_16 = var_5;
                arr_5 [10] [i_1] = ((((max(17418213432481209553, 65535))) ? (~-9223372036854775803) : (!15)));
                var_17 = -2626544637372890365;
            }
        }
    }
    var_18 = (min(var_18, ((min((((65535 || 0) ? (var_3 % 18321518725757124605) : var_9)), var_1)))));
    #pragma endscop
}
