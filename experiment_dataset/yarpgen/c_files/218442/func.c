/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218442
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (signed char)-100);
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_12 = var_3;
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
    }
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((unsigned short) ((long long int) ((arr_4 [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_10 [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 - 1] [i_2 - 1]))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) | (((/* implicit */int) (short)-32748))));
    }
}
