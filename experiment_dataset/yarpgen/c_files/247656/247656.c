/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] = ((((arr_0 [i_0 - 3] [12]) && (arr_2 [i_0 + 2] [15]))));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_12 = ((((var_1 ? 104 : (~var_8))) == (91 / 1068852064067521827)));
                var_13 = (+-1068852064067521817);
                var_14 = (max((~0), ((-var_9 ? -1068852064067521832 : (min(6135596117194790529, -429751757))))));
            }
            var_15 = (max(((((var_5 || 8488805436895559876) && (arr_6 [i_0 + 1])))), ((14336 * (arr_3 [i_0] [i_0 + 2] [i_0 + 2])))));
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_16 = ((72057594037927935 ? (((!(((13895406004997296202 ? 72057594037927935 : var_2)))))) : 2147483644));
            arr_10 [i_0] [i_0] = ((-14337 == (6135596117194790529 & 0)));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_14 [i_0] [i_3] [2] = (((1027448436 * 310654069) % ((-((var_10 ? var_3 : var_4))))));
                var_17 = (~((-1425962124 % (arr_8 [i_0]))));
                var_18 = var_6;
                var_19 = ((((min(37, -1068852064067521817))) ? (((((((arr_9 [i_0] [i_0]) ? 18374686479671623681 : var_10))) ? (var_0 & var_0) : var_10))) : ((13478357886483580945 + ((min(var_9, -310654054)))))));
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_20 = (((!var_3) % (arr_15 [i_0 - 2] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_23 [i_0 - 3] [i_0 - 3] [i_0] [i_7] [i_6] = (((((((var_10 ? (arr_13 [i_0] [i_5] [i_7]) : -14336)) | var_6))) != ((~(max(4294967295, var_0))))));
                        var_21 = (max(var_21, (((arr_5 [i_0 - 2] [i_0] [i_0 - 1] [i_0]) + ((var_8 ? (arr_5 [i_0] [i_0] [i_0 - 3] [i_0]) : (arr_5 [i_0] [i_0] [i_0 - 2] [i_6])))))));
                    }
                }
            }
            arr_24 [i_0] [i_0] = ((4530914864135895209 ? ((-(arr_8 [i_0]))) : ((((arr_0 [i_0] [i_5]) < -13106)))));
        }
    }
    #pragma endscop
}
