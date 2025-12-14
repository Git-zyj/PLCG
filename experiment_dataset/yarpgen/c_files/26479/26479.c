/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((0 | var_3) & (var_4 | 193))) >> (((((((66 ? var_12 : var_9))) | (var_13 | var_1))) + 18))));
    var_15 = ((((((min(var_5, 1))))) / (((((6678554764272134583 ? var_11 : var_12))) ? (var_5 | var_10) : ((var_6 ? var_1 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((var_1 * (((((min(var_0, 65535))) + 65535)))));
                    var_17 = ((((max((1332245974 & 189), (8442863680903875613 < -15208)))) ? ((-3470 ? (min((arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_2]), var_7)) : ((8589934592 ? 1534099748341094609 : -109)))) : (((var_8 > (arr_0 [i_0]))))));
                }
            }
        }
    }
    var_18 *= var_3;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                {
                    var_19 = ((((max(((var_2 % (arr_12 [i_3]))), (((arr_17 [i_3] [i_4] [i_5] [i_5]) | 0))))) ? ((min((65535 && 0), (((arr_2 [13]) % (arr_16 [i_3] [i_3] [i_3] [i_3])))))) : ((((((arr_17 [4] [1] [i_4] [0]) >> (1220051949 - 1220051946)))) ? (max(-3470, (arr_7 [i_3] [i_3] [10]))) : (13835058055282163712 < 65409)))));
                    var_20 = ((((((7539031971425652964 ? 1452686978 : 1)) < ((var_1 ? 65532 : (arr_13 [i_3] [5])))))) ^ 22935);
                    var_21 = (min((((((var_13 ? 108 : 1))) ? (8957 / 193) : ((min((arr_17 [i_5] [4] [i_3] [i_3]), var_8))))), (((30626 && (((var_7 ? 65535 : 1))))))));
                }
            }
        }
    }
    #pragma endscop
}
