/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200712
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
    var_11 |= ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((arr_3 [i_0]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)0))))))))))));
        var_14 = ((/* implicit */_Bool) ((((arr_3 [i_0 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53976))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((arr_3 [i_0 + 2]) - (1750830898U))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1]))))) * (((unsigned long long int) arr_5 [i_1]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))), (var_7)))) > (((/* implicit */int) arr_5 [i_1]))));
        arr_6 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) (short)-14612)) * (((/* implicit */int) (unsigned char)203))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */short) arr_5 [i_2]);
        arr_11 [i_2] = ((/* implicit */long long int) max((-611021877), (((/* implicit */int) (short)4845))));
        arr_12 [i_2] [i_2] |= ((/* implicit */long long int) arr_9 [i_2] [i_2]);
    }
    var_17 |= ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)31156))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_10), (((/* implicit */int) arr_16 [i_7]))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((2255714313197358520LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4845))))))));
                            var_21 += ((/* implicit */unsigned int) ((short) (-(max((((/* implicit */long long int) var_10)), (arr_15 [i_3]))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_27 [i_6] [i_4] [i_4] [i_5] [i_5] [i_6 + 1] [i_8] = ((/* implicit */unsigned int) min(((short)4849), (((/* implicit */short) ((var_0) > (((/* implicit */int) arr_5 [i_3 + 2])))))));
                            var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)144)), (var_3)))) && (((/* implicit */_Bool) ((long long int) (short)-4855))));
                            arr_28 [i_8] [i_6] [i_5] [i_6] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (15884355817302475964ULL)));
                        }
                        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_3] [i_3] [i_5] [i_6] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) max((arr_24 [i_3] [i_3] [i_3] [i_3 - 1]), (((/* implicit */unsigned int) (_Bool)0))))) : (min((max((arr_9 [i_3] [i_4]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_4))))));
                            arr_32 [i_3] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */long long int) 2562388256407075644ULL);
                        }
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            arr_36 [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_23 [i_3] [i_10 + 1] [i_6 + 1] [i_6] [(short)7] [i_3 + 3] [5LL]), (arr_23 [i_3] [i_10 + 2] [i_6 - 2] [i_3] [i_6 - 2] [i_3 + 4] [i_3]))))));
                            arr_37 [i_6] [(short)0] [(short)0] [i_5] [i_6] [i_6] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_6] [i_10] [i_10] [i_10] [i_6] [i_6])) || (((/* implicit */_Bool) arr_33 [i_6] [i_5] [i_5] [i_4] [i_6] [i_6]))))), ((+(((/* implicit */int) var_3))))));
                        }
                        arr_38 [i_3] [i_6] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)22817)))))), (((((/* implicit */int) min((arr_30 [i_3] [i_3] [i_3] [i_5] [i_5] [i_5]), (var_7)))) << (((((/* implicit */int) var_6)) + (8)))))));
                    }
                    for (long long int i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            arr_43 [i_3] [i_5] [i_11] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) (-(((/* implicit */int) var_8)))))) != (((arr_23 [i_12] [4LL] [i_12] [i_12 + 3] [i_11] [i_11 + 2] [i_3]) ? (((((arr_7 [i_3]) + (9223372036854775807LL))) << (((/* implicit */int) var_7)))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-3756)) + (2147483647))) >> (((/* implicit */int) (unsigned char)21)))))))));
                            arr_44 [i_3] [i_4] [i_11] [(unsigned char)12] [i_11] [i_11] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_20 [i_3 - 1] [i_11 + 4]))) ? (var_10) : (var_0)));
                            var_23 = ((/* implicit */short) min((-8722210814986266471LL), (((/* implicit */long long int) (short)4845))));
                            var_24 ^= ((/* implicit */unsigned short) ((min((-16LL), (((/* implicit */long long int) 320963772)))) == (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_12] [i_5] [i_5] [i_4] [i_3] [(unsigned char)13])))));
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            var_25 *= ((/* implicit */unsigned short) arr_24 [7ULL] [i_4] [i_5] [i_13]);
                            arr_47 [i_11] = ((/* implicit */short) ((2287287319U) - (2007679976U)));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((5348746255531210656ULL) << (((2147483648U) - (2147483633U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) 3253724653079945193ULL))))))) : (((/* implicit */int) (short)-3374))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_9 [2] [i_4]))));
                        }
                        for (long long int i_14 = 4; i_14 < 19; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)3))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23420))))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-34)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                            var_30 = ((/* implicit */unsigned short) max((-320963756), (((/* implicit */int) (unsigned char)18))));
                        }
                        for (unsigned char i_15 = 4; i_15 < 18; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) -1208526562)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_32 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)246))));
                            arr_54 [i_3] [i_3] [i_3] [i_11] [i_11] [(short)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        }
                        arr_55 [i_3] [i_11] = ((/* implicit */unsigned short) (short)8191);
                        arr_56 [i_11] [i_11] [i_11] [i_11] [i_5] [i_3] = ((/* implicit */signed char) var_0);
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16806)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24656))) : (1117590324U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 320963772)) || (var_5)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_11] [1LL] [i_11]))));
                    }
                    arr_57 [i_3] [i_3] = ((/* implicit */long long int) 15193019420629606422ULL);
                }
            } 
        } 
    } 
}
