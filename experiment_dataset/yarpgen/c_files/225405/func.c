/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225405
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
    var_14 = ((/* implicit */short) var_8);
    var_15 += ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-27138))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) ^ (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_13)))))))));
        var_17 ^= ((/* implicit */unsigned char) ((short) ((unsigned short) ((arr_1 [(_Bool)1]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) / (((/* implicit */int) arr_6 [18] [18])))) / (((((((/* implicit */int) arr_5 [(_Bool)1])) * (((/* implicit */int) arr_6 [(_Bool)0] [i_1])))) * (((/* implicit */int) arr_5 [16U])))))))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_19 &= ((/* implicit */short) arr_4 [i_2 - 2]);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_3])))))))));
                    arr_12 [i_1] [i_1] [(signed char)10] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_1]))))) ? (arr_8 [i_1] [i_2 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))))))))));
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (((((~(((((/* implicit */int) var_9)) & (((/* implicit */int) var_13)))))) + (2147483647))) << (((((((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-32662)))))) + (138))) - (31)))));
                    var_21 = ((/* implicit */short) (-(arr_8 [i_1] [i_2] [(signed char)19])));
                }
            } 
        } 
        arr_14 [i_1] [(short)0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) > (arr_8 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((((unsigned long long int) arr_7 [i_1])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1]))))))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (+((-(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
