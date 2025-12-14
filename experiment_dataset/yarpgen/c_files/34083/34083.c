/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((((((-1485970276 ? var_10 : 1485970276))) - ((7536 ? 8224335079155504416 : -1485970288))))) ? 24 : 3766493870)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] = (~(((arr_7 [2] [i_3]) % 54)));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = (min(((((arr_11 [i_0] [i_0] [i_0] [i_0]) + (arr_11 [i_0] [i_1] [i_2] [i_3])))), 18145620311758131087));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_18 [i_1] [11] [i_2] [i_4] = (((37168 % -224) ? (((10456 ? (0 == 2376143461) : 18624))) : 2376143461));
                        var_14 ^= (max(1420126339, (var_9 & 255)));
                        var_15 ^= ((1821641721 && (arr_5 [i_0] [i_0])));
                    }
                    var_16 = ((((((var_4 ? -1485970276 : var_3))) ? 1954447965 : (!14059))) * ((1918823834 ? (!1485970295) : (max(-25077, 2246998759)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_7] = var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_34 [1] [i_5] = 2400944135;
                                var_17 &= (((~(!var_1))));
                                var_18 = 0;
                                var_19 ^= -3663213359;
                            }
                        }
                    }
                    arr_35 [i_5] = -1381902761816258451;
                    var_20 = (max(var_20, (((11620411365538590058 ? 30416 : -28712)))));
                }
            }
        }
    }
    #pragma endscop
}
