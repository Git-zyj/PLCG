/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(((1 ? 171 : -30296)), ((max(1, 0)))))) ? (((max(var_8, -61)))) : (max((min(59, var_2)), (((var_13 ? 187 : 8388608)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((-((((2 * 65530) || ((max(var_6, 1))))))));
                var_15 = (max(var_15, ((((((var_10 ? var_4 : var_6))) ? (max(((597312129 ? var_13 : 1)), ((max(148, var_4))))) : ((19 / (1 * var_3))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = var_6;

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_4] [i_1] [i_0] [i_3] = ((((min(0, (16059 << 1)))) ? (-459291746 != -61) : ((((((max(114, 19)))) < var_2)))));
                                var_16 = (max(var_16, ((min(1, 48224)))));
                                var_17 = (1 ? -1 : 1);
                            }
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                var_18 = (((((((-459291746 ? var_5 : 159))) ? var_1 : (min(1, 459291742))))) ? (max((194 >= var_11), ((154 ? 1 : 20)))) : ((min(32597, 79))));
                                var_19 = ((((((54562116 ^ var_1) & 0))) ? (((~var_5) ? var_5 : (176 ^ 0))) : ((115 ? 1 : 7559800472656032234))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_0] = ((+(((-1195314635 || 1) ? (!11018) : ((min(var_1, 63453)))))));
                                var_20 = (1 && -22);
                                arr_21 [i_0] [4] [i_0] [i_0] [7] = (!54518);
                            }
                            arr_22 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] = (((((var_1 ? var_3 : (0 != 1)))) ? (min((min(var_11, var_0)), ((8 ? 25379 : var_3)))) : (1 - -1310959116)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                var_21 = (min(var_21, var_3));
                                var_22 = (min(var_22, (((411878832 ? 8 : -449224294)))));
                                var_23 = ((((min(1, 449224279))) ? ((~(11018 ^ 7559800472656032234))) : 38149));
                                arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] = ((((92 ? var_11 : -9)) < (min(21, (((-9223372036854775807 - 1) ? 27 : var_13))))));
                            }
                            var_24 = (min(var_24, (((((-8757276057037325078 ^ 0) < (((54518 ? -9 : 27970)))))))));
                            var_25 = (max(var_25, 1));
                            arr_30 [i_0] [i_0 + 1] [i_0] [13] = (!1099511627775);
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, (((-((((min(114, 252))) ? 69 : var_8)))))));
    #pragma endscop
}
