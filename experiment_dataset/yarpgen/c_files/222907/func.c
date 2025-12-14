/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222907
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) (+(var_0)))) + (((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) | (((6660408665550092639LL) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (short)-9862)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)8)))) : (((/* implicit */int) (unsigned char)65))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [(unsigned short)5]))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((short) min((arr_5 [10LL] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                    var_15 |= ((/* implicit */unsigned short) min((var_10), (min((var_4), (arr_0 [(signed char)9])))));
                }
            } 
        } 
    } 
}
