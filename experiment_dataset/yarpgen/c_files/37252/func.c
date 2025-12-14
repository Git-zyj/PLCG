/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37252
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
    var_17 = ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)36)), ((unsigned short)23379)))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)220)), ((short)22974)))) : (((/* implicit */int) (unsigned short)42157)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6584)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (12288U)))) ? (((((/* implicit */_Bool) (unsigned short)6584)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)42156)))) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 861555955U)) ? (var_13) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))) - (3141366363U))))))));
                                arr_13 [i_3 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_11 [(_Bool)1] [i_0] [i_0] [i_3 + 1]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) var_13))))) >> ((((~(var_13))) - (1153600917U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_5] [i_5])))), (((/* implicit */int) max((var_3), (var_3))))));
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9160097038073108538ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8))))) : (((((/* implicit */_Bool) var_13)) ? (5799556604452819251ULL) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)4)))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((4194240U) / (var_14))) : (min((((/* implicit */unsigned int) var_3)), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_13))));
}
