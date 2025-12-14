/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212143
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
    var_17 = ((/* implicit */_Bool) ((int) ((int) 13577084189237369530ULL)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 13577084189237369530ULL))));
                        var_19 = ((/* implicit */unsigned short) ((arr_6 [i_3] [i_2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_7 [i_0] [i_1 - 2])))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))) : (((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 2] [(signed char)6] [i_1 - 2]);
                    }
                    for (int i_4 = 4; i_4 < 11; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [2] [i_1] [2] [i_0 - 1] [i_4])) ? (max((((/* implicit */unsigned long long int) (unsigned short)42590)), (1196442943938406715ULL))) : (((4869659884472182072ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))))))));
                        var_22 += ((/* implicit */short) (~(arr_11 [i_4 + 2] [i_1] [i_1] [i_1] [i_0 - 1])));
                    }
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [9] [i_2] [i_2]);
                        var_24 |= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 4869659884472182088ULL)) || (((/* implicit */_Bool) 10079668174751858338ULL))))));
                        arr_18 [i_0 - 1] [i_0] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) 425166085);
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_25 = (((+((+(((/* implicit */int) (_Bool)0)))))) + ((-(arr_12 [2] [i_1 - 1]))));
                        var_26 -= ((/* implicit */short) (signed char)49);
                        var_27 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (596218060)));
                    }
                    arr_22 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0 + 2]);
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -814160979)))))));
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((var_15), (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_29 &= var_12;
}
