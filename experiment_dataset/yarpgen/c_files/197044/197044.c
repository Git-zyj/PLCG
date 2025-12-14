/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_13 = (((((arr_6 [i_0 + 1]) ? var_1 : (max(-32756, var_3)))) | 32752));
                    var_14 += ((((min(var_0, 32752))) ? (((370693506 != (((min((arr_10 [i_0] [i_0]), 32729))))))) : var_0));
                    var_15 = (max(var_15, ((((((min(32751, 0))) ? (max(var_1, var_9)) : 3924273789))))));
                }
                arr_12 [i_0] = (min(((((((32755 ? -32756 : 32744))) ? (min(3924273789, (arr_1 [i_0] [i_1 - 1]))) : (max(3092910850, 21))))), (~var_11)));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_16 = (((((7778781963394676845 ? 65532 : 14514))) ? (min((55 && 32755), -18446744073709551615)) : (((370693507 ? (arr_6 [i_0 + 1]) : (((arr_16 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_1 - 1]) ? 370693507 : (arr_16 [i_0] [i_1 - 1] [i_3] [i_4] [i_4] [i_5]))))))));
                                arr_21 [i_0] = ((((!(((15 ? 6329454302758334869 : 6329454302758334869))))) ? (((min(145, -32756)))) : (min(((max(0, 1))), 0))));
                                var_17 += ((((((((var_0 ? (arr_10 [i_0 - 1] [i_0]) : var_1))) ? (arr_6 [i_4]) : (arr_5 [i_1] [i_1] [i_5])))) ? ((((max(var_3, (arr_11 [i_3])))) ? (((var_12 * (arr_3 [i_3 - 1])))) : var_5)) : ((((-14515 || (arr_3 [i_0 - 1])))))));
                            }
                        }
                    }
                }
                var_18 += ((3924273789 <= (min((arr_4 [i_0]), ((((arr_17 [i_0] [i_1] [i_1 + 1]) ? (-127 - 1) : var_10)))))));
            }
        }
    }
    var_19 = ((~(((((12117289770951216748 ? var_1 : var_2))) ? (min(var_6, -32438)) : (((370693507 ? var_0 : var_4)))))));
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                arr_26 [i_6 - 1] [i_6 - 3] [i_7] = ((~(((var_0 && ((max((arr_6 [6]), var_3))))))));

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_20 = (max(var_20, ((((~var_12) ? var_4 : (((((var_10 ? var_4 : -32756))) ? 11024211937447856191 : ((var_4 ? var_9 : 3924273789)))))))));
                    var_21 = (max(var_21, var_7));
                    var_22 = 7681;
                    var_23 -= ((var_3 || ((!((max(2264946198, (-32767 - 1))))))));
                }
            }
        }
    }
    #pragma endscop
}
