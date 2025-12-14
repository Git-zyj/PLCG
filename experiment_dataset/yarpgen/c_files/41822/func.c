/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41822
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
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)18822)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (arr_6 [i_0]))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((short) (-(1948177148)))))));
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    arr_15 [i_3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((233433655U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_7 [i_1] [i_3]))))))))));
                }
                var_20 -= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0])) : (var_11))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) == (arr_9 [i_0] [i_0] [i_1]))))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (100663296LL)))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) 233433657U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)53)) : (arr_2 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54234)) & (((/* implicit */int) var_3))))) <= (((-4437161491833132637LL) & (((/* implicit */long long int) 4061533641U)))))))) : (var_7)))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((unsigned short) var_8));
}
