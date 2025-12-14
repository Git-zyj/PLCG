/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213120
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (var_4)))), (min((var_1), (var_16)))))) | ((+(min((3326185620545278111ULL), (((/* implicit */unsigned long long int) var_12))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((2214463811U), (((/* implicit */unsigned int) var_0)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_0)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) min((537581695), (((/* implicit */int) var_9))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 4160496390892797107ULL)) ? (-1) : (-1164405856)))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_23 = ((/* implicit */short) arr_2 [i_1]);
                var_24 = ((/* implicit */short) (-(var_13)));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1164405837)) ? (arr_0 [i_2]) : (var_16))) & (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) var_4))))))))) ? (max((((/* implicit */unsigned int) (unsigned short)65535)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_7 [i_0 - 1] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (((_Bool) 1164405856))))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1164405856))))) >> (((((((/* implicit */_Bool) var_15)) ? (1164405845) : (((/* implicit */int) var_2)))) - (1164405814)))));
                arr_13 [i_1] = ((/* implicit */long long int) var_5);
                arr_14 [i_0] [i_1] [i_0] [2ULL] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_0 + 4] [i_0 - 3])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 4])) - (1384)))));
            }
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1164405852)) && (((/* implicit */_Bool) -1164405840))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [1U])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        }
        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            arr_17 [i_0] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1164405848)) ? (1065353216U) : (((/* implicit */unsigned int) 1164405873))));
            arr_18 [i_4 + 1] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((int) var_15)) : (((/* implicit */int) var_12))))));
            var_27 = ((/* implicit */unsigned int) var_9);
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1164405823)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)255))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_4]))))), (max((((/* implicit */long long int) var_12)), (arr_16 [i_0] [i_4 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1164405823)) ? (((/* implicit */unsigned int) 1164405867)) : (3711944370U))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_22 [11] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((1109469197084813499LL) & (((/* implicit */long long int) 3229614063U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1164405845)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))))) ? ((~(((unsigned int) (unsigned short)35895)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 32073033U))))));
            arr_23 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_19)))))));
        }
        var_29 = ((unsigned int) ((unsigned char) ((int) (_Bool)0)));
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), ((signed char)-22))))) : (((((/* implicit */_Bool) var_13)) ? (arr_26 [i_6] [i_6]) : (((/* implicit */long long int) -1164405848)))))), (((/* implicit */long long int) var_4))));
        var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_8)) << (((((-1LL) + (30LL))) - (11LL))))))) || ((!((!(((/* implicit */_Bool) var_15))))))));
        var_32 = ((/* implicit */signed char) (+(((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) / (min((((/* implicit */long long int) (_Bool)1)), (var_18)))))));
        var_33 -= var_2;
    }
}
