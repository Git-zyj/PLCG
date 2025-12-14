/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200989
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (short)3028))))) - (var_10))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (short)3028))));
        arr_2 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-14400)) ? (((/* implicit */int) arr_1 [i_0 - 2] [(unsigned char)10])) : (((/* implicit */int) arr_1 [(unsigned short)24] [i_0 + 2])))) ^ (((/* implicit */int) (short)-3026))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))) | (((250057197U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (8095386305181031305ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [2U] [i_0]), (arr_1 [(_Bool)1] [(unsigned char)5])))))))) % (((/* implicit */int) arr_1 [(short)19] [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1] [i_1])) + (max((((/* implicit */int) min((var_15), (arr_1 [i_1] [i_1])))), (((((/* implicit */int) (short)3028)) & (((/* implicit */int) (short)3017))))))));
        arr_8 [i_1] [i_1] = (!(((((/* implicit */int) arr_6 [i_1] [i_1])) <= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)44792)))))));
        var_19 = (+((((~(arr_5 [i_1] [i_1]))) << (((max((((/* implicit */long long int) var_9)), (9223372036854775807LL))) - (9223372036854775778LL))))));
    }
    var_20 *= ((/* implicit */short) (unsigned char)188);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_4))));
        var_22 -= ((/* implicit */unsigned int) (signed char)-111);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [13U])) ? (((((/* implicit */_Bool) (short)3028)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_2] [i_2])))) : (((/* implicit */int) arr_1 [i_2] [i_2])))))));
        var_24 = var_1;
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) arr_16 [i_3]);
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_9))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_26 |= ((/* implicit */signed char) arr_16 [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-3012)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)19841)))) : (((/* implicit */int) ((_Bool) (short)21046))))) % ((((_Bool)1) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (short)-3000))))));
                                var_28 -= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65511))))) >> (((1521858335) - (1521858317)))));
                                var_29 = (_Bool)1;
                            }
                        } 
                    } 
                    var_30 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12)) / (((/* implicit */int) (_Bool)1))))) % (3608801335603343626ULL)));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1366459985U)), (var_4)))) ? (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3028)))))) : (((((/* implicit */int) (unsigned short)65531)) / (((/* implicit */int) (signed char)-72))))))) < (((((/* implicit */_Bool) 2869579595U)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */int) var_1);
}
