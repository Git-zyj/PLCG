/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202824
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
    var_18 = ((((/* implicit */_Bool) (short)1792)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (16777215)))) == (((/* implicit */int) ((unsigned short) var_13))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) ((1521010544U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)2630)))));
                    var_20 *= ((/* implicit */signed char) (~((~(-3372279583999232395LL)))));
                    arr_7 [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 3])) ? (max((((/* implicit */unsigned long long int) max((var_0), (arr_1 [i_0] [i_0])))), (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_0 [i_2] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
                }
                arr_8 [10U] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_16)))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3372279583999232390LL)) ? (1895072555204699004ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1 + 3] [i_1 + 2])))) : (arr_0 [i_1 + 3] [i_1 - 1]))))));
            }
        } 
    } 
}
