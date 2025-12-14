/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228463
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
    var_10 = ((/* implicit */unsigned short) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? (-1941043509) : (((/* implicit */int) var_7)))) + (2147483647))) << (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                    var_11 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_4))))));
                    var_12 = ((/* implicit */unsigned char) (~(((unsigned int) arr_2 [i_0]))));
                }
                for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    arr_10 [i_0] [i_3 - 1] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_6 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) 1941043509)))), (arr_8 [i_0] [i_0 - 1] [i_0 + 1]))) * (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_3] [0LL])) ? (((/* implicit */int) (short)-433)) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_4 [i_0 + 1])))))));
                    arr_11 [i_0] [(short)12] [7] [i_0] = ((/* implicit */unsigned int) var_0);
                }
                arr_12 [i_0] = ((/* implicit */unsigned short) ((min((-1), (((/* implicit */int) (unsigned char)228)))) <= (((/* implicit */int) arr_9 [i_0] [i_0]))));
                var_13 = ((/* implicit */int) arr_6 [i_0] [i_1 - 2]);
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_0) <= (((/* implicit */int) var_4)))))));
}
