/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49147
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
    var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (1U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (370375436U) : (4294967295U))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (((4294967294U) | (1513483425U)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)42)) ? (-2842810422403480622LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((4063232U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13461)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((signed char)42), (((/* implicit */signed char) (_Bool)1))))))) : (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44562)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2768585206U)))) : (3827172124490590376ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 = min((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))), (1147943728U))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4018520046U)) ? (var_12) : (var_12)))))));
                                arr_13 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11895612923607199861ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                } 
                var_18 *= ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */_Bool) -25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)4)))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((_Bool) (-9223372036854775807LL - 1LL))))));
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1291470484662177319ULL)) ? ((+(((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))));
                            arr_19 [i_0] [i_6] [i_5] [i_1] = max((var_7), (((/* implicit */unsigned long long int) (signed char)-10)));
                            arr_20 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6774748572785664284LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (5239594621409534134ULL)))) || (((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))))))) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
}
