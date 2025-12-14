/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230098
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
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (arr_1 [i_0])))) ? (((int) (unsigned char)214)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1392739360)))))))) ? (((int) arr_2 [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 3] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1724))))) ? (((/* implicit */int) min(((unsigned char)191), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) arr_12 [i_0 - 2] [i_0 + 2] [i_2] [(unsigned short)12] [(unsigned char)0])))) & (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1724)))))))));
                                var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_0 [4LL])) - (((2103504726) / (((/* implicit */int) (unsigned short)65525))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(var_5))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [i_6] = ((/* implicit */unsigned int) ((max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63811))))) ? (((/* implicit */int) max((arr_11 [i_6] [i_6] [i_5] [i_2] [i_1] [i_0]), (arr_5 [4U] [i_1])))) : ((~(((/* implicit */int) (unsigned char)62)))))))));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 4; i_7 < 10; i_7 += 2) 
                        {
                            arr_23 [3ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) -2014958800331935705LL);
                            var_18 = ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 3])) > (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 3])));
                            arr_24 [i_1] [i_5 - 1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_1])))));
                            var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 5422809465357165536ULL)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_5] [i_7])))))));
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */int) (_Bool)1);
                            var_20 = ((/* implicit */int) var_4);
                            var_21 ^= ((/* implicit */int) arr_13 [i_0] [i_1] [i_5 + 1] [i_1]);
                        }
                        arr_29 [i_5] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(unsigned char)9])), (arr_15 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_5])))) ? (2147483647) : (arr_25 [i_0] [i_1] [i_1] [i_5] [i_1] [i_5])))) : (46010078931012102ULL)));
                    }
                    arr_30 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) var_11);
                }
            } 
        } 
    } 
}
