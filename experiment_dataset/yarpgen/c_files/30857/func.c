/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30857
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
    var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) / (var_0)))) / (var_8))) + (((unsigned long long int) var_5))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_7)), (var_4)));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((((/* implicit */signed char) var_2)), (var_9))))) || (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_5))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) > (arr_1 [i_0] [i_0]))))))), (((((/* implicit */_Bool) 348084529)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) : (65532U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned char) arr_1 [i_0] [i_0])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3]))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_12) : (max((arr_1 [i_0] [i_0 + 2]), (((/* implicit */unsigned long long int) var_3)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_24 |= ((/* implicit */signed char) ((arr_4 [i_1 + 2]) << (((arr_4 [i_1 - 2]) - (3981440484787241416ULL)))));
                                arr_16 [i_1] [i_1] = ((/* implicit */int) (+(var_3)));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33)))));
                                var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)7))));
                            }
                        } 
                    } 
                    var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) * (31LL));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) var_18)))))));
                    var_29 = ((/* implicit */_Bool) arr_12 [i_1]);
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [2ULL])) ? (arr_9 [(short)16]) : (((/* implicit */long long int) var_16)))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    arr_27 [(short)4] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_19)))) != (((arr_23 [i_6] [i_7] [i_6]) | (((/* implicit */int) var_1))))));
                    var_31 = var_8;
                }
            } 
        } 
        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_18)) : (var_17)));
    }
    var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) var_3)))))));
}
