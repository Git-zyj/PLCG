/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 25250;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = ((((min(var_9, (min(var_4, 1))))) ? (((((((arr_6 [i_0] [i_0] [i_1] [i_0]) ? var_8 : 1))) ? ((((arr_3 [i_4] [i_1] [i_2]) >= (arr_11 [i_1 + 3] [i_3] [i_4])))) : (min(1683774434, 1))))) : (min(5238266002913326099, 65535))));
                                var_12 = (max(var_12, (((-(min((((arr_5 [i_0] [i_1] [i_2]) / 18446744073709551611)), (((0 ? 41995 : 7672))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_13 = (((arr_3 [i_2] [i_2] [i_2 - 2]) ? ((((arr_3 [i_1] [i_1] [i_2 - 1]) * (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : 1375666203));
                                var_14 ^= var_6;
                                var_15 ^= (((((~(arr_4 [i_2 - 3] [i_0] [i_2 - 3] [i_1])))) && ((min(63, 254)))));
                                var_16 = (193 >> (((max(((2706789865 ? 9939487087447923090 : 7685)), var_9)) - 9939487087447923059)));
                            }
                        }
                    }
                    var_17 &= (((4008875183 ? (arr_10 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_2 - 3]) : var_8)) / ((var_7 ? ((max(57850, 2))) : 1023)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_8] = 64527;
                                arr_23 [i_8] [i_1] [i_7] [i_7] [i_0] [i_1] [i_0] = 18446744073709551615;
                                var_18 = arr_10 [i_1] [i_1] [i_2] [i_7 + 4];
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] &= 1;
                }
            }
        }
    }
    var_19 = ((((((max(var_5, 262143))))) / ((var_3 ? 4294967290 : (78 || var_5)))));
    #pragma endscop
}
