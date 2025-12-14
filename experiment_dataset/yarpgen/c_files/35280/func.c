/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35280
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (-(-1121593642))));
        var_19 = ((/* implicit */int) (unsigned char)124);
        var_20 ^= ((/* implicit */unsigned char) min(((+((+(((/* implicit */int) (unsigned char)98)))))), (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) (short)12628)) ? (((/* implicit */int) (unsigned short)44892)) : (452746726))))), ((~(((/* implicit */int) (unsigned char)200)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned char)148))));
        arr_6 [i_1] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_1])))) && (((/* implicit */_Bool) arr_5 [i_1 - 1]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-10997)))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 - 1])) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) (short)-12954)))))));
        arr_9 [i_1] = (+(arr_4 [i_1 - 1]));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))));
        arr_12 [i_2] |= ((/* implicit */unsigned long long int) ((arr_4 [i_2 + 1]) > (arr_4 [i_2 - 1])));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [i_3] [i_3] [i_4] = arr_4 [i_4];
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (unsigned short)56533)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_26 [i_2] [i_3] [i_4] [i_5] [i_6] = (~(arr_19 [i_5] [i_6 - 1] [i_2 - 1] [i_5]));
                                var_26 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) (unsigned short)41032)))));
                                arr_27 [i_6] [i_6] [i_2] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) <= ((+(arr_4 [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
