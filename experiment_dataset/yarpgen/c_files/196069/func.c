/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196069
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
    var_18 = ((/* implicit */signed char) var_14);
    var_19 &= ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_14)) && (arr_1 [i_0] [i_0]))), (((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)11167))))) : (((/* implicit */int) (unsigned short)45590))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_7 [(unsigned short)21] [i_1] [(unsigned short)21])), (1050255277U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0])) ^ (((/* implicit */int) (signed char)-74))))))))));
                    arr_11 [i_1] [i_1 + 1] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) 1154568381U)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (arr_2 [i_2 - 1] [i_1]))) ? (((/* implicit */int) max((var_16), (((/* implicit */unsigned char) var_15))))) : (((/* implicit */int) ((short) var_16)))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (~(max((min((((/* implicit */long long int) var_13)), (7662915078036835629LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))));
}
