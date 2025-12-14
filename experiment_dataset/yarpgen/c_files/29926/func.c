/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29926
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_4 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        arr_11 [i_3 - 1] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2 + 2])) ? (4024032112U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))))) ? (((long long int) ((arr_8 [i_3 + 1] [i_2] [i_1 - 1] [(short)7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (270935185U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
                        var_15 = ((/* implicit */long long int) (unsigned char)216);
                        arr_12 [i_3] [i_2] [i_1] [11U] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)241))))));
                        arr_13 [i_0] [i_1] [i_2 + 2] [i_2 - 3] [(short)9] &= ((/* implicit */long long int) 4294967295U);
                        arr_14 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned short) 270935159U);
                    }
                    arr_15 [2LL] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))))))), (var_8)));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) arr_5 [i_0] [(unsigned short)4] [i_0]);
                        arr_18 [i_0] [i_4] [i_2] [i_4] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -4133875749291243513LL)) ? (4024032110U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : ((~(270935185U))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        var_17 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                    arr_19 [(unsigned char)6] [0ULL] [i_1] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1075))) == (((((/* implicit */_Bool) -1954191732045046225LL)) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : ((~(17582435967030097519ULL)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_12)) ? (4133875749291243494LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10380))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4294967280U))))));
        var_19 = ((/* implicit */unsigned char) -2103014544070674806LL);
    }
    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        var_20 = ((/* implicit */long long int) (unsigned short)37714);
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1448332082), (((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) 270935183U)) & (((((/* implicit */_Bool) -7204226072406902548LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8915))) : (8984318874665207533LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_0)))))))));
    }
    for (short i_6 = 2; i_6 < 19; i_6 += 2) 
    {
        arr_25 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)32768))))), ((+(270935174U)))));
        arr_26 [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) & (6575079094507110024LL)))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (signed char)0))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_30 [(_Bool)1] = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) (signed char)120)) : (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) >= (((/* implicit */int) arr_23 [i_7]))))) : (((/* implicit */int) arr_5 [i_7] [i_7] [(unsigned char)0]))))));
        arr_31 [i_7 + 1] [4LL] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)27)))));
    }
    var_22 |= ((/* implicit */short) (+((+((+(-679896930979152753LL)))))));
    var_23 = ((/* implicit */long long int) ((short) ((short) ((((/* implicit */_Bool) -955833373002870094LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (3585267247U)))));
}
