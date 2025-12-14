/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 += (((max(((17082 ? 2391525166 : 1)), (arr_1 [10] [i_0]))) != ((((((4084251898 ? var_13 : 102))) ? (arr_1 [12] [i_0]) : (max((arr_1 [10] [i_0]), var_3)))))));
        var_17 = (max(var_17, ((((((-(arr_1 [4] [i_0])))) >= (((!-11925) ? (arr_0 [i_0] [i_0]) : ((33 ? 210715394 : -11933)))))))));
        var_18 -= 14804100685096004005;
    }
    var_19 += ((var_6 ? var_8 : 210715398));
    var_20 = (max(-426923408096460383, 3642643388613547600));
    var_21 = (max(((var_12 % (((1171468750 ? var_8 : 175))))), var_3));
    #pragma endscop
}
