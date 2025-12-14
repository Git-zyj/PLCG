/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46126
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_0] [i_2])))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_4] [i_1] [i_4])) ? (((/* implicit */int) arr_15 [i_3] [i_1] [i_4] [i_3] [i_4] [i_2] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]))))));
                            arr_17 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)18593))) : (((long long int) -12LL))));
                            arr_18 [i_4] [i_4] [i_2] [i_2] [i_2] [i_0] [i_0] = (~(var_15));
                        }
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -11LL))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_0 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        var_18 = min((-1898744603), (((/* implicit */int) (short)-18601)));
                        var_19 += ((/* implicit */long long int) (((_Bool)1) || ((_Bool)1)));
                    }
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((unsigned long long int) var_15)) != (((/* implicit */unsigned long long int) min((arr_22 [i_6 + 2] [i_6 - 2] [i_6 + 1] [i_6 - 1]), (arr_22 [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 - 2])))))))));
                        arr_24 [i_6] [i_2] [i_0] = ((/* implicit */long long int) arr_22 [i_0] [i_0] [i_2] [i_6]);
                        arr_25 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) var_0);
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((448306772U) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((var_15) / (((/* implicit */long long int) ((/* implicit */int) (short)32386)))))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) arr_7 [i_2])) : (5743152985813740709LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1]))))));
                        var_21 = ((/* implicit */short) ((((-1898744590) + (2147483647))) >> (((((((((/* implicit */int) (short)-9778)) + (2147483647))) << (((((/* implicit */int) var_5)) - (28945))))) - (2147473849)))));
                        var_22 = arr_2 [i_1];
                        var_23 = ((/* implicit */long long int) 4294967295U);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                            {
                                var_24 -= ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) 268435455LL)))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-18590)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_41 [i_8])) ? (1898744605) : (((/* implicit */int) arr_12 [i_8])))))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) -1898744601)) || ((!(((/* implicit */_Bool) arr_12 [i_10])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (((arr_16 [i_8] [i_9] [i_10] [i_11] [(short)20]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */int) (signed char)54)) : (-1557583898)))))))))));
                                arr_43 [i_8] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) arr_4 [i_10] [i_9]);
                                var_26 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10]))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                            }
                            arr_44 [i_11] [i_10] [i_9] [i_8] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)26219))))), (((arr_6 [i_8] [i_8]) ? (arr_35 [i_8] [i_9] [i_10] [i_11]) : (-12LL))))), (((long long int) ((short) (short)-9778)))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) var_12)) == (((/* implicit */int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) var_3)))) == ((-(((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */unsigned short) ((max((((405774826U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_29 [5ULL])))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_13))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1557583901)), (var_15)))) && (((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_8] [i_9])))))));
            }
        } 
    } 
}
