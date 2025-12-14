/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193373
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65513)))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 171005113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (876343466U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned short)22))))))) << (((((/* implicit */int) (unsigned char)188)) - (177)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 *= ((/* implicit */signed char) arr_1 [i_0 + 1] [i_0 + 1]);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3 + 1] [i_2] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_3 + 1] [i_1 + 1])))))));
                                arr_16 [i_0] [i_0] [i_0 - 1] [i_2] = ((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1] [i_2]);
                                arr_17 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)65514);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)65528))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_18 ^= ((/* implicit */short) (unsigned short)65514);
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_18 [(signed char)4] [i_5])) ? (140737488355327LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5])))))));
        var_19 ^= ((/* implicit */signed char) (unsigned char)12);
    }
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_24 [(signed char)0] = ((/* implicit */unsigned int) (((-2147483647 - 1)) / ((+(arr_6 [i_6] [i_6] [i_6] [i_6])))));
        arr_25 [i_6] = ((/* implicit */long long int) (unsigned short)24);
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_23 [i_6] [i_6]);
        var_20 = arr_3 [(signed char)3] [i_6];
    }
    for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
    {
        var_21 *= arr_27 [i_7 - 2];
        arr_29 [i_7] = ((/* implicit */int) arr_28 [i_7 - 1]);
    }
}
