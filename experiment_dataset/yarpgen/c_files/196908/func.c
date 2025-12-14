/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196908
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
    var_15 = ((/* implicit */short) max((((((((/* implicit */int) (unsigned short)62300)) << (((((/* implicit */int) (unsigned short)3242)) - (3231))))) ^ (((/* implicit */int) ((unsigned short) var_9))))), (((((/* implicit */int) (signed char)11)) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) var_1)))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4445))) / (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4446))) : (((((/* implicit */_Bool) (short)4445)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> ((((~(var_13))) - (1330105949U)))))) : (((var_0) * (var_13)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (+(((var_10) & (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_12))));
            var_19 = ((/* implicit */unsigned long long int) var_3);
        }
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_14))));
    }
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2 + 2] [(_Bool)1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1]))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
        var_21 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (short)-924)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((3866486591U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1])))))) ? (((((/* implicit */_Bool) (unsigned short)59529)) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) arr_5 [i_2] [i_2 - 1]))));
    }
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) arr_6 [i_3] [i_3]);
        var_24 -= (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 1])) < (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 2]))))));
        var_25 -= ((/* implicit */short) min((((((/* implicit */int) (unsigned short)62300)) >> (((arr_11 [8LL]) + (521313557))))), (((arr_11 [(short)22]) % (arr_11 [(_Bool)1])))));
        var_26 = ((/* implicit */signed char) ((var_10) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3])) | (((/* implicit */int) arr_9 [i_3])))))));
        arr_12 [i_3] = ((/* implicit */_Bool) var_7);
    }
    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) ((arr_14 [i_4]) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (unsigned char)91))))), (min((134217727U), (((/* implicit */unsigned int) var_1))))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(arr_14 [i_5])))), ((+(var_13))))))));
            var_28 = ((/* implicit */signed char) max(((~(((/* implicit */int) (_Bool)1)))), ((+(arr_11 [i_5])))));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((/* implicit */int) ((arr_17 [i_5] [i_5] [i_5]) && (arr_17 [i_4 + 2] [i_5] [i_5])))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 23; i_7 += 2) 
            {
                {
                    arr_28 [i_4] |= ((/* implicit */_Bool) (+(max((max((arr_11 [i_7]), (((/* implicit */int) arr_15 [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))))))));
                    arr_29 [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4 + 2])) ? (arr_18 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (min((((/* implicit */unsigned int) arr_10 [i_7])), (arr_18 [i_4 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4 - 1] [i_4 + 1] [i_7 + 2])))));
                    var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_9 [i_7])) - (80)))))), (428480726U)));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_17 [i_7 - 2] [i_7 + 2] [i_4 + 2]) ? (428480708U) : (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7]))) : (var_0))))))))));
                }
            } 
        } 
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 2])) ? (((/* implicit */int) arr_20 [i_4 + 2])) : (((/* implicit */int) arr_20 [i_4 + 2]))))) ? (max((((/* implicit */unsigned long long int) arr_20 [i_4 + 2])), (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_20 [i_4 + 2])))));
    }
    var_33 = ((/* implicit */_Bool) var_9);
}
