/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28914
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-71)), ((unsigned char)249))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_11);
                    arr_12 [i_1] = ((/* implicit */short) (~(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) + ((-(((/* implicit */int) (unsigned char)54))))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) arr_5 [i_0]);
        arr_14 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)44)) % (arr_5 [i_0 + 1]))), (((((/* implicit */int) arr_8 [i_0 - 1])) | (((/* implicit */int) arr_8 [i_0 + 1]))))));
    }
    var_20 = ((/* implicit */unsigned short) (~(((var_12) & (var_3)))));
}
