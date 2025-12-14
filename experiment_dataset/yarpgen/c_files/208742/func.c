/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208742
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((4139242455386574938ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (var_6)))), (((var_5) >> (((var_6) - (2816003425U)))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((int) var_6)) == (((/* implicit */int) min((((/* implicit */unsigned short) ((short) var_0))), (min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))))))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> ((((+(2147483647))) - (2147483630)))))) : (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) 4139242455386574939ULL)) ? (((/* implicit */int) arr_4 [8] [i_0 + 3] [(unsigned char)0])) : (((/* implicit */int) (unsigned short)65521)))), ((-(arr_2 [i_0] [i_0])))))));
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_1 [i_0 + 3]), (arr_1 [i_0 + 1]))))));
            }
        } 
    } 
}
