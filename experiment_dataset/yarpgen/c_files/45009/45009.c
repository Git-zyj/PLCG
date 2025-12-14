/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((((((((min((arr_3 [i_1]), (arr_1 [i_2] [i_2]))))) % (min(var_9, 428489475688025501))))) ? 10532565331557006087 : ((((((65535 ? -5198092297450711958 : var_6))) ? (!var_7) : ((((arr_1 [i_0] [i_0]) <= (arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 &= 255;
                                arr_15 [i_0] [i_1] [18] [i_3] [i_0] = (((-1639936528127850359 ^ ((((143974450587500544 > (arr_7 [i_1] [i_1] [2] [i_1]))))))) & ((((((!(arr_6 [13] [i_2])))) * (18446744073709551615 && 52)))));
                                var_13 = (min((-1593178861456573369 ^ 65276), (min(var_9, (arr_5 [i_3] [i_0] [i_0])))));
                                var_14 = (+((var_7 ? (((arr_0 [i_2]) / var_7)) : (arr_1 [i_4] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
