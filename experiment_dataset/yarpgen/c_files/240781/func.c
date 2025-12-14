/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240781
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
    var_19 = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_3));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))), (-1948874848)));
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1 - 2]) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_2 [i_1 + 1])) % (((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7432001858258384616ULL)) ? ((~(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_15 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] = ((/* implicit */int) var_16);
                        var_23 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_14 [i_1] [i_3 - 1] [i_2 + 1] [i_4 - 2] [(short)22] [i_4])))) < ((~(((/* implicit */int) arr_14 [i_1] [i_3 - 1] [i_2 - 1] [i_4 + 1] [i_1] [i_4]))))));
                        var_24 &= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_11 [i_1 + 1] [i_2 - 1] [i_4 + 2])))));
                    }
                    for (signed char i_5 = 4; i_5 < 22; i_5 += 1) 
                    {
                        arr_19 [i_3] [i_2] [i_1] [(signed char)8] [i_2] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [16U] [i_5 - 4] [i_5] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 4] [i_2 + 1] [i_5 + 1] [i_5] [i_2 + 1])) : (-1658509669))))));
                        var_25 |= ((/* implicit */unsigned char) arr_8 [(short)14] [(unsigned short)14] [i_3 - 1]);
                    }
                    var_26 = arr_6 [i_1] [i_2] [i_3];
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) ((((arr_20 [(unsigned char)18]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6]))))) ^ (((/* implicit */unsigned long long int) arr_21 [i_6]))));
        var_28 *= ((/* implicit */unsigned short) (~(3319243149U)));
    }
    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        arr_27 [9ULL] = arr_10 [i_7] [i_7] [i_7] [14ULL];
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_31 [i_7] [i_7] = ((/* implicit */_Bool) -9223372036854775785LL);
            arr_32 [i_7] [i_7] [i_8] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(16649982835210405733ULL))))));
        }
        var_29 = ((/* implicit */unsigned long long int) var_0);
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_14))));
    var_31 &= ((/* implicit */unsigned char) var_6);
}
