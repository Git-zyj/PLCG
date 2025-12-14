/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49361
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)20317)) >> (((arr_5 [i_0] [i_0] [i_0]) - (307805178U)))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned short)96), (((/* implicit */unsigned short) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) ((signed char) var_8))), (min((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_3 [i_0] [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned int) 1583131866)) : (var_2))))))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            arr_18 [i_5] [i_5] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_15 [i_3] [i_4] [i_4])))) / ((~(0)))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_5] |= ((/* implicit */unsigned char) (+((~(arr_13 [i_6])))));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) 1583131880)) + (7680U)));
                            arr_24 [i_4] = ((/* implicit */signed char) (~(arr_13 [i_2 + 1])));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((-9223372036854775793LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7]))))))))));
                            arr_25 [i_2] [i_4] [i_3] [i_4] [i_7] [i_4] [i_7] = ((/* implicit */int) ((9223372036854775797LL) / (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_5] [i_5])))))));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(arr_16 [i_3] [i_3] [i_2 - 3] [i_8] [i_4 + 3]))))));
                            arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_10 [i_8] [i_2] [i_4])))));
                        }
                        var_18 = ((/* implicit */short) (+(-9223372036854775790LL)));
                    }
                    for (unsigned short i_9 = 3; i_9 < 22; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 23; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_7)), (-1187150587))))));
                            arr_36 [i_2] [i_4] [i_2] [i_9] [i_10] = ((/* implicit */long long int) (unsigned short)60861);
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((signed char) (short)32767)), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_3] [i_3] [i_3])), ((short)-32752))))))))))));
                            arr_37 [i_2] [i_2] [i_9] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)20114)) << (((1583131843) - (1583131838)))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_40 [i_2] [i_4] [i_2] [i_9] [i_11] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (short)32767)), (-4)))));
                            var_21 = ((/* implicit */unsigned char) ((arr_9 [i_2] [i_2]) == (((/* implicit */long long int) -1583131884))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)255))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1092944271U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)12969)), ((unsigned short)32)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)222)) || (((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_11] [i_2])))))))) : (((((/* implicit */_Bool) -1583131846)) ? (((unsigned long long int) arr_13 [i_4])) : (((/* implicit */unsigned long long int) min((arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_11]), (((/* implicit */long long int) -1583131889)))))))));
                            arr_41 [i_2] [i_11] [i_11] [i_11] [i_11] [i_4] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 16172430000994468390ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))), (((/* implicit */long long int) arr_28 [i_2] [i_3] [i_2] [i_9 - 3]))))) ? (((/* implicit */unsigned int) max((min((-265898497), (((/* implicit */int) (unsigned short)274)))), (((/* implicit */int) ((signed char) arr_27 [i_2])))))) : (((((/* implicit */_Bool) min((arr_30 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_14 [i_2] [i_3] [i_4] [i_3]))))) ? (min((1985379509U), (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)25201), ((unsigned short)3)))))))));
                            arr_42 [i_3] [i_3] [i_9] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_2] [i_4] [i_4])), ((short)7))))) - (min((10724611076883253924ULL), (((/* implicit */unsigned long long int) 2857932263U))))))));
                        }
                        arr_43 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_2)))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) ^ (arr_31 [i_9 - 3] [i_2 + 1] [i_9 - 3] [i_9 - 3])))));
                    }
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 22; i_12 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_50 [i_13] [i_13] [i_13] [i_4] [i_13] = ((/* implicit */short) (+(arr_31 [i_2 + 3] [i_2 + 1] [i_2] [i_2])));
                            arr_51 [i_13] [i_4] [i_13] |= ((/* implicit */signed char) ((((360996523) << (((((/* implicit */int) var_6)) - (54501))))) & (((/* implicit */int) (short)0))));
                            arr_52 [i_2] [i_2] [i_4] [i_13] [i_4] [i_13] |= ((/* implicit */int) ((((/* implicit */_Bool) ((-291406628279913058LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)62)))))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-360996525)))))));
                            arr_53 [i_4] = ((/* implicit */unsigned short) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_4 - 2])))));
                        }
                    }
                    arr_54 [i_4] = max((min((((/* implicit */long long int) min((((/* implicit */short) var_7)), ((short)2)))), (var_5))), (var_5));
                }
            } 
        } 
    } 
}
