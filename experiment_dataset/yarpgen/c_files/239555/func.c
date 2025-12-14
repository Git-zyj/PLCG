/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239555
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
    var_16 |= ((/* implicit */short) var_7);
    var_17 = ((/* implicit */unsigned int) ((short) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) 18222376650878257526ULL))))));
    var_18 += ((/* implicit */int) ((4288861525U) * (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_8))))))));
    var_19 = ((/* implicit */unsigned long long int) (~(var_0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) min((arr_4 [i_3] [i_3] [i_3]), (var_2)))))))));
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) var_11)) - (110)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((var_6), (((/* implicit */unsigned long long int) var_0)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            arr_11 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_3 - 1] [i_2 + 1]);
                            arr_12 [i_2] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]);
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned char) var_13);
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((short) 224367422831294097ULL)))));
                                arr_15 [i_2] [i_1] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) (short)-1166)) + (1189)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))) : ((~(16805522759905754489ULL))))), (1641221313803797127ULL)));
                                arr_16 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_2 + 1] [i_2 + 1])) && (((/* implicit */_Bool) min((arr_4 [i_3 - 3] [i_2 - 1] [i_2 - 1]), (arr_4 [i_3 + 3] [i_2 - 2] [i_2 - 2]))))));
                            }
                            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) ((long long int) var_3));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) 16805522759905754481ULL))));
                                arr_19 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_7 [i_3]);
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) (+(((unsigned long long int) arr_2 [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) var_4);
                    var_26 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 224367422831294085ULL))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    arr_28 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-14)) - (((/* implicit */int) arr_0 [i_7] [i_1]))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 3; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) (~(((unsigned long long int) (short)-3163))));
                                arr_33 [i_0] [i_0] [i_7] [i_0] [i_9] = ((((/* implicit */int) (short)(-32767 - 1))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) (short)-32766)))))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 3696328514U);
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((((int) arr_8 [i_0] [i_0] [i_0] [i_7])), (((/* implicit */int) ((signed char) (unsigned char)156)))))));
                    var_28 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_18 [i_7 + 1] [i_1] [i_7 + 1] [i_1] [i_7 + 1])))) - ((~(((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (short)-29057)) + (29081)))))))));
                }
                var_29 ^= ((/* implicit */short) (((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) - ((+(((/* implicit */int) var_9))))));
            }
        } 
    } 
}
