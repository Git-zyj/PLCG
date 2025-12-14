/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3232
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
    var_13 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_7))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned int) 0ULL)))));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775799LL))));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) < (((((/* implicit */_Bool) var_5)) ? (min((580913055U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) min((1975258582772881572ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1975258582772881572ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_3 - 1]))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_2])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (16471485490936670032ULL)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */short) var_2);
                            arr_18 [i_3] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)42171), (var_5)))), (var_10)))) ? (((((/* implicit */_Bool) ((short) (signed char)-87))) ? (((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_1] [i_3 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (-7127005491989572476LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)14339)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))))))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1225834235)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_10)) : (1975258582772881584ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)109)) - (((/* implicit */int) (signed char)-26))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        }
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            var_19 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) var_7)), (-1373005550222333651LL)))))) : (((((/* implicit */_Bool) min((1975258582772881596ULL), (((/* implicit */unsigned long long int) var_9))))) ? (max((((/* implicit */unsigned long long int) var_7)), (16471485490936670038ULL))) : (max((16471485490936670038ULL), (((/* implicit */unsigned long long int) var_6)))))));
                            var_20 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (10137776551926447813ULL))))))));
                        }
                        arr_23 [i_3] [i_3 - 1] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (((unsigned int) arr_19 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) < (var_6)));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_7] [i_8 - 1])) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [0U] [0U] [i_0])) : (((/* implicit */int) var_3))))));
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)26)) < (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (16471485490936670045ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_2] [i_8 + 2] [i_2] [i_8]);
                            var_23 = ((/* implicit */unsigned char) (+(1975258582772881578ULL)));
                        }
                    }
                }
            } 
        } 
    } 
}
