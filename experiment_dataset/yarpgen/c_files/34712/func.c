/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34712
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) 17358253969464365226ULL);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)51823)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_12)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) 17358253969464365216ULL)))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)12843)), (17358253969464365226ULL)))) ? (((((/* implicit */_Bool) (unsigned short)12843)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned int) (unsigned short)12843)), (arr_0 [i_0])))))) ? (max((min((17358253969464365226ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) (unsigned short)52668)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)(-32767 - 1)), ((short)-25044))))) * (((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12873))))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_1 - 1])))) ? (((((/* implicit */_Bool) (short)11896)) ? (((/* implicit */int) arr_10 [i_1 - 1])) : (((/* implicit */int) arr_10 [i_1 - 1])))) : (((/* implicit */int) min(((signed char)-13), (var_7)))))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((short) arr_9 [i_1] [10LL] [i_3])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned int) arr_7 [i_4 - 1] [i_4 - 1]);
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10862)) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3618059917U))))))));
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)7)) ? (((/* implicit */long long int) arr_6 [i_4 - 1] [i_4])) : (-2305444473575728936LL)))));
    }
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)12873))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2635122032U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)14)) ? (-8927067784796568586LL) : (((/* implicit */long long int) 1664587028U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12813120101264359838ULL)));
    var_23 = ((/* implicit */unsigned short) (unsigned char)90);
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_12))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)20952)) : (((/* implicit */int) (unsigned short)15095))))) ? (var_3) : (((/* implicit */long long int) 1408628352U))))));
}
