/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32870
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1)))) > (((/* implicit */int) var_1))))))));
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (min((17887291639301902825ULL), (((/* implicit */unsigned long long int) (short)-10128))))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (0ULL))))) > (((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_9);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (9223231299366420480LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (_Bool)0)))))));
        var_18 -= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_6)) : (2805118121U))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65535)))) * ((-(((/* implicit */int) (unsigned char)13))))));
                    arr_9 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) / (((((/* implicit */int) (short)10142)) / (((/* implicit */int) arr_0 [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) var_0);
                        var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)6045))))));
                        arr_13 [i_3 + 2] [i_2] [i_3 + 2] [i_4] [i_4] [i_1] = ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)0)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_16 [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) var_5)))));
                        var_23 = ((/* implicit */int) ((2211100393U) * (((/* implicit */unsigned int) -656970756))));
                        arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) (-(var_9)));
                    }
                    var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)237)) - (((/* implicit */int) (short)-10117))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) var_2))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            var_26 = ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6])) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6]) : (((/* implicit */int) arr_11 [i_1] [i_6] [i_6] [i_6] [i_6] [i_6])));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)23)))))))));
            var_28 ^= ((/* implicit */unsigned int) (-(arr_5 [i_1] [i_6])));
            var_29 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 65535)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10116))))));
        }
    }
    for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] [i_7 - 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (-1618579998) : ((+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((4264591246U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) / (max((9223372036854743040LL), (((/* implicit */long long int) (unsigned short)127))))))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_7 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) 2472624005U))))) : (var_12)));
        var_31 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (((-(var_9))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32759))) / (-2158063558474808523LL)))))))));
        var_32 = (_Bool)1;
    }
    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 4) /* same iter space */
    {
        arr_26 [6LL] [6LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) arr_19 [i_8] [i_8 + 1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8 - 3] [i_8 + 1]))))) : (((/* implicit */unsigned int) ((var_2) & (var_2))))));
        arr_27 [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) min((var_8), (((/* implicit */long long int) (_Bool)1)))))), (((((/* implicit */_Bool) (short)-4278)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_18 [i_8 + 3])))));
        var_33 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_19 [i_8 - 2] [i_8])), (((var_12) / (((/* implicit */long long int) arr_5 [i_8] [i_8 + 1]))))))));
    }
    var_34 -= ((/* implicit */unsigned int) var_5);
}
