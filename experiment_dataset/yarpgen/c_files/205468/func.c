/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205468
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
    var_10 ^= ((short) ((unsigned int) max((((/* implicit */unsigned int) (short)-32474)), (9678368U))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_6);
        var_11 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned char)244)))));
        var_12 = ((/* implicit */unsigned int) arr_1 [(unsigned char)8]);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))));
        var_14 |= (short)24625;
        var_15 = arr_4 [i_1] [i_1];
        var_16 = ((/* implicit */unsigned int) max((var_16), (((max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))) << (((min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (var_8))) - (478274808U)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-24627)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max(((~((-(((/* implicit */int) (short)22781)))))), ((-((-(((/* implicit */int) arr_1 [i_2]))))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_13 [i_2] = ((/* implicit */short) min((min((arr_0 [i_2]), (((unsigned int) var_7)))), (((/* implicit */unsigned int) min(((short)-24646), (((/* implicit */short) (unsigned char)50)))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)24645)) ^ (((/* implicit */int) (unsigned char)156))));
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_0))))));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)-20540)) * (((/* implicit */int) (short)9878))));
            arr_18 [i_2] = ((/* implicit */short) max((max((max((var_6), (((/* implicit */unsigned int) arr_9 [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) | (((/* implicit */int) arr_3 [i_2] [i_4]))))))), ((~(min((((/* implicit */unsigned int) var_3)), (var_6)))))));
            var_19 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
        }
        var_20 = ((/* implicit */unsigned int) arr_7 [i_2]);
    }
}
