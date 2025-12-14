/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((var_8 * 0) ? ((((var_4 <= (-2147483647 - 1))))) : (var_0 * var_1)))));
    var_11 = ((~((-((1048575 ? 36586 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (!(((12540955458334987097 ? 183 : 31))));
                arr_4 [21] [i_1] [i_1] &= (((((-32748 || var_8) ? ((var_3 ? (arr_3 [15] [i_1] [i_1]) : -1)) : ((9107878761614347807 ? 106 : var_4)))) - ((-((65535 ? (arr_3 [i_0] [14] [i_1 - 2]) : (arr_2 [i_1] [i_0] [i_0])))))));
                var_13 = (((((255 ? 1 : 3585513785729534389))) % ((((!(arr_1 [21] [i_1]))) ? ((var_8 << (1036183254 - 1036183243))) : (var_7 <= var_6)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 += ((~(((~7623066056161132375) ? ((29982 ? (arr_2 [1] [i_2] [i_2]) : 1)) : (~32382)))));

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_15 = ((((((1 ? var_2 : 54425)) ? ((14 ? (arr_6 [i_0] [i_3]) : var_3)) : (((((arr_3 [6] [i_4 + 2] [i_3]) <= (arr_1 [i_0] [i_4])))))))));
                                var_16 |= (((((((911415027 ? 37064 : (arr_5 [i_0] [i_1] [i_2 + 1] [i_3])))) ? (((arr_2 [i_3] [i_3] [i_2]) ? (arr_1 [i_0] [i_0]) : var_9)) : (var_1 != var_8))) + (((((((1 ? var_2 : -87))) || (((var_9 ? (arr_1 [i_3] [i_3]) : 44)))))))));
                                var_17 = (min(var_17, (((-((99 ? 3837 : -3976)))))));
                            }
                            arr_11 [i_0] [i_0] [i_0] [1] [i_0] = ((((((((-(arr_3 [i_3] [i_0] [i_0])))) ? (((arr_2 [i_0] [i_1] [i_2 - 1]) + (arr_0 [i_0]))) : ((174 ? 1 : 65535))))) ? ((-((var_6 ? var_2 : (arr_1 [22] [i_3]))))) : ((((246 ? -1056934280 : -1927396223))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
