/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228778
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_17 = ((/* implicit */signed char) var_4);
                    arr_6 [i_2] [i_0] [i_0] = (unsigned short)46594;
                    arr_7 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)44703)) >> (((1261960398944408694ULL) - (1261960398944408680ULL)))));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) (~(var_13)));
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) var_7);
                    arr_11 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */int) ((-493470246331851240LL) + (((/* implicit */long long int) var_15))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) ^ ((-2147483647 - 1))));
                    arr_12 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) 2147483647));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    arr_16 [i_0] = ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) -2147483647)) : (493470246331851257LL));
                    var_21 = var_13;
                    arr_17 [i_0] [i_1 - 1] [i_4] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_6)))));
                    var_22 = ((/* implicit */unsigned char) ((unsigned int) 67108863U));
                }
                /* vectorizable */
                for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_0))));
                    var_24 = ((/* implicit */unsigned long long int) 2556678333669618258LL);
                    arr_22 [i_5] [i_5] = ((unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_25 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)95))));
                    arr_26 [i_6] = ((/* implicit */long long int) ((arr_2 [i_1 + 2] [i_1 + 2]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) var_10)))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    arr_31 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) 8550937297378754894ULL)))));
                    arr_32 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)115))));
                    arr_33 [i_0] [i_1 - 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31943))) % ((+(arr_0 [i_7 + 3] [i_1])))));
                }
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 9895806776330796721ULL))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16))) : (var_3))) : (min((min((var_16), (var_7))), (((/* implicit */unsigned int) ((unsigned short) arr_20 [i_0] [9] [i_1]))))))))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_28 [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)46117)))) != (((/* implicit */int) (signed char)108)))) ? (((((/* implicit */_Bool) (signed char)7)) ? (arr_24 [i_1] [i_1 + 3] [i_1]) : (arr_24 [i_1 - 1] [i_1 + 3] [i_1]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */unsigned int) -149794090)) - (2333852375U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (4034823954U))))))));
    var_28 = ((/* implicit */short) 2147483637);
    var_29 ^= ((/* implicit */int) min((var_7), (var_15)));
    var_30 = ((/* implicit */int) 2047U);
}
