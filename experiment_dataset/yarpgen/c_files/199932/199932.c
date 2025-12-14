/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = (max(41, 141500172756900456));
                        arr_11 [i_0] [i_3] [i_1] = (-3267283562290194523 != -3267283562290194518);
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] = (((((((((arr_1 [i_0 - 1]) ? 0 : var_6))) ? 0 : ((var_5 ? 12 : 1560321565))))) ? (((((-12 ? (arr_3 [i_0] [i_1] [i_2]) : -6))) * (min(1, 17919377668564879631)))) : (((~((1487858490 ? var_6 : (arr_8 [i_0 - 2] [i_1] [i_2] [i_4] [i_4] [i_2]))))))));
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] = ((+((~((var_0 ? (arr_8 [i_0] [i_1] [10] [10] [i_2] [i_4]) : (arr_3 [i_1] [i_1] [16])))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_2] [i_1] [20] = ((((max((arr_8 [i_1] [i_1] [i_2] [i_2] [i_1] [i_0]), (arr_8 [i_0 - 1] [i_1] [i_0] [i_0 - 2] [i_1] [i_0])))) ^ ((max(var_0, (arr_8 [i_2] [i_1] [i_2] [i_2] [1] [12]))))));
                        var_10 = (max(var_10, (((50461 ? (((((min(var_3, (arr_4 [10])))) ? var_7 : (~4101865557)))) : (max(-1, 16570524562778258287)))))));
                        var_11 ^= var_3;
                        arr_20 [i_0] [i_1] = (min((((((-(arr_2 [i_0])))) ? (611799243508128019 << 0) : 1193199808)), (min((arr_6 [i_0 + 1] [i_0 - 2]), var_1))));
                        var_12 = (min(var_12, 30));
                    }
                    arr_21 [i_0] [0] [i_0] [i_0 - 2] |= ((~(arr_0 [i_0 + 1])));
                }
            }
        }
    }
    var_13 = (((min((max(193101744, 1)), var_7)) <= var_9));
    #pragma endscop
}
