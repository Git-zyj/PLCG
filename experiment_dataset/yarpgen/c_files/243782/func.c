/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243782
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)1);
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (~(((/* implicit */int) (short)-7784)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((var_8) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45910)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) 5698243448663701528LL);
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) 4294967295U))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_1 [i_1 - 1]))));
        var_13 *= arr_5 [i_1];
    }
    for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned long long int) (unsigned short)19625);
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) 3272022169U)) < (224099484773016488LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (866705852U)))) : ((+(6409243335207538048ULL))))) >> (((((/* implicit */_Bool) max((2525563929U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_4]))) : (((/* implicit */int) (signed char)-25))))));
                        var_16 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18281))) : (11ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_5)))))));
                    }
                    for (short i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20679)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_3 - 2]))))));
                        var_18 = ((/* implicit */unsigned char) ((short) 3872450344957499056ULL));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_23 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4002199544U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16325)))))))))) : (min((arr_14 [i_3 + 2] [i_6 - 1]), (arr_14 [i_3 - 2] [i_6 - 2])))));
                            arr_24 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) 18374513687281390225ULL);
                            var_19 *= ((/* implicit */_Bool) 0U);
                            var_20 -= ((/* implicit */unsigned int) (((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39546))))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_13 [i_3 - 2] [i_6 - 1])), ((short)-1149)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((signed char) var_1));
                            arr_27 [i_2] [i_2] [i_2] [i_4] [i_2] [i_8] = ((((/* implicit */int) (_Bool)1)) == ((-(((/* implicit */int) arr_1 [(_Bool)1])))));
                            arr_28 [i_8] [i_2] [0U] [i_3 - 3] [i_2] |= (~(2310774241U));
                            var_22 -= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned short)19625)) : (((/* implicit */int) (_Bool)0))));
                            var_23 = ((/* implicit */unsigned short) var_9);
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_2] [i_9] [i_6 + 1] [i_6] [i_9] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) ((short) arr_31 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_6 - 1]));
                            var_24 = ((/* implicit */unsigned long long int) 2206810694U);
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_38 [i_2] [i_2] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) (unsigned short)45911);
                        var_25 = 4294967283U;
                        var_26 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_27 -= ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((_Bool) 11438506331314738390ULL))));
                        arr_39 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 1] [i_2 - 1]))) + (var_9)))));
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)-25525)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 587850140U)) != (var_2))))))), ((~(max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2 + 1])), (18446744073709551590ULL)))))));
    }
    for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_11] [i_11 + 1])) + ((+(((/* implicit */int) ((11438506331314738390ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))))))))));
        var_29 = ((/* implicit */unsigned int) (unsigned short)19623);
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_2))));
        var_31 *= ((/* implicit */short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)4894)))))))));
    }
}
