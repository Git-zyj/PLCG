/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202131
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */short) ((((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [18U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) && (var_8))))) : ((~(var_2))))))));
                    arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((unsigned int) (+(var_4))))) : (((((/* implicit */unsigned long long int) (+(1531557024850620994LL)))) & (max((((/* implicit */unsigned long long int) var_4)), (var_5)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_0 + 2] [i_1 - 1] [i_2] [i_3] [i_1 + 3] [i_0] [i_3])), (var_7)))) ? (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71)))))))) - (var_7)));
                                arr_18 [i_2] [i_1] [12LL] [i_3] [i_4] = ((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_9))) ? (min((((/* implicit */unsigned int) (short)-2)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))), (((unsigned int) min((var_4), (((/* implicit */unsigned int) (short)-32280)))))));
                                arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (var_5))));
                                arr_20 [i_3] [i_1 + 3] [i_0 - 3] [i_0] = ((/* implicit */int) ((-1531557024850620994LL) < (2086265269598926579LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                arr_26 [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) 4118446907U)) & (var_6))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_9))) == (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) : (var_5)))));
                arr_27 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_5)))), ((((_Bool)1) ? (3354950931U) : (arr_5 [i_5] [i_5])))))));
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    for (short i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_35 [i_5] [i_5] [i_7] [(unsigned char)7] [i_5] = min((((arr_28 [i_9] [i_7 + 3]) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)202))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)0)), (-7283864852406411002LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2020))) : (var_6))));
                                arr_36 [i_5] [i_6] [i_8] [i_8 + 1] [i_9] = ((/* implicit */unsigned char) var_1);
                            }
                        } 
                    } 
                } 
                arr_37 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9174325704505820587LL)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        for (long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                        {
                            {
                                arr_52 [i_11] [i_14] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!((_Bool)1))))))));
                                arr_53 [i_10] [i_10] [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_9))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)22056)) : (((/* implicit */int) (signed char)8)))))))) ? ((-(((/* implicit */int) (signed char)56)))) : (((((/* implicit */_Bool) 2146435072U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-126))))));
                                arr_54 [i_13] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (var_9))))) : (min((-4440915666273429293LL), (((/* implicit */long long int) (_Bool)1))))))) > (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) (~(var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_55 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((((/* implicit */long long int) (unsigned char)9)), (var_6)))))) ? (max((((/* implicit */unsigned long long int) ((0U) + (((/* implicit */unsigned int) -1949555497))))), (min((var_7), (((/* implicit */unsigned long long int) (short)368)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                arr_56 [i_10] [i_11 - 1] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_50 [(unsigned char)0] [(unsigned char)0] [i_11 - 1] [(unsigned char)0] [i_11])), (var_7)))));
                arr_57 [i_11] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (-7283864852406410989LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19798)))))) || (arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1]))))) | (((((/* implicit */_Bool) ((arr_38 [i_11] [i_11 - 1]) ? (((/* implicit */unsigned long long int) var_3)) : (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3)))))) : (max((var_7), (((/* implicit */unsigned long long int) var_2))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_1);
}
