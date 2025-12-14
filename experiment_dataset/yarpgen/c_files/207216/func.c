/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207216
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6006724694590562000LL)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (unsigned char)4)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) (short)-1));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(16777215)))) ? (((((/* implicit */_Bool) (unsigned short)1750)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_3))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-120))))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14783800909608417798ULL)))));
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_4]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) 4294967295U))))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)236)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-14421)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_5])) ? (arr_13 [i_5] [i_0] [i_0] [i_0]) : (var_0)))) : (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0]) : (15742912171490271753ULL)))))));
                        var_21 = ((/* implicit */unsigned int) arr_6 [i_1] [i_2] [i_5]);
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (~(min((((var_9) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [9ULL])) ? (154176326U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    }
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2 - 1] [i_6] = ((/* implicit */long long int) ((unsigned int) var_6));
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_15 [i_0] [i_2 + 2] [i_6 + 1] [i_6])))));
                        arr_22 [i_0] [i_2] = ((/* implicit */unsigned short) var_15);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_3))) || (((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 - 2] [i_2 + 1] [i_0]))))))));
                        arr_23 [i_0] [i_0] [i_2] [i_6 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_14);
    var_25 = ((/* implicit */unsigned short) var_10);
    var_26 = ((/* implicit */_Bool) ((long long int) var_3));
}
