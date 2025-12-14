/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(61, ((((max(var_6, var_10))) ? (~1) : ((var_4 ? 32 : var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = min(((((arr_1 [i_0]) != ((max(var_15, var_13)))))), (((arr_7 [i_0] [i_0]) + (arr_7 [i_1] [i_2]))));
                    arr_10 [i_0] [i_0] = (arr_2 [i_1]);
                }
            }
        }
        arr_11 [i_0] = (max((arr_1 [i_0]), (min((arr_5 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    var_17 = (max((((arr_18 [i_3] [i_4] [i_4]) ? 2126956520239701210 : (~var_4))), ((max((~32), (((arr_12 [i_3]) ? (arr_4 [i_4]) : (arr_9 [i_5]))))))));
                    arr_19 [i_3] [i_3] [i_3] = (((((((var_1 <= (arr_6 [i_4] [i_4])))) - (2577258284239879149 != 7)))) ? -122 : (min(((max(-99, -23))), (((arr_5 [7]) ? 30627 : var_15)))));
                    arr_20 [i_5] [i_5] [i_5] &= ((var_10 ? ((-(((arr_16 [i_5]) % (arr_9 [i_3]))))) : var_9));
                }
            }
        }
        var_18 = (max(((var_5 <= (arr_18 [6] [i_3] [i_3]))), (((arr_2 [i_3]) < (arr_18 [i_3] [i_3] [i_3])))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_19 = (max(var_19, ((min((((((var_8 ? (arr_22 [i_6] [i_6]) : 4)) != (var_4 >= 52914)))), ((((min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6])))) ^ (((arr_21 [i_6] [i_6]) ? 20 : (arr_22 [i_6] [i_6]))))))))));
        var_20 = -45;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_27 [i_7] = (((((max(19605, var_0)))) ? (max((arr_23 [i_7] [i_7]), ((((arr_8 [i_7] [i_7] [i_7]) / var_15))))) : ((-(((arr_4 [i_7]) / 15572629559843829912))))));
        arr_28 [i_7] = var_3;
    }
    var_21 = (((((-742676589 ? var_11 : var_4)) | (~var_3))) & (max((~var_7), ((max(var_4, var_8))))));
    var_22 &= (~6721423863801998336);
    #pragma endscop
}
