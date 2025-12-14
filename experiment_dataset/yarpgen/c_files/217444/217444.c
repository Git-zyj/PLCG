/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_7, 397225658858467276);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((0 + (-2147483647 - 1))), 0));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (((((-((-6501302689310201816 ? var_7 : -6501302689310201816))))) && ((var_8 || (arr_0 [i_0])))));
                            arr_10 [i_0] [2] = -5131391051090402424;
                            var_13 = (arr_0 [i_3]);
                            var_14 = 124;
                        }
                    }
                }
                var_15 = (arr_5 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_16 = ((((6 ? 6914507818233178611 : 6)) - ((((!(arr_14 [i_5])))))));
                    var_17 = (min((max(6501302689310201816, ((-9223372036854775793 ? var_10 : (arr_15 [i_4] [i_5]))))), (max((arr_13 [i_4] [i_4]), ((min(1069877781, 229)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                arr_26 [i_7] [i_7] [i_7] = ((!((((5131391051090402412 & -2107751077) - ((var_1 ? var_9 : (arr_21 [i_8] [i_7]))))))));
                arr_27 [i_7] [i_8] = 60;
            }
        }
    }
    #pragma endscop
}
