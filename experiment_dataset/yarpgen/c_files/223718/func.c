/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223718
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
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (short)7)))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_14 += arr_0 [i_0 + 1];
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) arr_6 [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-15696))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1]))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1] [i_4] [i_4 + 1])) ? (arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_4 - 1]) : (arr_10 [i_1] [i_3 - 1] [i_1] [i_4 - 2])))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)163))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) (-(268435455LL)))) ? (((/* implicit */unsigned long long int) -1960480077)) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_3 [4ULL] [4ULL] [i_0])))))));
        var_21 ^= ((/* implicit */unsigned short) arr_1 [0ULL]);
    }
    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)59587))));
        var_23 = ((/* implicit */unsigned char) (!(max((arr_14 [i_5 - 3] [i_5 - 3]), (arr_14 [i_5 - 2] [i_5 + 1])))));
        var_24 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) min(((unsigned short)2047), (((/* implicit */unsigned short) (unsigned char)38)))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_25 ^= max((8795958804480ULL), (((/* implicit */unsigned long long int) (unsigned short)2047)));
        var_26 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_6]))))) ? (((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)10]))) : (arr_19 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) arr_15 [i_6]))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max(((~(arr_17 [(unsigned char)7] [(unsigned char)11]))), ((-(((/* implicit */int) (short)13981)))))))));
        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)5948)))), (((/* implicit */int) arr_14 [i_6] [i_6]))))), ((+(((((/* implicit */_Bool) (short)32246)) ? (arr_18 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_6])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_29 += ((/* implicit */short) (unsigned char)133);
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5949)) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) arr_24 [i_7]))));
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_24 [i_7]);
        }
        var_31 *= ((/* implicit */short) arr_16 [i_7]);
        arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3506449238U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) 8916899652920170829ULL)) ? (((/* implicit */int) (unsigned short)32651)) : (((/* implicit */int) (_Bool)0))))));
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 7314510448560551504ULL)) ? (((/* implicit */int) (short)-17730)) : (((/* implicit */int) (_Bool)0)))))));
    var_33 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)184)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)))));
}
