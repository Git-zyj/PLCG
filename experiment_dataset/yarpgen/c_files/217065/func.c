/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217065
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_19 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned short)473))))) ? (((/* implicit */int) arr_1 [i_0] [(signed char)14])) : (max((((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) 2316639501U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))))));
        arr_3 [2U] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) / (((/* implicit */int) arr_1 [i_0] [3LL]))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51511))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (max((1040187392U), (((/* implicit */unsigned int) (short)2229)))))), (((/* implicit */unsigned int) arr_6 [i_0] [i_0]))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)65535);
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967295U)) % (-1LL)))) | (arr_4 [i_2 + 1] [i_2 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (short)-25916))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */_Bool) (unsigned short)65535);
        var_24 = ((/* implicit */int) (+(arr_9 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 1])));
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_2))))));
        var_26 -= ((/* implicit */unsigned short) var_15);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((6318863469776253092LL), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) ^ (arr_16 [i_5] [i_5])))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_18 [i_5] [i_5])))) : (var_13))))));
        var_29 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (arr_2 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_5])))))))));
    }
    var_30 *= max((((/* implicit */long long int) var_16)), ((-(var_5))));
}
