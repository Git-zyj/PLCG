/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247376
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_0 + 1] [i_0 - 1]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((arr_7 [i_0 - 1] [i_0] [0LL] [i_0]) <= (arr_7 [i_0 - 1] [i_0] [i_0] [i_0])))), ((-(arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])))));
                        arr_11 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */short) max((arr_1 [i_0] [(unsigned char)12]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 + 2] [i_1] [i_1] [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_17 = arr_1 [i_0] [i_5];
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(8842858498550089534ULL)))) ? (arr_6 [i_4] [(_Bool)1] [i_4]) : (((/* implicit */int) arr_15 [i_5]))));
                }
            } 
        } 
    }
    var_19 |= ((/* implicit */_Bool) (short)-1);
}
