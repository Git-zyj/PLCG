/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42991
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
    var_20 = ((((/* implicit */long long int) ((((/* implicit */_Bool) 17965783092590002459ULL)) ? (((/* implicit */int) (short)48)) : (((/* implicit */int) (short)42))))) / (((((/* implicit */_Bool) var_2)) ? (min((var_16), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65535)), (var_18)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_17))));
                arr_5 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (max((arr_4 [i_0] [i_0] [(unsigned short)3]), (((/* implicit */long long int) (short)-43))))));
                var_22 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((long long int) 691959112U))), (min((var_2), (((/* implicit */unsigned long long int) (short)50)))))), (max((max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 3] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1023)) ? (1396707044) : (((/* implicit */int) (unsigned short)27156)))))))));
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)63)), (-1LL)))), (((((/* implicit */_Bool) (~(var_17)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)62103)), (arr_2 [i_0] [(_Bool)1]))) : (((/* implicit */unsigned long long int) -5790583762845310387LL))))));
            }
        } 
    } 
}
