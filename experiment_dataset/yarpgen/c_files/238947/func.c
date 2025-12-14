/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238947
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))), (((/* implicit */long long int) min(((!(var_6))), (((arr_4 [i_0] [i_0] [i_1]) < (((/* implicit */int) (short)-4480)))))))));
            var_12 *= ((/* implicit */signed char) (-((-(arr_4 [i_0] [i_0] [i_1])))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_3 = 4; i_3 < 10; i_3 += 1) 
            {
                var_13 = ((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (arr_7 [i_2] [i_3 + 1]) : (((/* implicit */int) arr_1 [i_3 + 2])))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
                arr_11 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) || ((((!(((/* implicit */_Bool) 5751803863460588793LL)))) || ((!(((/* implicit */_Bool) 4745173477644936797LL))))))));
            }
            for (int i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_2] [i_6] [i_2] [i_2] = (~(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_5 [i_5] [i_2] [i_0]) - (8258815396992607144LL)))))) ? (((unsigned int) arr_0 [10U] [i_5])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)151))))))));
                            var_14 = ((/* implicit */long long int) 896);
                            var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_4 + 1] [i_4 - 3]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) 
                {
                    arr_22 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)65535)))));
                    var_16 = ((/* implicit */long long int) var_2);
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */long long int) (~(var_0)))) ^ (-9223372036854775806LL))), (((arr_8 [i_7 - 1] [i_4 - 3] [i_4 - 1]) / (arr_8 [i_7 + 1] [i_4 + 1] [i_4 - 2])))));
                        arr_25 [i_0] [i_2] [i_4] [i_7] [i_8] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_13 [i_7 + 1] [i_4 - 2])), (min((var_3), (arr_24 [i_2] [i_7] [i_7] [2U] [i_2] [1LL] [i_0]))))), (((/* implicit */unsigned int) arr_12 [i_4 + 2]))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7 + 1] [i_7 - 1] [i_7] [8LL] [i_7])) ? (((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 2] [i_0] [i_0] [5])) : (((/* implicit */int) arr_15 [i_8] [i_7 + 1] [i_7] [i_7 - 2] [i_2]))))) ? (((long long int) arr_15 [i_8] [i_7 - 1] [i_7 - 1] [i_2] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_7 - 2] [i_7] [i_7] [i_7 - 3])))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((-308645017163921199LL) <= (((/* implicit */long long int) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))))));
                    }
                    var_20 = ((/* implicit */signed char) ((long long int) ((arr_7 [i_2] [i_7 - 2]) / (arr_7 [(unsigned char)2] [i_7 + 1]))));
                }
            }
            for (long long int i_9 = 3; i_9 < 11; i_9 += 1) 
            {
                var_21 = ((((/* implicit */_Bool) (short)4480)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_9])) : (arr_27 [i_9] [i_2] [i_0]))), (((/* implicit */int) var_7))))));
                arr_29 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_26 [i_0] [i_2] [i_9 + 1])) ? (arr_26 [i_0] [i_2] [i_9 - 3]) : (arr_26 [i_9] [i_2] [i_9 - 2]))), (((arr_26 [i_0] [i_9] [i_9 - 3]) - (arr_26 [i_2] [i_2] [i_9 - 1])))));
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((((unsigned long long int) arr_2 [i_10 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_10 + 1])) ? (arr_2 [i_10 + 1]) : (arr_2 [i_10 + 1]))))));
                            var_23 = ((/* implicit */short) (+((+(arr_24 [i_0] [i_0] [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1])))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10 + 1])) ? (((/* implicit */int) arr_12 [i_10 + 1])) : (((/* implicit */int) (unsigned short)16197))))) ? (((6112197196899111572LL) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10 + 1]))))) : (((long long int) 4294967295U))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [11U] [i_2] [i_10 + 1] [i_10 + 1] [i_10] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_10 + 1] [i_2]))) : (arr_24 [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_12] [0LL]))))));
                        }
                    } 
                } 
                arr_38 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) <= ((+(((/* implicit */int) (!(var_6))))))));
                var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10 + 1]))) <= (((unsigned int) max((((/* implicit */unsigned int) var_6)), (arr_28 [i_2] [1U]))))));
            }
            var_27 += ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_1 [i_2]))))), (min((965462468U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
            var_28 = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned short) arr_31 [i_0] [i_2] [i_2] [(signed char)8])), (var_2))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [10]))) == (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_2])) : (var_0)))))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (6112197196899111572LL)))) ? (arr_28 [i_0] [i_0]) : (min((var_0), (((/* implicit */unsigned int) arr_9 [i_0] [i_2] [(short)7]))))))) / ((+(min((var_1), (308645017163921207LL))))))))));
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            arr_41 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [1U] [i_0] [i_0] [i_13]))) & ((+(var_0))))) <= ((+(max((var_0), (((/* implicit */unsigned int) var_7))))))));
            var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_3)))), (var_9))))));
        }
        arr_42 [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) ((((/* implicit */_Bool) -732586763)) || (((/* implicit */_Bool) (short)4479))))) <= (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned short i_14 = 3; i_14 < 20; i_14 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((965462476U) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)47)), ((unsigned short)60856))))))))));
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_46 [i_14 - 2] [(unsigned short)20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) : (((unsigned int) arr_44 [(unsigned short)2])))))));
    }
    var_34 = ((/* implicit */_Bool) (+(var_3)));
}
