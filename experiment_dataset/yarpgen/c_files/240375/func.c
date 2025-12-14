/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240375
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) var_11);
                                var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_3))))) : (max((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_2) : (var_4))), (((/* implicit */unsigned int) ((4217454914U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)2] [i_4]))))))))));
                                var_15 -= ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) (unsigned short)21)))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_7)) - (36961)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1] [i_3]))) : (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 2]))) : (((arr_3 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) var_3))))));
                                var_18 = ((/* implicit */unsigned short) var_10);
                                var_19 = ((/* implicit */_Bool) (unsigned short)26153);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] |= (~(max((min((77512361U), (16U))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_10) : (4294967273U))))));
                    arr_20 [i_0] = ((/* implicit */unsigned int) (unsigned short)47579);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_29 [i_7] &= max((arr_23 [i_7] [(unsigned short)9] [i_7]), (arr_23 [i_7] [i_7] [i_7]));
                    var_20 ^= var_10;
                    var_21 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)36439))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (((var_12) * (var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 24; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_28 [i_7])) : (((/* implicit */int) arr_33 [i_7] [i_7] [i_8] [(unsigned short)0] [i_10] [i_8])))))))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_35 [i_7] [i_7] &= ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_30 [(_Bool)1] [i_7] [i_7] [i_7]), (arr_30 [7U] [i_7] [i_7] [i_7]))))));
        var_24 = max(((unsigned short)512), (max((((/* implicit */unsigned short) arr_30 [i_7] [i_7] [i_7] [i_7])), ((unsigned short)526))));
    }
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)60582)))))), ((+(var_0))))))));
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12] [i_12] [i_12]))));
    }
}
