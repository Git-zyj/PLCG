/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49171
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(var_18))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)107)) : (834241231)));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (var_12)))) : (var_4))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) var_17))))) ? (max((min((var_4), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((var_18), (var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (short)22715))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (((((/* implicit */_Bool) 15942043941613942217ULL)) ? (2622498219U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (-3317771198627574640LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) var_13)) : (var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_1] [i_1])))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42641)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)30432))))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)22)))))))) : (((unsigned long long int) arr_10 [i_2]))));
            arr_12 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)158))))) ? (arr_11 [13] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2]))));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) 5037846639195179598ULL);
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_5 + 2] [i_5] [i_5 + 2] [3LL])) : (((/* implicit */int) arr_26 [i_3] [i_4] [i_4] [i_5 - 1] [i_7] [i_7]))));
                                arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7]))) : (0LL)))) ? (arr_16 [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_5 + 2])) : (((/* implicit */int) arr_14 [i_5] [i_6])))))));
                            }
                        } 
                    } 
                    arr_28 [i_5] [i_3] = ((/* implicit */unsigned short) ((int) arr_25 [i_5 + 1] [i_4] [i_3] [i_3]));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [(_Bool)1] [i_3] [(short)9]);
    }
    var_27 = ((/* implicit */_Bool) (+(min((2916176291U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (_Bool)1)))))))));
}
