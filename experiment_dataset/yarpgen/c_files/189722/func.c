/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189722
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-369140993) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_11))))) : (2147483626))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0 + 3] [i_0 + 2]));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_16 &= ((/* implicit */signed char) arr_1 [i_0 + 2]);
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_8))));
                        var_19 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
                        var_20 = ((/* implicit */unsigned char) var_0);
                        arr_14 [4] [4] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)1945)) == (((/* implicit */int) ((short) arr_13 [i_2])))));
                        arr_15 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((int) var_4))))));
                    }
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_10))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_22 ^= ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1] [i_1]);
                        arr_18 [(unsigned char)5] [i_2] = ((/* implicit */signed char) ((arr_3 [i_3 - 1] [i_3 - 1]) * (((/* implicit */int) arr_17 [i_5] [i_3 - 1] [(_Bool)0] [i_1]))));
                        var_23 = ((/* implicit */short) ((unsigned short) var_11));
                        var_24 -= ((/* implicit */short) arr_6 [i_1]);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((+(arr_8 [i_6] [i_2] [(short)9])))));
                        arr_21 [i_1] [i_1] [i_1] [i_6] &= ((/* implicit */signed char) 2147483626);
                    }
                    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        var_26 *= ((/* implicit */_Bool) ((unsigned char) arr_11 [i_1]));
                        arr_24 [i_3 - 1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (signed char)83)))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)54))))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) arr_22 [i_7 + 2] [i_3 - 1] [i_2] [i_2])))))));
                        var_28 = ((/* implicit */unsigned short) -2147483614);
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (unsigned short)60942))));
                    }
                    var_30 *= ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    var_31 += ((/* implicit */signed char) var_11);
    var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)0)), (var_10)));
}
