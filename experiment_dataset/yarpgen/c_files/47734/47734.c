/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 8291148005124155640;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = ((min(1, 9223372036854775807)));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_20 = ((1 ? (16777184 + 15302565668210614757) : ((((max(-18214, (-9223372036854775807 - 1)))) ? (max(255, 2618339561922776629)) : ((min(-1430159284, 0)))))));
                    var_21 -= ((27691 ? 8012576098413000873 : ((min(((max(511, 14))), ((1018304632955371176 ? 1920 : 24941)))))));
                    var_22 -= (~-1637948631);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_23 = -106;
                        var_24 = (((((min(45317, 0))) && ((max(127, 32767))))));
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = (18446744073709551608 & 247);
                        arr_10 [i_1] [i_2] [i_1] = (max(((21445 ? -13577 : 4331497966393626655)), ((2147483647 ? 59527 : 7))));
                    }
                    var_25 = ((max(1, 127)));
                }
                var_26 += ((((max(0, -1597107811))) ? 8 : ((32057 ? 1 : -914034789))));
            }
        }
    }
    var_27 = var_4;
    #pragma endscop
}
