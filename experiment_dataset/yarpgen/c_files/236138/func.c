/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236138
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 |= ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (min((((unsigned short) (short)-32760)), (((/* implicit */unsigned short) (unsigned char)255))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_0])) ^ (((/* implicit */int) var_3))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        var_13 = ((/* implicit */short) max((1819235383U), (((/* implicit */unsigned int) (unsigned short)49152))));
        var_14 = ((/* implicit */short) ((int) var_7));
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((short) (unsigned char)248))))), (((/* implicit */int) (unsigned short)24847))));
        arr_13 [i_4] [(short)12] = arr_10 [i_4];
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_16 = ((/* implicit */int) (signed char)-119);
        var_17 *= var_0;
    }
}
