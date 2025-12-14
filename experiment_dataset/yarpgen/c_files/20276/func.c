/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20276
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) -3657204998943185298LL);
        var_17 = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0 + 1]));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -3657204998943185287LL))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_1)))));
        arr_7 [i_1 + 1] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_7)) ? (560672316469198881LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)52))))))), ((~(((((/* implicit */long long int) ((/* implicit */int) (short)11))) % (-3657204998943185307LL)))))));
        arr_8 [i_1 + 1] [i_1] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (-6477893316843887440LL) : (-2724113278194158278LL)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14504929464705726185ULL)))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((long long int) -9223372036854775790LL));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_4] [i_3] [i_1] [i_5] &= ((/* implicit */long long int) 17589779995260093959ULL);
                            arr_20 [i_3 + 3] [i_2] [i_5] [(signed char)19] [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_5 [i_4] [(unsigned short)14]))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32766))) <= (560672316469198869LL))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (short)1984)) && (((/* implicit */_Bool) -3657204998943185288LL))))));
                    arr_25 [i_6] [i_6] [i_6] [(unsigned short)21] [i_6] [i_6] |= ((unsigned short) 14204414950735973472ULL);
                    arr_26 [i_1] [i_2] [(unsigned char)22] [i_6] = ((((((/* implicit */_Bool) max((9223372036854775785LL), (((/* implicit */long long int) arr_11 [i_1] [i_3] [i_6]))))) ? (max((var_12), (((/* implicit */unsigned long long int) arr_12 [i_1])))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (var_6)))))) == (((unsigned long long int) ((unsigned long long int) (signed char)-121))));
                }
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_37 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (signed char)-7;
                            arr_38 [i_1] [i_2] [i_7 - 1] [i_8] [i_9] = ((/* implicit */short) min((((((/* implicit */int) var_7)) > (((/* implicit */int) arr_22 [i_1] [i_2] [i_7 - 1] [i_8] [i_9])))), (((((/* implicit */int) ((arr_23 [i_1] [i_1] [i_1 + 1] [i_1]) <= (arr_32 [i_9] [i_8] [i_7 - 1] [i_1 + 1])))) == ((+(((/* implicit */int) (unsigned short)65535))))))));
                            arr_39 [(short)23] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */long long int) ((856964078449457668ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))), (-2724113278194158300LL))));
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 - 1] [i_8] [i_9]))) : (19ULL))), (((/* implicit */unsigned long long int) (+(2388334918U)))))))));
                        }
                    } 
                } 
                arr_40 [i_7 - 1] [i_2] [i_1] [i_1] = ((/* implicit */int) (+(max((((14204414950735973471ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))))), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) ((signed char) (unsigned char)6));
                var_23 = ((/* implicit */unsigned short) ((((unsigned long long int) var_3)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_1 + 1] [i_1 + 1] [i_1 + 1] [14ULL])) && (((/* implicit */_Bool) (signed char)-15))))))));
                arr_43 [i_1 + 1] [i_1 + 1] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)22467)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned short)43080))))));
            }
            var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_42 [i_1] [i_1 + 1] [i_2] [i_1]))))));
            var_25 = ((/* implicit */long long int) var_7);
        }
        var_26 -= ((/* implicit */short) min((min((67104768ULL), (((/* implicit */unsigned long long int) -5621417943637982407LL)))), (((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [0ULL]))) > (var_14))))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_6);
    var_28 = ((/* implicit */long long int) (signed char)-3);
}
