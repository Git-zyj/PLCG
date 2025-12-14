/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50524
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
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 -= ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 1072664626U)))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((~(var_4)))))) : (var_2)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [14U])) : (((/* implicit */int) var_3))))) : (arr_2 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                                arr_13 [(unsigned char)2] [6] [4] [i_2] [6] [i_0] &= ((/* implicit */unsigned char) ((_Bool) 8176));
                                arr_14 [i_0] [i_1] [19U] [i_0] [i_4] = ((/* implicit */unsigned int) arr_2 [i_1]);
                                var_16 += 15907440711506041644ULL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (unsigned short)31069)))) + (2147483647))) >> (((/* implicit */int) ((14319331978454298684ULL) != (16383ULL))))));
                                var_18 = ((/* implicit */int) 15907440711506041644ULL);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) (~(arr_5 [i_2 + 1])));
                    arr_20 [i_0] = ((/* implicit */short) ((signed char) var_9));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109)))))));
                }
            } 
        } 
    }
    for (int i_7 = 3; i_7 < 21; i_7 += 1) 
    {
        arr_23 [i_7] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8150)) ? (16407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))) && (((/* implicit */_Bool) (signed char)114)))), (min((var_1), ((!(((/* implicit */_Bool) 2147450880U)))))));
        var_21 = ((/* implicit */unsigned char) arr_21 [i_7] [i_7]);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_27 [i_8]))));
        var_22 = ((/* implicit */unsigned int) ((2082876063U) != (((/* implicit */unsigned int) 8178))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)6))))) ? (var_2) : (-8179)));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) var_6)))));
        var_25 += ((/* implicit */short) (unsigned short)21826);
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_26 ^= ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (~(8180)))), (max((131071U), (((/* implicit */unsigned int) (unsigned short)43709))))))));
        arr_31 [i_9] = ((/* implicit */int) ((short) ((arr_26 [(short)6]) >> (((((/* implicit */int) (short)-20366)) + (20389))))));
        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1LL)), (arr_7 [i_9] [i_9] [i_9] [i_9])))))))));
    }
    var_28 = ((/* implicit */short) 4294836238U);
}
