/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((35665 ? 7408 : 0));
        var_14 = (min(var_14, (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (((((((((arr_1 [i_0]) / (arr_1 [i_0])))) ? ((((arr_1 [22]) ? (arr_1 [17]) : (arr_1 [15])))) : (((arr_0 [i_0]) * (arr_1 [1])))))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : ((-(arr_1 [i_0])))))) : (arr_0 [i_0])));
        var_15 = ((((-28396 ? 117 : 2236068143)) >= (arr_0 [i_0])));
        arr_3 [i_0] = (((((-14000 ? 118 : 0))) ? ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((~(arr_0 [i_0])))) : ((1 ? 1 : 9223372036854775807)))) : (((1951460195 ? 46 : ((219 ? 1195337252 : 2514)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        arr_7 [19] = (arr_4 [1]);
        var_16 = (+((((((arr_4 [14]) ? (arr_4 [i_1]) : (arr_5 [i_1]))) == (((arr_5 [i_1]) ^ (arr_5 [i_1])))))));
        arr_8 [i_1] = ((+((((arr_4 [i_1]) == (arr_4 [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (((((arr_9 [i_3] [i_2]) - (arr_9 [i_2] [i_2]))) - (((arr_9 [i_2] [i_3]) ? (arr_9 [2] [i_3]) : (arr_9 [i_2] [i_2])))));
                    var_18 = ((((((arr_10 [i_4]) ? (((arr_13 [i_4]) % (arr_1 [i_2]))) : ((((arr_14 [i_2] [1] [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_1 [i_3]))))))) ? (arr_11 [i_2] [i_2] [i_2]) : (((arr_9 [i_3] [i_4]) / (arr_4 [i_3])))));
                }
            }
        }
    }
    var_19 = (((((255 ? (!1424771552) : ((27607 ? 32291 : 30503))))) < (((((0 ? 192 : 0))) ? ((199 ? 2459818387 : 0)) : (((0 ? -897268576 : -15089)))))));
    var_20 = (~4919);
    #pragma endscop
}
