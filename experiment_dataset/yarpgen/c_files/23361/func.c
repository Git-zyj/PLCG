/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23361
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_15 = var_12;
        var_16 = ((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_3)));
        var_17 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) -989559142);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) (~(arr_7 [i_3] [i_3 + 1] [i_3 + 1])));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [(unsigned short)6] [i_3])) || (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_8))));
                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_8 [i_4] [i_2])))));
            }
            arr_11 [i_1] [i_2] [i_2] = ((int) var_7);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) var_10);
            var_24 = var_6;
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_13 [i_1] [i_5 - 1]) : (((/* implicit */unsigned long long int) var_3))));
        }
        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_16 [i_6] = (!(((/* implicit */_Bool) arr_13 [i_1] [(_Bool)1])));
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
            arr_17 [i_1] [i_6] [i_6] = ((/* implicit */_Bool) 37421274);
        }
        for (int i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            var_27 = ((/* implicit */int) var_0);
            var_28 = ((/* implicit */_Bool) ((int) var_11));
            var_29 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (unsigned short)65535))))));
        }
        var_30 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 37421274)) : (var_4)))) || (((/* implicit */_Bool) var_12)));
    }
    var_32 = ((/* implicit */int) max((var_32), ((+(((/* implicit */int) var_14))))));
}
