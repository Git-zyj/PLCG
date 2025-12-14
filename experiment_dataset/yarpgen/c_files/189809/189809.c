/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = ((((min(((((arr_4 [i_0] [i_1 + 3]) < (arr_12 [1] [i_3] [i_3 - 2] [i_2] [i_2] [i_1] [i_0 - 1])))), 2591))) ? (((((32766 << (7376 - 7371))) % (arr_5 [i_3 + 1] [i_1 - 1] [i_2] [i_4 + 1])))) : (((18091 * -8245) ? ((5600611614373347064 + (arr_3 [i_0 + 3]))) : ((((arr_1 [i_1] [i_3]) / 62925)))))));
                                var_15 = 14534677650732412500;
                                var_16 *= arr_10 [i_0] [i_0] [11] [i_4 + 2];
                            }
                        }
                    }
                }
                var_17 = min(((3 ? 32746 : 2489353060458179775)), (((~(arr_6 [i_1 + 4] [i_1 + 1] [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 = (((((((((arr_17 [i_0 + 1] [i_1] [i_5] [i_5] [i_6]) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 3]) : 4294967291))) ? ((max(-9097, 2611))) : ((max(1, 0)))))) ? 65535 : (((143 + (arr_10 [i_5] [9] [i_5] [i_5 - 1]))))));
                            var_19 = ((+(((arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_6]) / (max(1076796787, 134217216))))));
                        }
                    }
                }
            }
        }
    }
    var_20 -= (+((-9098 ? (1 & 1) : -10049)));
    var_21 = ((((min(2489353060458179800, -var_7))) ? (((max(-9091846871861363442, 76)) & (((min(-8, -11907)))))) : var_6));
    var_22 = var_12;
    var_23 = var_13;
    #pragma endscop
}
