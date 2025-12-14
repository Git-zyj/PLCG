/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213151
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
    var_17 &= ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_7)))) & (((/* implicit */int) var_16))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((var_9) + (9223372036854775807LL))) << (((((var_9) + (7330791986110620658LL))) - (52LL))))))));
            var_20 ^= ((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (13630)))))));
            arr_7 [i_1 - 1] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9));
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_21 = var_16;
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) > ((+(((/* implicit */int) var_12)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!((((-(var_10))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))))))))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            arr_23 [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1904182862)) ? (((/* implicit */int) (unsigned short)64645)) : (((/* implicit */int) (unsigned short)54866)))), ((~(((/* implicit */int) var_12))))));
                            arr_24 [i_0] [i_2] [(signed char)1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_16)))) >> ((((+(((/* implicit */int) (unsigned short)54866)))) - (54862)))));
                            var_25 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) var_5)), (var_8)))));
                            var_26 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)54866)) ^ (((/* implicit */int) (unsigned short)64645))));
                        }
                        for (long long int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_10) / (var_10)))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)891))) : (6125695174199635356LL)));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) > ((+(((/* implicit */int) var_12)))))))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)12023))))))) ? (min((((/* implicit */long long int) (_Bool)0)), (6125695174199635356LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                        }
                        var_32 = (((-(((/* implicit */int) var_13)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                        arr_27 [(unsigned short)8] [(unsigned short)6] [i_3] &= ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
        arr_28 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)891))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
        var_34 &= ((/* implicit */_Bool) var_11);
        var_35 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)-1)) + (20)))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        var_36 ^= ((/* implicit */signed char) ((((/* implicit */int) var_4)) < ((~(((/* implicit */int) var_4))))));
        var_37 = ((((/* implicit */int) var_4)) == ((-(((/* implicit */int) var_4)))));
    }
}
