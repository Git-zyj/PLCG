/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, -127));
    var_15 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 += (min(((~((117 % (-32767 - 1))))), (((((-32767 - 1) ? 32741 : 62)) + (var_5 < var_3)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = ((((((((var_3 ? var_8 : var_5))) ? var_9 : -var_12))) || -var_5));
            arr_6 [i_0] [6] [i_0] = (max((((var_12 <= var_1) < (var_13 + var_11))), (((var_13 / var_4) != -var_5))));
        }
        arr_7 [i_0] = (min(-var_12, (((var_0 < (((var_9 ? var_1 : var_2))))))));
    }
    #pragma endscop
}
