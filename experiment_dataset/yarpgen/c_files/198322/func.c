/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198322
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 1]))))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 - 2])) * (((/* implicit */int) arr_0 [i_1 + 2])))))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) arr_4 [2U] [i_1] [i_0])))))));
            var_19 += ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)6946)) * (((/* implicit */int) (unsigned short)6938))))));
            var_20 = ((/* implicit */unsigned short) ((((((long long int) arr_4 [i_1 + 2] [i_1] [i_1 + 1])) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (signed char)31)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_0] [i_0] [i_1] = (+(((/* implicit */int) (signed char)90)));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                arr_12 [i_3] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)86)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58589))))))))));
                var_22 = arr_4 [i_0] [i_2] [i_0];
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((arr_0 [i_0]) ? (((/* implicit */int) (unsigned short)58609)) : (arr_11 [2] [i_0] [(unsigned short)3] [2])))));
                arr_16 [i_0] [i_4] = ((/* implicit */unsigned char) var_13);
                var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_14);
            }
            var_25 *= ((/* implicit */unsigned int) ((_Bool) (signed char)-2));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6943)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned short)58592)))))))));
            var_27 *= ((/* implicit */int) ((unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_5] [i_5]))) : (var_8))));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (((((+(var_8))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_8 [i_5])))) - (94)))));
        }
        var_28 &= ((/* implicit */unsigned short) (+(194555033)));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_7 [i_0])))) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0])) || (((/* implicit */_Bool) arr_19 [i_0])))))));
        arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) <= (((/* implicit */int) ((_Bool) (unsigned short)58589)))))) * ((~((~(var_1)))))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((var_2) ? (arr_18 [i_6] [i_6]) : (((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))) : (((((/* implicit */int) (unsigned short)58591)) + (((/* implicit */int) (signed char)124))))));
        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((402653184) <= (((/* implicit */int) (unsigned short)58616)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(4106390930239691220LL))))));
    }
    var_32 += ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    var_33 -= ((/* implicit */long long int) var_6);
}
