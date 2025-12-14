/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (((3278607761578735037 != ((((var_2 || ((!(arr_1 [i_0]))))))))))));
        var_21 = ((17300 + (-32767 - 1)));
        arr_2 [i_0] = (arr_0 [i_0 + 2]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    arr_11 [i_2 - 1] [i_3] = (var_4 / -446165356014736737);
                    arr_12 [i_1] [i_1] [i_1] = -3278607761578735013;
                }
            }
        }
        var_22 = (min(var_22, (arr_4 [i_1 - 1] [i_1 - 2])));
        var_23 *= (!32743);
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 -= -5885519585387799833;
        var_25 = (max((var_18 | var_19), (max((((var_9 >= (arr_13 [i_4])))), (max(-446165356014736732, 1039765002))))));
    }
    var_26 |= (!35184372088831);
    #pragma endscop
}
