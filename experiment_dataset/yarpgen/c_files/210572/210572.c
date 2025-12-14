/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max(-2053627691, 1));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_0] = (max((min(((var_3 ? var_10 : var_9)), (((arr_4 [i_0]) ? (arr_1 [i_0]) : 141)))), ((-1 ? ((min(var_6, var_0))) : (!var_6)))));
                    arr_12 [i_0] [i_1 - 2] [i_1] [i_0] = max((((!((max(var_10, (arr_4 [i_0]))))))), (min(((max(-109, var_9))), (min(3784036066956316598, (arr_10 [i_0] [i_1 - 2] [i_2]))))));
                    var_12 = (max(56944, (((arr_9 [i_0] [i_1] [i_0] [i_2]) ^ (arr_9 [i_0] [i_1] [i_0] [i_0])))));
                    var_13 = (min(var_13, ((!((min((-32767 - 1), (max((-2147483647 - 1), 8796093014016)))))))));
                    var_14 = (min(var_14, 32755));
                }
            }
        }
        var_15 = (min(4113757148, (((((-53 ? 1485873220 : 955672011))) ? 7424108766892800942 : var_6))));
        var_16 = (15990 >= -383292710);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            {
                arr_19 [i_4] = ((((max((max(917504, -2052939457)), (-32767 - 1)))) ? (~var_5) : (((((4294967295 ? -1 : var_8))) ? (max((arr_18 [i_4 + 2] [i_4]), (arr_17 [i_3] [i_4 - 3]))) : (arr_17 [i_4 + 2] [i_4 + 4])))));
                var_17 = (min(3483199483570968041, ((((arr_18 [i_4 + 1] [i_4]) | (!var_7))))));
            }
        }
    }
    var_18 = ((var_0 >> ((((1538510289235206962 ? -917503 : (-32767 - 1))) + 917517))));
    var_19 = ((((min(-32755, var_1))) || var_5));
    #pragma endscop
}
