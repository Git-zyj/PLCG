/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39318
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
    var_14 = max((((/* implicit */int) (unsigned char)187)), (-1944528648));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = min((((signed char) ((int) arr_0 [i_0]))), (((/* implicit */signed char) ((_Bool) (unsigned char)248))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1544)) ? (1550739713680137741LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))))) == ((-((-(((/* implicit */int) var_10)))))))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) 0ULL);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_2))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) ((var_6) > (var_2)))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? ((+(7907198606336991673ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)5] [(signed char)6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
        var_18 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (signed char)127)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((((/* implicit */int) arr_10 [i_1])), (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_1]))))));
                                arr_19 [i_1] [i_2] [i_3 - 1] [i_1] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)8] [(signed char)8] [(signed char)8] [i_4 - 2] [(_Bool)1])))))) <= (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_3] [i_4] [i_4] [i_4 + 3]) : (arr_16 [i_1] [i_1] [i_1] [i_4 + 3] [i_4])))));
                                arr_20 [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_11 [i_1])) ? (max((-2484783046540579849LL), (((/* implicit */long long int) (_Bool)0)))) : (((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 664352509))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [3LL] [i_1] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_2])))) - (max((16777215ULL), (((/* implicit */unsigned long long int) arr_15 [10ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) arr_18 [i_1] [6ULL] [i_1 - 1] [i_1 + 2] [6])), (arr_5 [i_3 - 1] [i_5 + 1]))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_1 + 2] [(signed char)1] [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_9 [i_1 + 2] [i_1] [i_3])), (var_8))), (((/* implicit */unsigned long long int) arr_13 [i_1] [7LL] [i_3]))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)100)), (713305764)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)22567)))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) arr_9 [i_1 + 1] [i_3] [i_3])) != (arr_13 [i_3] [i_2] [i_1]))))) : (min((((/* implicit */unsigned long long int) var_5)), (((arr_14 [i_1] [(short)5] [i_3]) & (((/* implicit */unsigned long long int) 2147483647)))))));
                    var_22 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_12 [i_3 - 1] [i_3 - 1] [i_1 + 2] [i_1 + 1]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) max((var_23), (-713305765)));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 10539545467372559942ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [(unsigned short)4] [4]))) & (arr_12 [i_6] [9] [i_6] [i_6 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_5)) : (-1))))))))));
    }
    var_25 = (signed char)92;
    var_26 = ((/* implicit */unsigned char) (!(max((var_10), ((!(((/* implicit */_Bool) var_3))))))));
}
