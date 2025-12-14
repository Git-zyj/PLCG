/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234794
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [5] [i_0]))));
        var_14 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) 2766530442U))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) : (4601968488560822500ULL)));
    }
    var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4529430204939422403LL)));
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (unsigned short)51586)));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((11127996769466309586ULL) < (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2 - 3] [i_2] [2] [10U] [(_Bool)1])))) ? (((/* implicit */int) arr_1 [i_3])) : (arr_12 [i_1] [i_2] [i_2] [i_4] [i_4] [i_4]))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_4]))) : (arr_14 [2ULL] [2ULL] [i_3] [(unsigned char)8] [i_5]))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-22269)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_2])) != (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_3 [i_3] [i_2]))))))) : (-1381614046)));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) 5572184215031614025ULL)))));
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (unsigned short)13949)), (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-22285)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37))))) : (((/* implicit */int) var_1))));
                        }
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            arr_21 [10ULL] [10ULL] [10ULL] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (short)22268);
                            arr_22 [i_1] [1U] = ((/* implicit */unsigned int) arr_4 [i_1]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 3] [i_2 - 2])) ? (((/* implicit */unsigned long long int) -504205530)) : (8997528960623554941ULL))), (min((var_2), (arr_2 [i_2 - 2])))));
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                        }
                        var_23 = arr_24 [i_1] [i_2 - 1] [i_3] [i_1];
                    }
                } 
            } 
        } 
        var_24 -= ((/* implicit */unsigned short) 1536997698);
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551587ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1]))) : (min((0ULL), (((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1] [i_1]) == (((/* implicit */int) var_12))))))))))));
    }
    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        var_26 &= ((unsigned char) ((((/* implicit */int) arr_1 [i_8])) >> (((((/* implicit */int) arr_1 [i_8])) - (75)))));
        arr_28 [i_8] [i_8] = arr_2 [i_8];
        var_27 = ((/* implicit */int) var_11);
        arr_29 [i_8] = ((/* implicit */unsigned short) ((((arr_26 [i_8]) < (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8])))) ? (((((/* implicit */_Bool) arr_26 [i_8])) ? (13681512897708624917ULL) : (((/* implicit */unsigned long long int) arr_27 [i_8] [8ULL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_8] [i_8]))))));
        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14845))) + ((-(arr_26 [i_8]))));
    }
    for (unsigned char i_9 = 3; i_9 < 19; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((arr_26 [i_9]), (((/* implicit */unsigned long long int) arr_31 [i_9]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)206)))))))) : (((((/* implicit */int) (signed char)84)) / (((/* implicit */int) (unsigned short)51155))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32012)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)110))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            {
                                var_31 *= ((/* implicit */signed char) 131071U);
                                var_32 = ((/* implicit */unsigned char) min((max((arr_42 [i_9] [i_9] [i_9] [i_9 + 3] [i_9]), (arr_42 [i_9] [i_9] [i_9] [i_9 + 2] [i_9]))), (arr_42 [i_9] [i_9] [i_9] [i_9 - 3] [i_9])));
                                var_33 = arr_42 [i_9] [i_10] [i_10] [i_9] [i_13];
                            }
                        } 
                    } 
                    arr_44 [i_9] [i_9] [i_11] = ((/* implicit */_Bool) ((long long int) min((arr_26 [i_9 + 3]), (arr_26 [i_9 - 1]))));
                    var_34 += ((/* implicit */unsigned char) 1090310887);
                    var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) (short)31408)) ? (((/* implicit */int) (unsigned short)51589)) : (-548593066))) : (((int) (short)(-32767 - 1))))) / (min(((~(1334079159))), (((/* implicit */int) arr_36 [i_9] [i_9 + 2] [i_9] [i_9 + 1]))))));
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) ((unsigned long long int) 183366275));
    }
    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) 752024487386732490ULL))))) ? (var_2) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))))));
}
