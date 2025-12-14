/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195441
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
    var_11 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))), (((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */unsigned long long int) var_2))))))) & (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 204905457)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9166322591376931894LL))), (((/* implicit */long long int) var_8)))))));
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19590)) ? (-252471103) : (((/* implicit */int) (short)19616))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) 252471092)) ^ (214157208U)))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_3 [i_1]))) ^ (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(short)4])))))))))))));
                    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((unsigned int) (short)-19590)) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [12ULL] [i_1]), (var_0)))))))), ((~(((unsigned long long int) var_10))))));
                }
            } 
        } 
    } 
}
