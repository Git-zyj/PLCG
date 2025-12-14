/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221419
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
    var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) var_5)))) | ((~((~(((/* implicit */int) (unsigned char)116))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))) : ((-(((/* implicit */int) var_5))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((((/* implicit */int) var_3)) > (((/* implicit */int) var_16))))))), (((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_12)) : (var_6))))));
    }
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551599ULL), (((/* implicit */unsigned long long int) (unsigned char)254))))) ? ((~(((/* implicit */int) var_1)))) : ((~((~(((/* implicit */int) var_13))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (146))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                            arr_21 [9LL] [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_18) >= (((/* implicit */int) var_3)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_0)))));
                            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))));
                            var_24 = ((/* implicit */long long int) (~(var_11)));
                            arr_24 [i_2 + 1] [i_3 - 1] [i_4] [i_7] [i_7] |= ((unsigned long long int) var_10);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (var_14)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                            arr_28 [i_2] [i_4] [i_4 - 1] [i_5] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))))));
                        }
                        arr_29 [i_4] [i_3] [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4503599627370495ULL)))) : (var_6))));
                    }
                } 
            } 
        } 
        var_26 ^= ((/* implicit */long long int) (+((+(-1)))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))) : ((((-(((/* implicit */int) var_7)))) >> (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) - (222)))))));
    }
    for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_12))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(var_17))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))));
        var_30 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)25839)) : (((/* implicit */int) (signed char)57))))));
        arr_32 [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)56)), (12782016453243791930ULL)));
    }
    var_31 = ((/* implicit */unsigned char) (~((-(var_6)))));
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((var_14) + (((/* implicit */int) var_16)))))));
}
