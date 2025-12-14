/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52062
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((min((var_7), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)14)), (max((arr_3 [i_2] [i_2] [i_2]), (arr_2 [i_2]))))), (arr_2 [i_0 + 1])));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)121))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((min((arr_2 [i_0 + 2]), (1941919879))) == ((~(arr_2 [i_0 + 1])))));
    }
    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) (-(arr_11 [i_3] [i_3])));
        arr_15 [i_3 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32524))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_3] [i_3 + 1])) ? (arr_11 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    var_14 = ((/* implicit */unsigned int) var_11);
}
