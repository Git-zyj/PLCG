/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24322
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
    var_11 = ((/* implicit */short) (-(min((((/* implicit */int) min((var_2), (((/* implicit */short) var_4))))), (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */_Bool) ((unsigned short) (~(((((/* implicit */_Bool) arr_0 [(short)9])) ? (3) : (((/* implicit */int) arr_10 [(short)23] [i_2 + 1] [7U] [(short)23])))))));
                                var_13 = arr_0 [i_0 + 2];
                                arr_13 [i_4] [i_0] [i_2] [i_0] [24U] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [(unsigned short)8] [(unsigned short)8] [24])) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [23] [i_0]))))), (((unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)53839)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (var_7)));
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)53839)) - (53817))))))));
                    }
                    var_16 ^= ((_Bool) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_2)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_10)) : (((var_0) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_19 ^= max((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)2047)))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) var_8)) : ((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_15 [i_6] [(_Bool)1] [i_8] [i_6] [i_9])) ? (-4) : ((-(((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned short) arr_23 [i_6])), (var_7))));
                var_22 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) 4294967295U)) ? (arr_17 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6] [(unsigned short)2] [i_6]))))) >= ((~(arr_9 [i_7] [(unsigned short)0] [i_7] [i_7]))))));
            }
        } 
    } 
}
