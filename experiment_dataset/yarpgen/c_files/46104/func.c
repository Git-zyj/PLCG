/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46104
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((short)0), ((short)0)))) ? (var_2) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_20 ^= ((/* implicit */unsigned int) min(((+(min((22ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), ((+((~(18446744073709551597ULL)))))));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
            arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 19ULL)) ? (-7465084114699642771LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((+(18446744073709551615ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((+(-1077147534)))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) var_3)), (var_17)))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
                        arr_11 [i_2] [i_2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_11);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned char) (+(8734604645655981967LL)));
                            arr_16 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) (-(2251798739943424ULL)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_1] [(_Bool)1] [i_3] [i_5] &= ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+((+(max((((/* implicit */int) var_6)), (var_15))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_23 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_18)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) : ((~(var_7))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)24495)))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_12))))))))))));
                            var_25 -= ((/* implicit */unsigned int) min(((+((+(18ULL))))), (((/* implicit */unsigned long long int) (-(min((10), (((/* implicit */int) (unsigned char)0)))))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_8 = 4; i_8 < 12; i_8 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_10)) ? (var_17) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1125899906842496LL)))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                arr_30 [i_9] [i_9] [i_7] [i_0] = ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (short)15)))) : ((~(((/* implicit */int) var_14)))));
                arr_31 [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_10))))));
            }
            arr_32 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(1552511235)))) ? (((/* implicit */long long int) (((_Bool)1) ? (3140200614U) : (((/* implicit */unsigned int) 14))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_17))));
            var_28 &= ((/* implicit */short) var_2);
        }
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            arr_37 [i_10] [i_10] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
            var_29 *= ((/* implicit */signed char) max((3029560097479717819LL), (((/* implicit */long long int) (short)(-32767 - 1)))));
        }
    }
    var_30 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_1))))))));
}
