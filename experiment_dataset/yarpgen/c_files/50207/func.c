/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50207
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-((-(622946981U)))))) / (((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned long long int) 622946981U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48108)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (622946972U)))) : (min((((/* implicit */unsigned long long int) var_9)), (15788323854132699838ULL)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (3672020323U) : (((/* implicit */unsigned int) var_8))))))) / (((((/* implicit */_Bool) 3672020315U)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */short) var_0)))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33113)))))))));
    var_20 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])), (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((var_2) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (arr_3 [i_1])))));
                arr_8 [i_0] [12] = 4294967295U;
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16930))) : (var_3))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) var_12))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)16922)) && (((/* implicit */_Bool) var_1))))) << ((((-(-1336857580))) - (1336857561))))))));
}
