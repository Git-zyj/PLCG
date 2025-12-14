/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190160
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
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)12783)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-3))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)4)))), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-12784)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (var_16) : (var_12)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_11))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) arr_3 [i_1 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))))))) : (((((/* implicit */_Bool) (short)18082)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37803))) : (-1482949099358832164LL)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) min((((int) arr_3 [i_1 - 1])), (((/* implicit */int) (((+(var_7))) < ((+(var_3))))))));
                    var_25 *= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (signed char)11)), (min((((/* implicit */unsigned long long int) (signed char)66)), (arr_6 [i_3]))))) * (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) var_4);
            arr_15 [i_1] [(short)5] [i_1] = ((/* implicit */unsigned short) (signed char)127);
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_26 -= ((/* implicit */unsigned short) ((var_2) + (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-84)))))));
            arr_18 [i_1] [i_1] = ((/* implicit */signed char) (short)-18083);
            var_27 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 + 1]))));
            arr_19 [i_1] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255))));
            arr_20 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((7136949522794066201ULL), (arr_13 [i_1] [i_1])))) ? (((int) arr_9 [i_5])) : (((/* implicit */int) (short)18082)))))));
        }
        arr_21 [i_1] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((long long int) 9223372036854775807LL))))) : (((1015693752883272239LL) / (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((((min((var_4), ((_Bool)1))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned char)63))))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
        var_29 *= ((/* implicit */short) var_10);
    }
}
