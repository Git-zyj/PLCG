/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47414
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1744646119)) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned char)8)), (var_6))), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))) : (var_9)));
                var_12 = ((/* implicit */int) 9512941371504205800ULL);
                /* LoopSeq 3 */
                for (signed char i_2 = 4; i_2 < 24; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_9 [3ULL] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(var_0)));
                        arr_10 [i_0] [(unsigned char)7] [i_2] [(unsigned char)21] = ((/* implicit */unsigned int) min((605859511011786590LL), (-605859511011786590LL)));
                    }
                    for (unsigned char i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        var_13 |= 605859511011786590LL;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_0] [(short)19] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                            arr_16 [i_0] [i_1] [i_4 + 2] [i_4 + 2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (-605859511011786590LL) : (((/* implicit */long long int) var_2))))));
                            arr_17 [i_5] [8LL] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? ((+(var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-57)))))));
                            var_14 = ((/* implicit */signed char) -1554889957);
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_10))));
                        }
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(max((((/* implicit */long long int) (unsigned short)44909)), (605859511011786590LL))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) max((max((605859511011786590LL), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) (+((-2147483647 - 1)))))))))));
                        arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-84)), (-521765495)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44908))) | (var_0)))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_24 [i_7] [i_7] [i_2] [i_7] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 605859511011786606LL)) ? (var_2) : (-591020528))), ((~(((/* implicit */int) (short)-14761)))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned short)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_9), (max((((/* implicit */unsigned long long int) (signed char)0)), (var_1))))))));
                        arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) var_1);
                        var_18 *= ((/* implicit */unsigned int) max((-1LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1467183602)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(var_6)))))));
                    }
                    arr_27 [20ULL] |= ((/* implicit */short) max(((+(min((((/* implicit */unsigned long long int) -1467183602)), (var_9))))), (((/* implicit */unsigned long long int) -134217728))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43243))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))))) ? (((((/* implicit */_Bool) (-(var_0)))) ? ((-(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (unsigned short)44909)))))) : (((/* implicit */int) min((((short) (unsigned short)0)), (((/* implicit */short) var_5)))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                {
                    arr_32 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)0);
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 22; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_0] [(unsigned char)24] [i_0] = ((/* implicit */short) ((unsigned char) (-(var_10))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_8] [i_0] = ((/* implicit */short) (~((-(var_9)))));
                        arr_38 [i_0] [i_8] [(unsigned short)8] [i_9 + 1] [i_9] [(unsigned char)19] = ((((/* implicit */_Bool) ((signed char) (unsigned short)24008))) ? (((unsigned int) (unsigned short)44880)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) var_4))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 2; i_10 < 24; i_10 += 1) 
                    {
                        arr_42 [i_0] [i_10] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)247))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)0))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(var_6))))));
                        arr_43 [i_1] [i_0] = (-((~(((/* implicit */int) (unsigned char)5)))));
                        var_21 = ((/* implicit */unsigned char) ((short) var_8));
                    }
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        for (short i_12 = 2; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14760))) : (576320014815068160LL))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((short) (short)-28294)))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned char) ((unsigned char) (unsigned char)99))))));
                                arr_48 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) >= (-605859511011786590LL)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 23; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_56 [(unsigned char)4] [i_1] [16] [i_1] [i_13] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)246))));
                                arr_57 [i_0] [i_15] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)14760))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2251799813668864LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)1023))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                }
            }
        } 
    } 
    var_27 |= ((/* implicit */int) ((max((605859511011786590LL), (((/* implicit */long long int) (short)(-32767 - 1))))) + (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (short)24292)))) > (((/* implicit */int) ((short) var_8)))))))));
    var_28 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)62)), ((short)(-32767 - 1))))), ((~(((/* implicit */int) (unsigned short)56687)))))));
    var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) (short)32754)), ((-(((/* implicit */int) (unsigned char)235))))))), ((-(((((/* implicit */_Bool) (unsigned char)34)) ? (var_3) : (((/* implicit */unsigned int) 703710055))))))));
    /* LoopSeq 1 */
    for (short i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        arr_60 [i_16] = ((/* implicit */unsigned char) var_1);
        arr_61 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2251799813668864LL)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) ((max((((/* implicit */long long int) -1327619264)), (var_10))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
        arr_62 [i_16] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)17))))), (var_6)));
    }
}
