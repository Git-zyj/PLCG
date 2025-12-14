/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204512
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 6134281247036603599LL)) && (((/* implicit */_Bool) (unsigned short)38216))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((max((((/* implicit */long long int) -17)), ((-9223372036854775807LL - 1LL)))) >= (((((/* implicit */_Bool) var_9)) ? (((var_1) | (((/* implicit */long long int) arr_4 [i_3])))) : (((/* implicit */long long int) 3))))));
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7814)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (arr_1 [i_0])))) ? (((/* implicit */long long int) arr_13 [(short)7] [3U] [i_0] [i_5] [3U] [i_5])) : (((long long int) 1390734875))));
            var_22 &= ((/* implicit */long long int) (~((+(((/* implicit */int) var_9))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        var_23 = (+(-19LL));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(846073867U)))) || ((!(((/* implicit */_Bool) (short)25225))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((var_6) | (((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))) : (119567611U))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) var_9);
                            var_27 &= ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)153)) + (((/* implicit */int) (short)-25590))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [2U] [i_0] [i_0] [i_0] [2]))) & (1873733787U)))) ? (arr_26 [i_8] [i_5] [i_6] [i_5] [i_5]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)43642)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_29 += ((/* implicit */long long int) 780069494U);
                            var_30 = ((/* implicit */short) ((var_5) != (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0]))));
                            arr_30 [i_0] [i_5] [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            arr_31 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_6] [i_7] [i_7] [i_9])) ? (((/* implicit */long long int) arr_10 [i_0] [i_9] [i_6] [i_7])) : (var_5)));
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_10] [i_5] [i_6] [(unsigned char)3] [i_10] = ((/* implicit */unsigned short) ((short) arr_7 [i_5] [i_7]));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_3))));
                        }
                        arr_35 [i_5] [i_5] [13ULL] = ((/* implicit */unsigned int) ((long long int) arr_21 [i_6]));
                    }
                } 
            } 
        }
    }
    var_32 = ((/* implicit */long long int) max((var_32), ((-(min((((/* implicit */long long int) (unsigned short)24)), (var_11)))))));
    var_33 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_7)))));
}
