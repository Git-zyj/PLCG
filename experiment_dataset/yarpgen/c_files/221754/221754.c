/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((1 - 1) || var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((1 > ((-(1 != 1)))));
                arr_7 [i_0] [i_1] = ((8508293622405366036 | (((6712793904665963255 & 63) & (-8331583049149207891 != 1218889490)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_20 = (16384297031150353648 & 31);
                var_21 ^= (((18133 & -5098736549655833426) == (6665574325752878687 > 29862)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_22 = (((37 / 1454601463) > 0));
                var_23 = (((31125 + 8310562828876867701) & 247106259));
                var_24 = ((((((3164607822 >> 0) >> (!-8331583049149207891)))) <= ((~((-5098736549655833452 % (-9223372036854775807 - 1)))))));
            }
        }
    }
    #pragma endscop
}
