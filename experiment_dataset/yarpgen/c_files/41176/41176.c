/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((142622535 & -var_4) || ((max((max(-124, var_1)), (var_6 == var_2))))));
    var_11 = (min((min(100, 15013156478481122106)), (((var_9 / var_7) ? (max(-12261, var_3)) : -65515))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (max(var_12, (((((max((max(2219075147163054560, 9792808748370640982)), 16227668926546497055))) ? (((var_0 ^ var_5) ? (var_1 != 7174) : (min(9792808748370640982, (-32767 - 1))))) : (min(4, 15013156478481122106)))))));
        var_13 = (max(((2219075147163054571 ? (14780197101987424903 % var_4) : (50235 + 1150694993))), (((var_7 ? var_4 : (-2147483647 - 1))))));
        var_14 = (max(var_14, (((((max((max(-12411, 4095)), ((max(29118, 1)))))) ? 60873 : (max(var_4, ((18740 ? var_9 : -11330)))))))));
        var_15 = (~var_8);

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_16 = ((~(min(4294967295, (15013156478481122111 && -22981897)))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] &= (max((((-22981878 != var_0) || (((var_9 ? var_4 : var_8))))), (!var_2)));
                        arr_12 [i_1] = (max(-1986, var_5));
                        var_17 = (min(var_17, ((max((((((1 ? 3955901469420797437 : var_5))) || ((max(var_9, 20786))))), 0)))));
                        var_18 = ((((min((0 / var_4), ((var_6 ? var_6 : var_9))))) ? ((((-559478609 / var_6) ? (min(0, var_6)) : (-1 > var_2)))) : 349607083057690433));
                    }
                }
            }
            arr_13 [i_1] [i_1] = (min((((((max(1, 1))) ? 4522 : ((max(1, var_9)))))), (((((177 ? -1361591208 : (-2147483647 - 1)))) ? (((var_0 ? var_0 : var_7))) : -7447159063619531954))));
        }
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            var_19 = ((((((min(var_1, -1262))) || var_9)) ? 3993907166 : (((1932209859 ^ -696410447) ? (var_6 / var_1) : 16992482420565776734))));
            arr_16 [i_0] [i_4] [i_4] = var_3;
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_20 = (max(var_20, (((var_7 ? (var_5 < 1178286371) : (var_4 ^ var_5))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_21 = 0;
                    arr_26 [i_5 - 2] [i_5 - 2] [i_5] [i_5] = var_8;
                }
            }
        }
    }
    var_22 = (101 / 15101246120533210784);
    #pragma endscop
}
