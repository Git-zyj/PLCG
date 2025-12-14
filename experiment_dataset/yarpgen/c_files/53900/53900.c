/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((max((-9223372036854775807 - 1), -1264458364)), ((max(1303664845, 1303664845)))))) ? (min((max(var_1, var_8)), ((-1303664846 ? var_4 : 25843)))) : ((max(((var_8 ? 5 : -1303664825)), ((100815467 ? var_13 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 |= (max((((((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_0))) ? (((arr_0 [i_0]) ? var_0 : var_1)) : ((max(1, -15656)))))), (((((var_0 ? 41 : (arr_3 [i_1] [i_0])))) ? ((min(-1, -836239526))) : (max(-1, 2))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = ((((max(((max(var_0, var_12))), (max((arr_10 [i_2] [i_1] [i_1] [i_3]), var_3))))) ? (((((((arr_4 [i_0] [i_2]) ? var_0 : (arr_9 [i_0] [i_1] [i_2] [i_0])))) ? (max(var_9, -21)) : ((max(var_10, (arr_8 [1] [i_1]))))))) : (((((var_4 ? (arr_0 [i_0]) : 212))) ? (min(22, var_12)) : ((((arr_10 [i_3 - 1] [i_2] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [1]) : var_13)))))));
                            var_17 = ((((max((max(var_1, 33893)), ((max((arr_0 [i_1]), var_13)))))) ? ((((((9780634155968049274 ? 158 : 50034))) ? ((max((arr_11 [i_1]), (arr_11 [i_0])))) : ((-1303664846 ? 25845 : var_0))))) : (max(15475330642077276717, (-9223372036854775807 - 1)))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(((12643 ? 7 : 18446744073709551615)), (((((max(var_2, var_1))) ? (max(var_6, var_1)) : ((-70 ? var_9 : var_7)))))));
    var_19 = ((1303664847 ? ((max(1303664847, (max(-1303664874, 1))))) : ((3028842188 ? ((-24 ? 2576936974 : 14551381660856842247)) : ((36857 ? 23064 : 2))))));
    var_20 = (((((((max(511, var_1))) ? (((var_1 ? var_13 : var_7))) : (min(var_13, var_12))))) ? (max((min(233, var_2)), ((var_2 ? var_10 : var_2)))) : ((min(((52793 ? 1303664845 : -7761281539285568161)), 52793)))));
    #pragma endscop
}
