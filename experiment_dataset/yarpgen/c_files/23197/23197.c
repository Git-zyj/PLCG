/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((min((!var_4), (!var_5)))), var_10)))));
    var_12 = var_7;
    var_13 = (min(var_13, ((((var_0 * -var_6) ? var_8 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = ((((((~(arr_3 [i_1] [i_2]))) >= ((-(arr_5 [i_0] [i_0] [i_2]))))) ? ((((!(arr_1 [15] [15]))) ? (!var_8) : (arr_3 [i_0] [i_2]))) : (min(((-(arr_1 [i_1] [i_1]))), (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((var_8 + 1454576354) - 24))))))));
                    arr_7 [i_0] [i_1] [12] = (((arr_6 [i_0]) ? (min((arr_6 [i_0]), ((1020 ? (arr_4 [i_0 - 1]) : (arr_2 [i_1]))))) : (arr_1 [i_0 - 1] [i_2])));
                    var_15 = (min(var_15, (((((min(((1029 ? 0 : (arr_4 [i_0 - 1]))), (((arr_4 [i_2]) * (arr_2 [i_2])))))) ? ((((arr_2 [i_0]) % 4294966266))) : ((((((arr_4 [i_1]) ? (arr_2 [i_0]) : 1))) ? (((1 ? 310739068 : var_0))) : ((32767 ? -8081638786484485432 : (arr_2 [i_2]))))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = ((+(((!3400165027922574232) ? ((min(1, 1))) : (4294966275 <= 3823659457)))));
        var_17 ^= (!((16537844535537888970 >= (((((arr_9 [i_3] [13]) > (arr_5 [17] [i_3] [i_3]))))))));
        var_18 ^= ((((((arr_1 [7] [i_3]) ? ((max(0, 4294966267))) : ((var_1 ? -2608080045509578371 : -7804886042250999293))))) ? (arr_0 [i_3] [i_3]) : ((((((arr_1 [i_3] [i_3]) ? (arr_2 [i_3]) : (arr_9 [i_3] [i_3])))) ? ((1383771722 ? 1 : -1961394065)) : ((-(arr_1 [i_3] [i_3])))))));
    }
    for (int i_4 = 4; i_4 < 6;i_4 += 1)
    {
        arr_12 [i_4] = (arr_0 [i_4] [i_4]);
        arr_13 [i_4] = (arr_10 [i_4 - 3]);
        var_19 = (((arr_3 [i_4] [i_4]) ? (arr_4 [i_4]) : (((!-90) ? (arr_5 [i_4] [i_4 - 2] [i_4]) : (((!(arr_8 [i_4] [i_4]))))))));
        arr_14 [i_4 - 2] = (arr_5 [i_4 - 1] [i_4] [i_4]);
    }
    #pragma endscop
}
