/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((!((max(-83, 728387744308110494))))) || ((((-112 ? 127 : -2048))))));
    var_13 = 1;
    var_14 |= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] |= 2047;
        arr_3 [i_0] = ((127 ? 32767 : -2035));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_6 [i_1] = (max(-2035, 3205));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = min((min((536075841 == -2048), ((-2066 ? 896 : 13508)))), (3151072462 != -2015));
            arr_9 [i_2] [i_1] [i_1] = (((((((min(65409, -1519248358))) ? ((max(-256, 2034))) : 13930611858588964246))) ? ((1 ? (325528781 < 791205889) : ((126 ? 15131388245570807531 : 109)))) : (((((max(-1045825790, (-2147483647 - 1)))) ? (((0 ? -1821761304 : 71))) : 7986872023094980179)))));
            var_16 = ((~((63 >> ((min(1, 36745)))))));
        }
        arr_10 [i_1] [i_1] = (min(1, 18446744073709551615));
        arr_11 [i_1] |= (+-160);
    }
    #pragma endscop
}
