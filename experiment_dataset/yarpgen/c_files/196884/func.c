/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196884
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
    var_17 = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)35048)))), ((-(((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = min((((/* implicit */long long int) (signed char)116)), (-7369115915188497200LL));
                arr_6 [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)255)) ? (6390887083273370293LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_10))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50322)) ? (((/* implicit */long long int) 100663296U)) : (-2213988754546524821LL))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 1]))) : (arr_9 [i_2 + 2]))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((arr_7 [i_2] [5LL]), (((/* implicit */long long int) var_4))))))) > (((min((12525208052734662895ULL), (var_2))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))))))))));
            }
        } 
    } 
}
