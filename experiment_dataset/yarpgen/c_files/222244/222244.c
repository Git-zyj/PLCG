/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((min(((((1 ? 1522364277 : 31950)))), ((597695694 ? ((12582912 ? 2938806470 : 6517425906414831837)) : 0)))))));
                                var_21 ^= (255 * 57344);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = (min((max((112 || 0), (max(-4968899381830386039, 1511064820)))), -1));
                                var_22 = (((((((1 ? 2305843009213693951 : 1073610752)) <= (((1 ? 0 : 2188840127)))))) == ((179 ? (15 < 4272939981) : 0))));
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] = (((((!(((951211222 ? -3 : 3620152359)))))) ^ (542987665 == 1)));
                                arr_21 [i_1] [i_5] [i_1] &= ((((((1 < 0) ? -6747425113223737263 : 2247401767174144))) ? 93 : (((!(((-1 ? 15 : 1))))))));
                                var_23 += ((((((1 * 99) * ((30 ? 30 : 255))))) ? ((((((-338766333 ? 1 : 8160))) ? (max(131040, 215)) : 1))) : (max((~2205299486581594232), (((65535 << (((-5455758089097019904 + 5455758089097019925) - 11)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (134217696 >= 78);
    #pragma endscop
}
