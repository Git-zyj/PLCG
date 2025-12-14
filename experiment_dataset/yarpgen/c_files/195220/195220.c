/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(((min(10830, var_9))), (min(var_6, -5168)))), (min(13965016179275124931, ((min(-5154, var_12)))))));
    var_14 = (max(var_14, 10830));
    var_15 = (max(var_15, 84));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((max(var_11, (min(var_6, 43155)))) >= var_1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (max((min(((max(var_3, 1))), (max(var_9, var_3)))), ((min((max(var_8, 17096)), (max(78, var_3)))))));
                                arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = var_8;
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] = (max((min((var_7 != var_12), (max(var_7, -32)))), (min((var_0 != 22688), (max(-9030, 0))))));

                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    arr_18 [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_18 = (max((max(((max(var_0, var_3))), (var_6 ^ var_4))), ((max((min(9039, var_0)), var_8)))));
                                var_19 = ((((((((max(0, 10830)))) | (min(129, 7870196512254888783))))) * (min((min(4481727894434426684, 178)), ((max(1, -1223736382)))))));
                            }
                        }
                    }
                }
                var_20 *= min(var_2, 652479687697233837);
            }
        }
    }
    var_21 &= (max(683749511926050501, ((max((max(-2787999675728473708, 56)), ((min(124, 127))))))));
    #pragma endscop
}
