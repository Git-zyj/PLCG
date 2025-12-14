/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [0] = ((-16756330417347806784 ? ((((min((arr_1 [i_0] [i_0]), 2122))) ? (arr_3 [i_1 - 2] [i_1 - 3] [i_1 - 1]) : ((3475081050359874105 ? (arr_0 [i_0]) : 3475081050359874105)))) : (((((arr_4 [i_1 - 1] [i_1 + 2]) > ((-3475081050359874093 ? 4294967295 : -3475081050359874093))))))));
                arr_6 [i_0] [i_0] [i_1] = (min((((983040 >= (4293984255 >= 983040)))), (arr_2 [i_1 + 3] [i_1 - 4] [i_1])));
                arr_7 [i_1] [i_1] = ((((((((arr_0 [i_1]) ? 1 : 15130612774073894239)) != 43896))) == ((((((((arr_1 [i_0] [i_0]) >= 3475081050359874105)))) <= (arr_3 [14] [i_0] [i_0]))))));
            }
        }
    }
    var_16 = var_10;
    var_17 = ((5068 ? 1327253718 : (min(var_8, -3475081050359874105))));
    var_18 = ((~((27886 ? var_12 : (1 ^ var_8)))));
    #pragma endscop
}
