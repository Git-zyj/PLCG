/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max((var_6 & var_18), var_17));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_3 ? ((-(arr_0 [i_0] [i_0]))) : ((((min(var_12, 64))) ? ((8529996453454189772 ? 6917529027641081856 : 178)) : (173 > 1)))));
        var_20 = (max((((max(-8529996453454189772, (arr_1 [i_0]))) << (var_17 <= var_16))), (((!(((1 ? (arr_1 [i_0]) : 77))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = 242;
                    var_21 = ((((((arr_7 [i_1]) ? ((min(-6047, -10616))) : ((max(var_17, 1)))))) ? var_14 : (((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? ((max((arr_8 [i_0] [i_1] [i_1] [i_0]), (arr_2 [16] [i_2])))) : (max(1, 1133616320))))));
                    arr_10 [10] [i_2] [12] = (min((((arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 1]) ? 1 : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 2]))), (((((min(var_15, 1))) <= ((min(var_2, 43465))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_22 [7] [i_5] = ((1 ? (((var_15 ? (arr_11 [i_3 + 3] [i_4]) : 103))) : 3035614006293257304));
                    var_22 = 1;
                }
            }
        }
        var_23 = (max(var_23, ((((arr_6 [i_3 + 1]) ? (arr_18 [i_3 + 3] [1] [1] [i_3 + 2]) : 4315223672265920272)))));
        var_24 = ((12803502043032454892 >= (((16116995523378717616 ? var_8 : 1862992933)))));
    }
    var_25 = (((7 == 255) ? ((-1862992934 + (-3035614006293257304 + 1))) : (((min(var_2, 254))))));
    #pragma endscop
}
