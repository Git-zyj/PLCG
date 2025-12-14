/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33520
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551587ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))))))) - (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42610))) : (2266770500022103572ULL))))) == (arr_1 [i_2])));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_8 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3])))) ? (((((/* implicit */_Bool) 9886694697195110196ULL)) ? (432345564227567616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))))) : (((((18446744073709551614ULL) - (((/* implicit */unsigned long long int) 4294967295U)))) % (var_9)))));
                            arr_11 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */signed char) var_15);
                            arr_12 [i_1] |= ((/* implicit */unsigned char) (~(((var_2) - (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))));
                            var_18 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_1))))) ? (max((var_3), (((/* implicit */unsigned long long int) (short)32757)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) var_9)) ? (arr_1 [4ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16113)) ? (-478400385934949834LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28276)))))))));
                            arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_18 [i_5] [i_1] [14ULL] [i_1] [i_5]);
                        }
                    } 
                } 
                var_19 += ((/* implicit */signed char) ((short) (signed char)3));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_7)) ? (802311017U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) - (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-64)) >= (((/* implicit */int) (signed char)-1)))) ? (((/* implicit */int) ((var_10) != (var_7)))) : (((/* implicit */int) var_14)))))));
    var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3371)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))))));
}
