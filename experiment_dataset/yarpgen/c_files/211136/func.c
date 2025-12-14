/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211136
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
    var_11 = ((/* implicit */_Bool) ((unsigned long long int) ((short) 1181783001387974367LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((var_5) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)-104))))));
                        var_12 = ((/* implicit */unsigned long long int) ((signed char) (signed char)107));
                        var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)-3)) + (((/* implicit */int) (signed char)-104))));
                        var_14 = ((/* implicit */_Bool) (+(var_8)));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) (signed char)103);
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_4])))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_4]))));
        var_18 = ((/* implicit */unsigned int) (-(((var_10) | (var_3)))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-4725788395117471990LL) / (2814950948465607895LL)))) ? (((var_7) / (((/* implicit */int) arr_17 [i_4] [i_5 + 1])))) : ((+(((/* implicit */int) (signed char)-1))))));
                    var_20 = ((/* implicit */unsigned int) var_4);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3235222159U)))) ? (1059745126U) : (((/* implicit */unsigned int) ((/* implicit */int) ((2578506782U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 201310471U)) ? (var_0) : (((/* implicit */long long int) 1059745126U)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (3235222169U))))));
                        var_23 = ((/* implicit */unsigned long long int) -1141148794637142440LL);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        arr_26 [i_5] [i_6] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */int) (-(var_4)));
                        arr_27 [i_4] [i_5 - 1] [i_5] [i_8] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (short)28439))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (3235222155U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_32 [5LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_6))));
        var_25 = ((/* implicit */int) ((long long int) (signed char)-116));
    }
    var_26 = ((/* implicit */int) max((401198726934040185ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 0))))))))));
}
