/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45554
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
    var_10 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 3592109984U)) * (((var_2) - (var_2))))) / (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (signed char)-91))));
        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-14077)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-1664033907)))) ? (17054113353306110909ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))))))));
        arr_3 [(unsigned short)0] = ((/* implicit */unsigned short) var_2);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [4U] [4U] &= ((/* implicit */unsigned int) ((-770260444) > (((/* implicit */int) (unsigned char)255))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) ((var_3) <= (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29306))))));
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 14; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) / (var_2)));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)));
                        }
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) (short)-23);
                            var_17 = ((/* implicit */int) var_4);
                            arr_21 [i_1] = ((/* implicit */unsigned char) ((-4060318012959433483LL) + (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        arr_22 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned short)22934))));
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned char) var_6);
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)26086)) <= (var_3)));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2636672999U)) ? (((/* implicit */unsigned long long int) var_3)) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_4))) : (((((/* implicit */_Bool) (signed char)-63)) ? (2020572379U) : (((/* implicit */unsigned int) var_3)))))))));
        var_21 = ((/* implicit */int) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 2; i_8 < 19; i_8 += 1) 
        {
            arr_28 [i_8] = ((/* implicit */unsigned long long int) var_0);
            var_22 = var_0;
        }
        arr_29 [i_7] [(unsigned short)19] = ((/* implicit */_Bool) var_8);
        arr_30 [0] [13LL] = ((/* implicit */unsigned short) 4145048270U);
    }
}
