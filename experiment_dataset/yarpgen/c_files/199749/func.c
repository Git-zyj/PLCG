/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199749
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0])))) - (9981)))));
        arr_3 [(signed char)10] = ((unsigned char) max((((/* implicit */int) ((unsigned char) var_6))), (var_13)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])));
        var_20 = ((/* implicit */int) arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) (~(((arr_5 [i_2] [i_2]) >> (((((/* implicit */int) var_18)) - (61)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)-29052), (((/* implicit */short) var_5))))) & (((/* implicit */int) ((unsigned short) var_0)))))) ? ((+(((/* implicit */int) arr_4 [i_2] [i_2])))) : (((/* implicit */int) max(((short)29051), (((/* implicit */short) (_Bool)1)))))));
        arr_11 [(unsigned char)12] = (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)24708)) : (1793798931))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)29052))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)29052)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)141)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned short) var_11))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] [(short)6] = ((/* implicit */long long int) arr_12 [(short)1] [(unsigned char)7] [i_4]);
                }
            } 
        } 
        arr_24 [i_2] [(unsigned char)4] = (+(((/* implicit */int) var_8)));
    }
    /* LoopSeq 1 */
    for (unsigned char i_7 = 4; i_7 < 20; i_7 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7 - 1]))))) - (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)60)) : (-776913)))));
        var_26 = ((/* implicit */unsigned short) arr_1 [i_7 - 3]);
    }
    var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((3406215424U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-29052))))))))));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_8)))))))) << ((((-(((/* implicit */int) var_1)))) - (10354)))));
}
