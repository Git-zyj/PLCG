/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 43995;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] |= -816214405;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = (32760 ^ 3);
                    var_16 = (((32776 != 32775) - 1023));
                    var_17 = (8192 != 32791);
                    var_18 = -1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (((32796 == 1920) >= 7429651856652453797));
                    arr_12 [i_4] [i_3] [i_4] [i_3] = ((4284 > (((-21706 > (-32767 - 1))))));
                    var_20 = 25;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_21 = (132120576 / 1004137899);
                        var_22 = ((((-1864932621 - (42 << 0))) != 49));
                        var_23 += (((-1945 >= 1) <= 3804566475));
                    }
                }
            }
        }
        arr_22 [i_5] [i_5] = ((96 < (((94 % -47) ^ (32750 < 65)))));
        var_24 = -697725712;
        var_25 ^= -58;
    }
    var_26 = (((((32761 < (-9223372036854775807 - 1)))) << ((((24 / -30) == (1 && 3807817488))))));
    var_27 ^= (27067 || 201);
    var_28 = ((-6262888678642703394 / (((((7429651856652453797 && 0) || 4206327554058997761))))));
    #pragma endscop
}
