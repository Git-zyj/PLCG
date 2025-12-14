/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200836
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_6);
        var_20 ^= ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_9)))) != (((/* implicit */int) ((signed char) 14853003048004572955ULL))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_21 = -2013540306;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                for (signed char i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */int) ((unsigned short) arr_6 [i_2]));
                        var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-8))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            arr_16 [i_5] [i_4 + 2] [i_4 - 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)166))))) ? (((((/* implicit */int) arr_3 [i_5])) & (-1258628061))) : (((/* implicit */int) arr_8 [i_1] [i_4 - 3] [i_5 + 1] [i_5 + 1]))));
                            arr_17 [i_1] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_5 + 1] [i_4 - 1] [i_1 + 1])) ? (arr_1 [i_3 + 1] [i_4 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))));
                            arr_18 [i_5] [i_5] [i_1 - 1] [i_1 - 1] [i_2] [i_5] = ((/* implicit */short) ((arr_9 [i_1 + 1] [i_3 + 1] [i_4]) >> (((3593741025704978660ULL) - (3593741025704978656ULL)))));
                            arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 2] [(short)11] [i_1 - 2] [i_4]))) > (var_6))))))));
                            var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)5)) ? (-2013540306) : (-1609993573)));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (arr_2 [i_3 + 1]) : (arr_2 [i_3 - 2])));
                        }
                        for (signed char i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            var_27 *= ((/* implicit */int) ((arr_14 [i_1 + 1] [i_7] [i_4 - 3] [i_3 + 1] [11U] [i_1 + 1]) > (arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3] [i_1 + 1])));
                            var_28 = ((/* implicit */unsigned int) var_1);
                            var_29 = ((/* implicit */int) var_6);
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (~(arr_22 [i_7] [i_4 - 2] [i_3 + 1] [i_3] [i_1 + 1]))))));
                            var_31 = ((/* implicit */int) var_5);
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_9);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)211)) ? (var_2) : (((/* implicit */long long int) arr_2 [i_1 - 1]))));
                            arr_28 [i_1] [i_1] [i_1] [i_4] [i_1] = (~(((/* implicit */int) arr_3 [i_4 - 1])));
                        }
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned char) var_9);
        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 + 1]))));
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)6))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            {
                var_37 = ((/* implicit */unsigned long long int) var_8);
                arr_35 [i_10] &= ((/* implicit */signed char) ((unsigned int) ((unsigned short) (~(var_12)))));
            }
        } 
    } 
    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((signed char) ((var_0) == (min((var_0), (((/* implicit */unsigned int) (short)8191))))))))));
}
