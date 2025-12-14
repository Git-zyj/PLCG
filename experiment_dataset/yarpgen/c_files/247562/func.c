/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247562
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((var_12) >> (((var_0) - (1288511341U))))))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_22 = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53773))) + (((((/* implicit */_Bool) (unsigned short)34621)) ? (1333761971U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (max((((((/* implicit */_Bool) (unsigned short)30918)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30912))) : (var_12))), (((unsigned int) var_12)))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) min(((unsigned short)34621), (((unsigned short) (unsigned short)30914))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34628))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)30934)) ? (((/* implicit */int) (unsigned short)34621)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)34618)) - (34612)))));
                        var_24 += ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */int) (short)-4321)) : (((/* implicit */int) (unsigned short)5712)))) >> (((arr_7 [i_1 - 1] [i_0]) - (5140114839163639297LL)))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)34601))))))))));
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)30918))))))))));
                        var_27 = max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3762651209U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40720))))))) : (4294967280U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)36635))))));
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(var_6)))), (min((((((/* implicit */_Bool) (unsigned short)34616)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34602))))), (((/* implicit */unsigned int) (unsigned short)59824))))));
                        arr_17 [i_0] [i_0] [i_2] [i_4] |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_19)) >> (((/* implicit */int) var_19)))) + (((/* implicit */int) max((var_7), (arr_16 [i_0] [i_4]))))));
                        arr_18 [i_2] = ((/* implicit */short) (~(((/* implicit */int) max(((unsigned short)30921), ((unsigned short)59823))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((var_19), (var_15))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (23U))) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30935))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)59824)), (6493479442924389845LL)))) ? (-8586717965559537813LL) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)48022)) - (48019))))))))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (var_2)));
}
