/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) && ((min((arr_4 [i_2] [i_1] [i_1] [20]), (var_0 > var_1))))));
                    var_12 ^= ((~(~1514083157146807710)));
                    var_13 = (max(var_13, ((+(((arr_0 [i_0]) ? (min(6671581512894536332, 0)) : 1))))));
                }
            }
        }
        var_14 = (max(var_14, ((max(-1066145226, ((-1814637097074390912 ? (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? 560126689793571050 : (-2147483647 - 1))) : ((((arr_0 [i_0]) + -24119))))))))));
        var_15 = ((-((+((min((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_0]))))))));
        var_16 = max(((+((65535 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0]))))), var_5);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = var_7;
        var_18 ^= -1514083157146807710;
        arr_10 [i_3] = ((-(arr_7 [i_3])));
    }
    var_19 = ((((((var_4 == var_10) | ((var_7 ? var_9 : var_7))))) ? ((max(-23374, ((-497196777 ? -2 : 36928))))) : (((((var_7 ? var_1 : -96))) ? var_0 : var_3))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = (min(var_20, ((((min(8286138565793885763, (arr_13 [i_4 - 1]))) % (((min((arr_5 [i_5]), (8286138565793885770 || var_2))))))))));
                var_21 = (min((min((min(8286138565793885763, (arr_0 [i_4]))), ((min(4294967285, var_3))))), ((((((var_3 | (arr_16 [i_4] [i_4])))) ? (arr_14 [i_4] [i_4]) : (var_4 >= var_10))))));
            }
        }
    }
    #pragma endscop
}
