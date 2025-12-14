/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204918
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (min((((/* implicit */long long int) var_8)), (2751260446752201196LL)))));
    var_15 = ((/* implicit */unsigned char) var_13);
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_13))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = (unsigned char)48;
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min(((unsigned char)180), ((unsigned char)182)))))) ? (((/* implicit */int) min((var_7), (min((((/* implicit */unsigned char) var_13)), (var_12)))))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 3]))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) 6755399441055744LL);
                /* LoopSeq 4 */
                for (long long int i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 ^= 3751088995700653662ULL;
                                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 2] [i_0 + 1] [i_0 - 1]))) : (arr_8 [i_0 + 1] [i_2 - 1] [i_0 + 1]))) / (((/* implicit */unsigned long long int) max((max((-2751260446752201226LL), (2751260446752201193LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned char)96))))))))));
                                var_20 ^= ((/* implicit */long long int) min((((/* implicit */int) ((short) (short)28786))), ((+(((/* implicit */int) var_0))))));
                                arr_13 [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_2 + 2] [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)40013))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)28786)))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)75))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((!((_Bool)0))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-80)), (arr_10 [i_0 - 3] [18ULL] [14LL] [i_2] [i_0 - 3] [i_2 + 3])))) : (((((((/* implicit */int) (signed char)-98)) + (2147483647))) << (((((/* implicit */int) arr_10 [i_0 - 3] [i_0] [i_0] [i_2] [i_0 - 3] [i_2 + 3])) - (229))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) 13189888929248675907ULL);
                }
                for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (arr_16 [11U] [i_0 - 1] [i_5 - 1] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (max((arr_16 [i_0] [i_0 - 1] [i_5 - 1] [i_5 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 2])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) : (arr_16 [i_0] [i_0 - 3] [i_5 - 1] [i_5 + 1]))))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 2]))))));
                    arr_19 [(_Bool)1] |= ((/* implicit */unsigned long long int) 0U);
                }
                for (long long int i_7 = 3; i_7 < 18; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */_Bool) max((((5208313129415105464LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) -2085562304)) - (0U))))));
                                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_18 [i_0] [(short)17] [6U])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 2])) << (((((/* implicit */int) arr_18 [i_0] [i_8] [i_9])) - (6834)))))) : (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5))) : (17607394334592920107ULL)))));
                            }
                        } 
                    } 
                    arr_28 [i_0 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_0))))))) > (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0 - 2])) ? (max((((/* implicit */unsigned long long int) var_8)), (3434512501009997359ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                    var_27 = ((/* implicit */long long int) ((unsigned char) (unsigned char)148));
                }
                var_28 *= ((/* implicit */unsigned int) -174852086);
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_13);
}
