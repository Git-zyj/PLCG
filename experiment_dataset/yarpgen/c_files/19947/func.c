/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19947
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16)) ? (var_12) : (((/* implicit */long long int) var_10))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16)))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29)) ? (((int) (_Bool)1)) : ((+((+(-885760716))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (min((((var_12) >> (((((/* implicit */int) (short)-17)) + (25))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (short)-14))))))) : (((((((/* implicit */unsigned long long int) var_4)) == (var_11))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-38)))))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 13; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_15 [i_5] [i_3] [i_5] = (unsigned char)216;
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_18 [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) var_5));
                        arr_19 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) var_6);
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_5 - 2])) ? (1923228859) : (((/* implicit */int) (unsigned short)39682))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (var_2))))))));
                        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21061)) ? (((/* implicit */int) arr_7 [i_7] [i_4])) : (((/* implicit */int) (unsigned char)174))))) ? (((/* implicit */long long int) ((arr_3 [i_4] [i_4] [i_7]) - (var_8)))) : (min((2097150204384909427LL), (((/* implicit */long long int) (short)-10246)))))) | (((/* implicit */long long int) ((/* implicit */int) (short)15142)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_19 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_14 [i_4 - 3] [i_8]) <= (arr_14 [i_4 - 2] [i_5 - 2])))) : (arr_14 [i_5 - 2] [i_8]));
                        arr_24 [i_3] [i_3 - 1] [i_4 - 3] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (short)27154)))))));
                        var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-3)) - (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)12)))) ? (((((((/* implicit */_Bool) (short)-2436)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-28)), (arr_21 [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_21 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_17 [i_3] [i_3] [i_3] [i_9] [i_3 + 2]) : (((/* implicit */unsigned int) arr_3 [i_3] [i_4] [i_5 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1379852166)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (arr_17 [i_9] [i_9] [i_3] [i_9 - 1] [i_9 - 1])))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_12))))));
                        arr_28 [i_3] [i_3] [i_3] [i_9 - 1] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)12344)) ? (((/* implicit */int) arr_7 [i_4] [i_4 - 1])) : (((/* implicit */int) arr_16 [i_3 + 2] [i_3 + 2] [i_4 + 1] [i_5 + 1]))))));
                        arr_29 [i_3] [i_4] [i_3] [i_9 - 1] = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) (short)27154)) || (((/* implicit */_Bool) (unsigned char)239)))) ? (-1) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (var_11)))))));
                        arr_30 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)94)) ? (((((((/* implicit */int) (unsigned char)6)) > (((/* implicit */int) (short)31255)))) ? (min((2549992748774033589LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_3] [i_4]))))))) : (max((((/* implicit */long long int) arr_12 [i_3 + 2] [i_3 + 2] [i_9])), (-7359796129549022030LL)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13966)) ? (((/* implicit */int) (short)-21)) : (((/* implicit */int) (short)-5290))));
                    }
                    arr_31 [i_3] [i_3] [i_5 - 1] = ((/* implicit */short) ((((arr_13 [i_3] [i_3 + 2] [i_3] [i_4 - 2]) || (((/* implicit */_Bool) arr_7 [i_3] [i_3 + 1])))) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) 8646911284551352320LL)))))));
                }
            } 
        } 
    } 
}
