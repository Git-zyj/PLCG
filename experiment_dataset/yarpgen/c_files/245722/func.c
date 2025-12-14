/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245722
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
    var_19 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_18)))))) & (((unsigned int) var_15)))), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) var_13)), (max((max((arr_0 [i_0]), (((/* implicit */unsigned int) var_18)))), (((unsigned int) arr_0 [i_0]))))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) ((short) arr_0 [i_0]))), (max((((/* implicit */unsigned int) var_14)), (arr_1 [i_0]))))));
        var_21 = ((/* implicit */signed char) var_2);
        var_22 = ((/* implicit */unsigned int) max((var_22), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46157)) + (((/* implicit */int) (signed char)-79))));
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((unsigned short) var_8));
                        var_24 = ((/* implicit */short) var_4);
                        var_25 = ((/* implicit */signed char) ((short) var_10));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned int) ((unsigned int) var_4))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) var_11)));
    }
    var_28 = ((/* implicit */short) max((max((((((/* implicit */int) var_12)) * (((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_8)))))), (((/* implicit */int) var_6))));
    var_29 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (max((var_0), (((/* implicit */unsigned int) var_6))))));
}
