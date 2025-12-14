/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241262
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
    var_16 |= ((/* implicit */signed char) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */signed char) var_2);
        var_18 |= ((/* implicit */unsigned short) (((-(2632857405U))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_2 [i_1] [i_1])) + (((/* implicit */int) arr_3 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (2632857405U)));
        var_19 = ((/* implicit */unsigned int) (unsigned short)52005);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_1] = (_Bool)1;
                    var_20 ^= ((/* implicit */signed char) var_7);
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_5]))))) ? ((+(1297349578U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) < (1393105580U)))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_4])))) && (var_5)))) * (((((/* implicit */_Bool) 2725974653U)) ? (((/* implicit */int) (unsigned short)32301)) : (((/* implicit */int) (unsigned short)65535))))));
                    var_23 ^= ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14298)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_0);
    }
    var_25 = ((/* implicit */signed char) var_2);
}
