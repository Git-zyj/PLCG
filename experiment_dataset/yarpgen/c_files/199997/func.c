/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199997
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
    var_18 = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) ((unsigned char) (+((-2147483647 - 1)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((min((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) >> (((max((((/* implicit */unsigned long long int) ((1951325266) < (((/* implicit */int) arr_1 [i_0]))))), (((unsigned long long int) var_2)))) - (12166689052605851903ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 = arr_7 [i_2] [i_1];
                        var_20 = ((/* implicit */unsigned char) arr_5 [i_1]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */int) arr_13 [i_4]);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            arr_26 [i_5] [i_5] [i_6] [i_7 + 1] [i_7 + 3] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)164))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_11 [i_7 + 1]), (arr_11 [i_7 + 2])))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)247)), (arr_23 [i_5] [i_5] [i_5] [i_7 + 2] [i_5])))) ? ((+(arr_19 [i_7 + 2]))) : (((/* implicit */int) ((signed char) -1050245603))))) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */unsigned int) (-(max((((arr_19 [i_8]) | (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25)))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned int) 2147483647);
                            var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)31)))), (((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_28 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_5])) : (((/* implicit */int) arr_28 [i_7 + 3] [i_5] [i_7 + 3] [i_5]))))));
                        }
                        for (int i_10 = 2; i_10 < 11; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) arr_15 [i_5] [i_10]);
                            var_26 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) var_4)) << (((var_2) - (12166689052605851902ULL))))))), (((/* implicit */int) var_17))));
                            var_27 *= ((/* implicit */unsigned long long int) min((arr_23 [i_10] [i_7 + 3] [i_10] [i_5] [i_10]), (((/* implicit */long long int) var_0))));
                            var_28 = ((/* implicit */long long int) ((1497995073859757602ULL) * (((/* implicit */unsigned long long int) (~(min((1152921504606715904LL), (((/* implicit */long long int) (unsigned char)152)))))))));
                            var_29 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_18 [i_5] [i_10] [i_10 - 1] [i_5])))) > (((((/* implicit */_Bool) 8079079719228685209LL)) ? (((/* implicit */int) arr_18 [i_5] [i_10 + 1] [i_10 + 1] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_10] [i_10 + 2] [i_5]))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            arr_37 [i_4] [i_5] [i_6] [i_6] [i_7 + 1] [i_5] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61623)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_36 [i_4] [i_5] [i_5] [i_5] [i_7 + 1] [i_5] [i_4]))))) ? (((((/* implicit */_Bool) 1233071192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29246))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)112)))));
                            var_30 = ((unsigned char) min((((/* implicit */unsigned char) var_10)), ((unsigned char)240)));
                            var_31 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -8079079719228685226LL))))));
                        }
                        arr_38 [i_4] [(unsigned char)9] [i_5] [i_4] [i_4] [i_7] = (+(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_4] [8] [8] [i_5]))))) > (((((/* implicit */_Bool) arr_13 [i_4])) ? (arr_34 [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230)))))))));
                        var_32 ^= ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_7 + 2])) ^ (((/* implicit */int) arr_13 [i_5])))) <= (((arr_36 [(unsigned char)10] [i_5] [i_6] [i_7 + 1] [i_5] [6] [i_7 + 1]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_20 [(_Bool)1] [i_7 + 1] [i_6] [i_5] [(_Bool)1]))))));
                        var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)80))));
                    }
                } 
            } 
        } 
    }
    var_34 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (var_14))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) var_15))));
    var_35 = ((/* implicit */_Bool) var_12);
}
