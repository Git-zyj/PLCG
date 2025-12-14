/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240654
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
    var_13 = var_4;
    var_14 = ((/* implicit */unsigned short) ((_Bool) var_7));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1] [i_2 + 1])) & (arr_5 [i_0] [i_2])));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_5 [i_1 + 2] [i_1]))), (((arr_3 [i_1 + 2] [i_2] [i_2 - 1]) ? (arr_5 [i_1 + 2] [i_2 - 1]) : (arr_5 [i_1 + 2] [(unsigned char)10])))));
                    var_18 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)59))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)5)), ((unsigned short)61946))))) : (134217727ULL))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)81))))), (min((var_11), (((/* implicit */unsigned int) (unsigned char)182)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((-483574117) != (((/* implicit */int) (short)14897))))) : (((((/* implicit */int) var_7)) / (((/* implicit */int) var_10)))))))));
}
