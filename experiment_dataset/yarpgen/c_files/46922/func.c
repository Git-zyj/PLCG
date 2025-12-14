/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46922
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
    var_10 *= ((/* implicit */unsigned char) min((93264126012501631ULL), (((/* implicit */unsigned long long int) (signed char)48))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
                    var_12 = ((/* implicit */unsigned char) arr_5 [i_2]);
                    arr_6 [i_1] [i_0] [i_2] [i_0] &= ((/* implicit */short) arr_5 [i_1]);
                    arr_7 [i_2] [i_0] = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((7456162307475787454ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) ? (min((((((/* implicit */int) var_3)) << (((arr_5 [i_2]) - (3469231972U))))), (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_7)))) ? (((/* implicit */int) (signed char)46)) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_2))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((7456162307475787454ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))))) ? (min((((((/* implicit */int) var_3)) << (((((arr_5 [i_2]) - (3469231972U))) - (2115904995U))))), (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_7)))) ? (((/* implicit */int) (signed char)46)) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((var_8) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) var_6))))) : (((/* implicit */int) (((-(var_1))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35751)))))))))))))));
    var_14 = ((/* implicit */unsigned char) min((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) var_5))));
}
