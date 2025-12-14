/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23744
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 88338558)) ? (((/* implicit */int) (unsigned short)45482)) : (518124997))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((int) var_13)))) : (((/* implicit */int) ((short) (-(var_5))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                                var_22 ^= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_15)) : (var_4)))) ? (((((/* implicit */_Bool) var_15)) ? (var_16) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0)))))));
                                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6)))) ? (((int) ((unsigned long long int) var_1))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                                var_24 -= ((/* implicit */unsigned char) ((unsigned int) var_4));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 7; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_16 [i_0] &= ((/* implicit */signed char) var_18);
                                var_25 ^= ((/* implicit */unsigned long long int) (((!(var_18))) ? (((unsigned int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 12435105576100680990ULL)) ? (2147483633) : (((/* implicit */int) (short)-31450))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */long long int) var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (var_15))) : (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((short) var_8))))))));
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_15) : (var_5)))))))))));
    var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) (~(518124997))))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_16) : (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (short)4494)) ? (15508456407894031015ULL) : (((/* implicit */unsigned long long int) 2293746537U))))))));
}
