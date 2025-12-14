/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24789
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((var_0) || (var_0)));
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
        var_13 = ((/* implicit */short) var_2);
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_15 = ((/* implicit */unsigned char) ((short) ((unsigned long long int) 6175577396271694132LL)));
                    }
                } 
            } 
        } 
        arr_13 [8U] |= ((/* implicit */unsigned char) 4294967295U);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [12LL] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1655306326)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
            arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) == ((~(8882651120958161290ULL)))));
            var_16 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
            var_17 = ((/* implicit */signed char) ((long long int) 14577340783760509974ULL));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) var_9);
            arr_25 [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) (+(var_9)));
            arr_26 [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 4294967295U)))));
            arr_27 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_11)))));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) > (9223372036854775807LL))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14939))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_4)))))));
            }
            arr_33 [i_8] [i_8] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 4736224379848862638ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6)));
        }
        arr_34 [i_5] |= ((/* implicit */unsigned char) ((long long int) 943908398U));
    }
    var_23 |= ((/* implicit */long long int) var_6);
    var_24 |= ((/* implicit */unsigned char) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49014))))), ((~(((/* implicit */int) var_1))))))));
    var_25 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) (unsigned char)101)) - (101))))) : (((/* implicit */int) var_0))))));
}
