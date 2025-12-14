/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241058
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (~((~(5083229825683427936ULL)))));
        var_21 += ((/* implicit */unsigned short) var_5);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(var_19)))) ? (((/* implicit */int) min(((short)25501), (((/* implicit */short) (unsigned char)220))))) : (((/* implicit */int) (signed char)34)))))))));
        var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) -1808922717)), (var_15))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)127)))))))), (((((/* implicit */_Bool) (+(5083229825683427918ULL)))) ? (((13363514248026123683ULL) >> (((13363514248026123700ULL) - (13363514248026123673ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)25501)) << (((arr_4 [i_1 + 4]) + (3422867554426946070LL)))))));
        var_25 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25518))) > (14073600458693346801ULL)))), ((-(((int) 1134907106097364992LL))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
        arr_9 [(short)0] [(short)0] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-25502)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (737080820969161158ULL)));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_26 *= ((/* implicit */int) (unsigned char)0);
        arr_12 [(unsigned char)1] &= ((/* implicit */unsigned char) ((((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) ((short) (unsigned char)180))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-25501)) ? (7251086510589378156LL) : (((/* implicit */long long int) 1166317897))))))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)64))))))) ? (((((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))))));
    }
    var_28 = min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (var_4))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 729135574010919052ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)1))))) > (((var_13) ? (1456806360U) : (((/* implicit */unsigned int) 0)))))))) : ((+((+(var_12)))))));
}
