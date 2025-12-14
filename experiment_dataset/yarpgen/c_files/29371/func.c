/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29371
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
    var_12 += ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))), (((int) var_11)))) >= (((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1]))));
        var_14 -= ((/* implicit */int) (unsigned short)45598);
    }
    for (short i_1 = 4; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((int) ((var_7) + (((/* implicit */int) arr_2 [i_1] [i_1 - 1])))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 3]))) : (((arr_0 [i_1 - 3] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19946)))))))) ? (((/* implicit */int) min((arr_1 [(short)4]), (((/* implicit */unsigned short) ((short) 1277786813)))))) : ((((!(((/* implicit */_Bool) (unsigned short)19934)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (var_10))) : (((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) (unsigned short)45610))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_17 = ((/* implicit */int) ((short) var_7));
            var_18 -= arr_1 [(unsigned short)2];
        }
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(var_6)))) - (2235636350U)));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2235636381U)) ? (((/* implicit */int) arr_3 [i_3 - 1])) : ((+(arr_6 [i_3 - 2])))));
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 10; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((2289646981U) / (((/* implicit */unsigned int) -655784033)))) == (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) 655784006)) : (2235636350U)))));
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((var_1) - (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (unsigned short)42373)))))));
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) 48);
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (2813869370U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_6])) + (min((((/* implicit */int) (short)-8939)), (-655784007))))))));
        var_26 = ((/* implicit */short) (unsigned short)57595);
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 48)) ? (((/* implicit */unsigned int) 655784003)) : (var_5))) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) var_3)) : (var_6)));
    var_28 -= ((/* implicit */unsigned int) var_0);
}
