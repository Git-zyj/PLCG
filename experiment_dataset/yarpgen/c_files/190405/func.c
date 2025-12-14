/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190405
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_6 [(short)0] [(short)0] [i_0] = arr_2 [i_0];
            arr_7 [i_0] [i_0] = (+(((/* implicit */int) var_4)));
            arr_8 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_8))))));
            var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) max((((/* implicit */int) (((+(var_2))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), ((-((+(((/* implicit */int) var_0)))))))))));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned int) var_1);
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [20U] [i_5] = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_6))))))));
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42443))))))))));
                                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3])) * ((((~(((/* implicit */int) var_0)))) << (((((/* implicit */int) min((arr_0 [i_2 - 1]), (arr_0 [i_5])))) - (143)))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) var_8)) < (arr_3 [i_2]))))));
                    arr_21 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                    var_13 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23092)))))))));
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1)))))));
    }
    var_15 |= var_1;
    /* LoopNest 2 */
    for (long long int i_6 = 4; i_6 < 23; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            {
                arr_28 [i_6 + 2] [i_6 + 2] = ((/* implicit */long long int) var_0);
                var_16 -= ((/* implicit */unsigned int) min((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_7])))))));
                arr_29 [i_6] = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_35 [i_6] [i_6] [i_8] [i_6 - 4] [i_6] [i_6] = ((/* implicit */unsigned char) (+(arr_30 [i_6 + 1])));
                            arr_36 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)-27568))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned long long int) min(((~(var_8))), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_7)), (var_2))))))));
}
