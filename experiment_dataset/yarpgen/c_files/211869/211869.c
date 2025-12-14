/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (var_1 != 65535);
                    arr_10 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = (((~122) ? ((max(var_10, (arr_6 [i_0 - 1] [i_0] [i_0 + 1])))) : ((~(arr_6 [i_0 - 1] [i_0] [i_0 + 2])))));
                    var_17 = 2829;
                    var_18 = ((1 ? ((((min(242, 1))) ? ((62 ? 702506704 : 1)) : ((min(1, (arr_0 [i_2])))))) : 44));
                }
            }
        }
    }
    var_19 = (((((((12 ? 140757356180297674 : var_5))) && var_6)) ? var_8 : (((((var_8 ? var_9 : var_2))) ? var_9 : (5672438504480605323 % 9223372036854775797)))));
    var_20 -= 3560;
    #pragma endscop
}
