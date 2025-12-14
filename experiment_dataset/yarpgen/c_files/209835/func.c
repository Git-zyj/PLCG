/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209835
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
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (-(var_1))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_2)))))));
                arr_4 [i_1] = ((/* implicit */long long int) ((max((var_10), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) var_9))));
                var_16 = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-586199901) <= (-586199910))))) == (((((/* implicit */unsigned long long int) 4294967295U)) % (var_8)))));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) ((var_10) ^ (((/* implicit */unsigned long long int) var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_19 = var_9;
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)67)) / (((/* implicit */int) (unsigned char)152))));
                                var_21 = ((/* implicit */int) var_2);
                                arr_20 [i_2] [i_5] [i_5] [i_4] [i_3] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) var_7);
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] [i_2] = ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned long long int) var_9)) & (var_10))) ^ (((/* implicit */unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_2] [i_2] = var_3;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) var_6);
                                var_23 = ((/* implicit */unsigned short) var_8);
                                arr_29 [i_2] [i_2] [i_4] [i_2] [i_8] [i_8] [i_2] = ((/* implicit */_Bool) var_2);
                                var_24 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) var_9);
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_12))))));
        var_28 = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) /* same iter space */
    {
        arr_34 [i_10] [i_10] = (+(((/* implicit */int) var_12)));
        var_29 = ((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10]);
    }
}
