/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_10, -3494))) ? var_11 : ((var_15 ? var_0 : 65535)))) / var_15);
    var_17 = 1056137812;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2 - 1] [i_0] [i_0] |= (~25);
                        var_18 = (min(((((((-1211060781623509856 - (arr_1 [i_0] [i_0])))) ? ((var_5 >> (var_12 - 17461480787441846810))) : (arr_4 [i_2 - 2])))), ((65517 ? (arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 2]) : (arr_3 [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                        var_19 = (max(1292897055, 50692));
                    }
                }
            }
        }
        var_20 = -var_4;
        var_21 = (65511 && 65534);
    }
    var_22 = 14844;
    #pragma endscop
}
