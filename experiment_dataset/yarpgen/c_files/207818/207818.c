/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((-11 ? 1725444012889509851 : 57344));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((max(0, (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((-9223372036854775807 - 1) + (arr_0 [i_0])))))) ? ((~(arr_1 [i_0] [i_0]))) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (max((min((arr_1 [11] [4]), (arr_0 [i_1]))), ((min(50518, ((((arr_7 [i_0] [i_2] [i_2]) >= 11))))))));
                    var_22 -= 239;
                    arr_8 [i_0] [i_1] [i_1] = (arr_5 [2] [i_1] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = (arr_10 [i_3]);
        var_23 = (max(var_23, (arr_5 [i_3] [i_3] [i_3])));
        var_24 *= ((((((arr_10 [8]) ? (arr_10 [0]) : 17104))) ? (((~1450572523830087038) - -23324)) : (max((arr_3 [i_3] [i_3]), (((arr_3 [i_3] [i_3]) / 33375))))));
        var_25 = (var_15 ? ((15308 ? (~-23746) : (min(17396049122844076743, 0)))) : (arr_4 [i_3] [i_3]));
        var_26 = (min(((((max(var_5, 23147))) ? ((((arr_6 [i_3] [i_3] [i_3] [i_3]) ? (arr_11 [i_3]) : var_4))) : (max((arr_3 [i_3] [i_3]), var_14)))), var_16));
    }
    var_27 = (((min((~4237707657107727658), 3820601898)) <= (((((min(var_0, 2929803628))) ? (max(var_10, 451969120540472702)) : (~22939))))));
    #pragma endscop
}
