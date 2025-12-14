/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47540
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
    var_16 = ((/* implicit */int) var_2);
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [(unsigned char)14] = ((/* implicit */short) var_4);
                    arr_8 [(_Bool)1] [16LL] [(_Bool)1] = (!(((/* implicit */_Bool) (+(min((0U), (((/* implicit */unsigned int) var_11))))))));
                }
                for (short i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    var_18 = (unsigned short)10396;
                    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) || (var_14))), ((!(((/* implicit */_Bool) (unsigned char)131))))));
                    arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((long long int) arr_9 [i_3 + 1] [3LL] [i_3 + 1]))));
                    arr_12 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-3)), (arr_3 [i_0] [i_1] [i_3 + 1]))) * (((/* implicit */unsigned long long int) (+(var_3))))));
                }
                var_20 = ((/* implicit */unsigned int) ((_Bool) (~(arr_2 [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        {
                            arr_20 [(unsigned char)19] [(unsigned char)19] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) max((arr_14 [(_Bool)1] [i_4] [(_Bool)1] [i_0]), (((/* implicit */unsigned int) (signed char)35))))) : (min((((/* implicit */unsigned long long int) (signed char)-78)), (var_10))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_10)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_5])), (arr_0 [i_0])))) : (min((var_4), (((/* implicit */unsigned long long int) var_0))))))));
                            arr_21 [i_5] = ((/* implicit */signed char) var_12);
                            var_21 = ((/* implicit */short) var_9);
                            arr_22 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */short) ((signed char) (signed char)-78))), ((short)-9554)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_22 += ((/* implicit */short) ((unsigned long long int) ((arr_16 [i_0] [i_0] [i_0] [i_6]) ? (var_12) : (((/* implicit */int) arr_16 [i_6] [i_1] [i_1] [i_0])))));
                    arr_26 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) max(((~(((unsigned int) var_4)))), (((/* implicit */unsigned int) (signed char)85))));
                    var_23 = ((/* implicit */long long int) ((int) ((var_7) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)78)) - (((/* implicit */int) (unsigned char)88))))))));
                }
                for (unsigned char i_7 = 3; i_7 < 24; i_7 += 2) 
                {
                    var_24 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 32767U)) : (arr_3 [i_0] [i_0] [i_0]))), (var_10))), (((/* implicit */unsigned long long int) min((((unsigned int) (unsigned short)58173)), (var_8))))));
                    arr_31 [i_0] [i_0] [i_7] = ((unsigned int) min(((~(arr_2 [i_7] [i_0] [i_0]))), (((/* implicit */long long int) (_Bool)1))));
                    arr_32 [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) 3311439507U);
                }
                for (unsigned short i_8 = 3; i_8 < 24; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 24; i_9 += 1) 
                    {
                        for (long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_41 [13U] &= max((((/* implicit */int) (signed char)13)), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((var_12) / (var_12))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_9))));
                            }
                        } 
                    } 
                    arr_42 [i_1] [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (signed char)114)) : (-1959159087)))))) ? ((~(((unsigned int) arr_15 [12ULL] [i_0] [i_0] [i_0])))) : (((((((/* implicit */_Bool) 1056535912)) ? (3311439507U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58173))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-2698)))))));
                    arr_43 [i_0] [i_0] [i_8 - 3] = ((/* implicit */_Bool) var_12);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((((/* implicit */long long int) var_13)), (var_1)));
}
