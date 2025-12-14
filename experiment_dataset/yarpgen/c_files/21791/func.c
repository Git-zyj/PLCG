/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21791
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_17))) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) | (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_3)))) * (((/* implicit */int) var_15))))));
    var_21 = max((((/* implicit */unsigned int) var_19)), (((var_6) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))));
    var_22 = ((/* implicit */unsigned int) var_19);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = var_1;
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 4] [i_2] [(unsigned short)12] [i_3 - 1] [i_2])) ? (((/* implicit */int) arr_13 [i_3 - 4] [i_2] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3 - 4] [i_2] [i_3 - 4] [i_3] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 557290899U)) && (((/* implicit */_Bool) 1111488338U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_19)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12323))) - (((var_4) << (((((/* implicit */int) var_13)) - (15403)))))));
                            arr_16 [3U] [i_3] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3230340036U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_8 [i_0] [i_0])))) >> (((((/* implicit */int) var_11)) - (28762)))));
                            var_25 = ((/* implicit */unsigned short) ((var_0) | (arr_14 [i_2 + 4] [i_2] [i_2 + 2] [i_2] [5U] [i_0] [i_2])));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1064627260U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)53238)))))));
                        }
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_4) : (arr_0 [i_2])))))));
                        var_28 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (var_5)))) << (((((/* implicit */int) var_11)) - (28780)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 4) /* same iter space */
    {
        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) var_19)) - (33564)))));
        arr_19 [i_5] = ((/* implicit */unsigned int) var_11);
    }
    for (unsigned short i_6 = 4; i_6 < 23; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) var_15);
            arr_25 [i_6 - 3] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (264767668U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((var_3) << (((arr_18 [i_7]) - (1949504624U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)29))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_30 [i_8] [4U] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_11))));
            var_31 ^= ((/* implicit */unsigned short) ((arr_18 [i_6 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        var_32 = ((unsigned short) var_10);
                        var_33 -= var_2;
                    }
                } 
            } 
            arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((/* implicit */int) arr_28 [i_8] [i_8] [i_6 - 1])) ^ (((/* implicit */int) arr_28 [i_6] [i_8] [i_8]))))));
        }
        arr_39 [(unsigned short)6] |= (unsigned short)48705;
    }
}
