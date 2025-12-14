/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246736
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [(short)7] [(short)7] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1])) - (((/* implicit */int) arr_9 [i_1] [i_2] [i_2 + 4] [i_2] [9LL] [i_3]))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)27)))))));
                            var_22 = ((/* implicit */unsigned short) var_18);
                            arr_13 [(_Bool)1] [(_Bool)1] [(short)0] [(unsigned char)6] [11U] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (short)-10454))) & (((/* implicit */int) (signed char)65))));
                        }
                        var_23 = ((/* implicit */_Bool) var_6);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-23)) + (((/* implicit */int) (signed char)27))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) arr_0 [(_Bool)1] [(_Bool)1]);
        var_26 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) << (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) - (7958286115443871369LL)))));
        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)28)))) <= ((+(((/* implicit */int) var_15))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))) - (var_10)))))));
                        arr_20 [i_0] [i_5] [i_6] [i_5] [i_6] [i_0] = (!(((/* implicit */_Bool) (signed char)-28)));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((((unsigned int) (signed char)-28)) < (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-27)) % (((/* implicit */int) (signed char)-64)))))))));
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_30 *= ((/* implicit */_Bool) (-(((((((/* implicit */int) var_16)) >= (((/* implicit */int) var_12)))) ? (((/* implicit */int) arr_16 [i_8] [i_8] [(unsigned short)10] [i_8])) : (((((/* implicit */int) arr_18 [i_8] [i_8] [(_Bool)1] [(short)8] [i_8])) - (((/* implicit */int) var_19))))))));
        var_31 += ((/* implicit */signed char) var_4);
        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_7))), (((/* implicit */long long int) var_10)))))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_33 += ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_23 [i_9]))) - (((((/* implicit */int) var_19)) + (((/* implicit */int) arr_23 [i_9]))))));
        var_34 = arr_24 [i_9];
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((_Bool) ((unsigned int) (signed char)-27))))));
    }
}
