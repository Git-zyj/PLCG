/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (17350835394419326942 ? 65535 : (max(13330225171878030548, (((127 ? var_14 : 4053662003733038256))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 = (min(-1148442253892922047, 1148442253892922046));
                    arr_8 [i_0] [i_1] = ((((((arr_7 [i_0] [i_1 + 1] [i_1]) ? 15 : (arr_7 [i_1 - 1] [i_1 + 1] [i_1])))) ? ((max(983040, 10))) : (((arr_7 [i_0] [i_1 + 1] [i_1]) | 13933527304186065637))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [9] [i_2] [9] [i_1] = ((!((((var_13 ? (arr_0 [i_4]) : 5739870734238263792))))));
                                var_18 = ((((((-1148442253892922047 ? 8275 : 403510821))) % var_5)));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] = (126 * 15);
                }
            }
        }
    }
    #pragma endscop
}
