/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = 1;
            arr_7 [i_0] [i_1] = (((((((min(127, (arr_1 [i_0])))) ? (min((arr_1 [i_1]), (arr_0 [i_0]))) : ((max((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0] [i_0]))))))) != (6111869980444562717 / 4827)));
            var_12 += ((~((((max(var_5, 6111869980444562709))) ? (~4184075693) : ((max((arr_4 [i_0] [i_1] [i_1]), (arr_0 [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_13 = (max(((((arr_8 [i_0]) + (arr_8 [i_2])))), (((min(16517999741246058394, -5138)) | ((min(var_7, (arr_5 [i_2]))))))));
            arr_10 [i_0] [i_0] [i_0] = var_5;
        }
        var_14 = (arr_4 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_13 [i_3] = ((103 ? -22 : ((-(~-12)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_15 = (max((!-4516107859631369960), (arr_5 [i_5])));
                        var_16 = ((((max(-132, 12))) < ((3481709447 ? 3721739767442922223 : 6874718921585071393))));
                        var_17 = ((((-26 ? ((min(3019956688, 1))) : ((4065334524 ? 8092915510975632058 : 11922)))) != (((arr_0 [i_6 + 1]) ? (arr_17 [i_3] [i_3 + 3] [i_4]) : (((arr_3 [i_5]) ? (arr_20 [i_3] [i_3] [i_3] [i_4]) : (arr_18 [i_4] [i_4] [i_5] [i_6])))))));
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, var_6));
    var_19 += (max((~var_10), var_8));
    #pragma endscop
}
