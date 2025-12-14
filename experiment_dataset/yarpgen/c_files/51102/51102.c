/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((-1036888940 ? (arr_4 [i_0] [i_1] [i_2]) : (((50119 ? (max(var_6, 4294967288)) : 82090887)))));
                    var_13 ^= ((-var_5 ? ((-(arr_7 [11] [11]))) : ((((arr_3 [i_0]) > var_7)))));
                    var_14 = (arr_8 [i_0] [i_0] [i_0] [15]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(1610612736, 4294967295)))));
                                arr_16 [i_2] |= (var_10 << 15);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [5] [i_5] [i_2] [i_1] [i_0] = 4975;
                                arr_24 [i_1] = (((((!(17045 || 132120576)))) | ((~(arr_6 [i_0] [i_2] [i_2] [i_2])))));
                                arr_25 [i_0] [i_1] [i_2] = ((12463 ? ((((1680937641 > (arr_0 [i_0 + 2] [i_0 + 3]))))) : -7586053000122803224));
                                var_16 = ((((min((arr_5 [i_0] [i_1] [i_5]), (arr_4 [i_0] [i_0 - 2] [i_2])))) ? ((max(((-(arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_5]))), var_3))) : (((arr_1 [i_0]) ? (4294967290 + var_11) : 1006632960))));
                                var_17 *= (((3937256019 ? -1421742287 : 1929239706)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((min(((29435 ? 228727310 : 29227)), ((67108864 ? (-127 - 1) : 524287))))) ? (~var_0) : 9223372036854775807));
    var_19 = (((-838820319 ? var_7 : -6241512191070075234)));
    #pragma endscop
}
