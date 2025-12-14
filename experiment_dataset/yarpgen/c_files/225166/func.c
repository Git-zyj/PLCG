/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225166
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(var_8))))));
    var_17 = max((((/* implicit */long long int) var_14)), (var_15));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 6; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_18 = (short)-21293;
                arr_4 [i_0 + 1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 - 3]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_10 [i_1] = ((/* implicit */short) min((((((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_0 - 3] [i_3])) << (((((/* implicit */int) var_9)) - (54515))))), (((((/* implicit */_Bool) arr_7 [(signed char)7] [i_1 + 3] [i_0 - 2] [i_3])) ? (((/* implicit */int) arr_7 [8U] [i_1 + 1] [i_0 + 3] [i_3])) : (var_8)))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(min((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_12)))))))))));
                        arr_11 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */unsigned char) min((max((min((var_8), (((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_0 [(unsigned char)7]))))) && (((/* implicit */_Bool) ((int) (short)-21293))))))));
                        arr_12 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_2 [i_1])))))) >= (var_6)));
                        arr_15 [i_1] [9U] [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_4 - 1]))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1 - 1] [i_1] [i_5] [i_5 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_13))))));
                        arr_19 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((var_5) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-21283)), (2743839844U)))))));
                    }
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])))))) < (((/* implicit */int) ((short) arr_16 [(signed char)2] [i_1 - 1] [i_2] [i_0 - 1]))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (signed char)-52))));
                    var_23 *= ((/* implicit */signed char) var_5);
                    arr_20 [i_0] [i_0] [(unsigned short)4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_1 - 2] [i_1 + 2])) ? (var_8) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_11)))) : (((/* implicit */int) ((unsigned char) 1551127452U)))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((signed char) var_8)), (((/* implicit */signed char) ((var_1) < (var_6)))))))));
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
                for (unsigned char i_7 = 4; i_7 < 8; i_7 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_2)) > ((+(((/* implicit */int) var_12)))))))));
                    var_26 = ((/* implicit */signed char) (+(-80161574)));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0 + 1] [i_0] [i_0 - 2])) && (((/* implicit */_Bool) 1551127451U)))))) + (max((2743839865U), (min((1551127443U), (((/* implicit */unsigned int) (signed char)-67))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_0 - 1] [i_0] [(signed char)9] [i_1] [i_0] = ((/* implicit */signed char) arr_21 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0]);
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
