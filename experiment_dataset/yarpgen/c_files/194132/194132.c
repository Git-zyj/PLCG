/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9312142167452348077;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(((9134601906257203549 == (arr_4 [i_0] [i_0]))), var_3));

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_2 - 1] [i_1] [i_0] = (((!var_11) ? ((224 * (arr_0 [i_2 - 1]))) : (arr_4 [i_0] [i_2 + 1])));
                    arr_9 [i_0] [i_1] [i_1] = 1185226410;
                    var_19 = (min(var_19, ((((var_6 ? 9134601906257203538 : 9312142167452348087))))));
                }
                for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((2585579154 && (arr_10 [i_0] [i_0] [i_0] [i_3 + 1])))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((((9134601906257203554 ? 9134601906257203523 : (arr_4 [i_3 + 1] [i_3 - 1])))) ? (~var_13) : ((3 ? -1201030766139069500 : -92)));
                }
                for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_21 += (2458466351 & 16);
                    arr_15 [i_1] [i_1] = (41944 & 1);
                    arr_16 [i_1] [i_1] [i_4] = (((max((arr_4 [i_0] [i_0]), (arr_14 [i_1] [i_1] [i_1]))) >> ((((-26937 * (((1182852726 ^ (arr_6 [i_4 + 1] [i_4] [i_1] [i_0])))))) - 18446712211365838716))));
                    arr_17 [i_0] [i_1] [i_4 + 1] [i_4 + 1] = -5451288263780317976;
                }
                for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_1] = 9134601906257203538;
                    var_22 = arr_7 [i_0] [i_1] [i_0];
                }
            }
        }
    }
    #pragma endscop
}
