/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42197
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 19LL)) && (((/* implicit */_Bool) 1167468852U))));
                                var_20 = ((/* implicit */unsigned char) min((3127498444U), (((/* implicit */unsigned int) 11))));
                                arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(537991506)))))) ? (((((/* implicit */_Bool) 1634028714U)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_1] [i_3]))))) : (max((6591152642627972702LL), (((/* implicit */long long int) var_6)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(short)14] [i_3] [i_3]))))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_0]))))))) != (((/* implicit */int) ((((1167468852U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [6LL] [i_2] [i_3] [i_4] [i_3]))))) != ((-(1167468852U))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) arr_7 [i_0 + 3] [i_0 + 3]);
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 4] [i_1] [i_0 - 3] [i_1] [i_0 - 3] [i_1]))))) ? (((/* implicit */int) var_9)) : (((((-6591152642627972717LL) == (((/* implicit */long long int) 2660938576U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [(short)9]))))));
                    arr_15 [i_0 + 3] = ((1935619192522913583ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4294967293U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_2] [i_1]))))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (unsigned short)40895))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        arr_22 [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-9223372036854775795LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51095))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_26 [(_Bool)1] [i_1] [i_5] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0] [i_6 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_7))));
                            arr_27 [i_7] [i_6 + 1] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (-537991491) : (((/* implicit */int) arr_19 [i_1] [i_5] [i_7]))))) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_1] [i_0 - 1])) : (((/* implicit */int) (signed char)13))));
                        }
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) arr_19 [i_6] [i_1] [i_0])) : (81646705))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (-320611654)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_6] [i_5] [i_1] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_10 [i_0] [i_5] [i_1] [(short)10] [i_0]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-19482))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (arr_18 [i_8] [i_5] [i_1] [i_0])))), (((arr_4 [i_0] [i_5] [i_0]) & (((/* implicit */long long int) 320611650))))))) ? (((/* implicit */unsigned int) 537991485)) : (min((((/* implicit */unsigned int) 320611668)), ((~(1772549635U)))))));
                    }
                }
                var_25 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_1]);
                var_26 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [(unsigned short)4]);
            }
        } 
    } 
    var_27 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 14; i_10 += 3) 
        {
            {
                var_28 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) arr_16 [i_9 - 1])) ? (((/* implicit */int) arr_34 [i_9] [i_9] [i_10])) : (((/* implicit */int) (unsigned short)15430)))) << (((/* implicit */int) (!(var_7))))))));
                arr_38 [i_9] [i_10 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)27073))));
            }
        } 
    } 
    var_29 -= ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 4294967295U)) : (var_4)))), (max((((/* implicit */unsigned long long int) var_16)), (18446744073709551606ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))));
    var_30 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) 1634028726U)))))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
}
