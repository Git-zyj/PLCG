/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3771
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
    var_17 = ((/* implicit */short) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38))))), ((+(((/* implicit */int) (unsigned char)19))))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_5)))) != (((/* implicit */int) (unsigned short)48172))))), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) var_15)) : (5049048784104934941ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_6))) : (13397695289604616675ULL)))));
    var_19 = ((507935692) % (((/* implicit */int) (unsigned short)34036)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) & (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0 + 1] [i_1])), (arr_4 [i_0 + 1] [(unsigned char)8])))) : (((/* implicit */int) (unsigned char)150)))) + (((((/* implicit */_Bool) -1991832509)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 2]))))));
                    var_21 = ((/* implicit */unsigned char) max((((unsigned short) (signed char)93)), (((/* implicit */unsigned short) (((+(var_15))) != (((/* implicit */int) var_12)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */int) (unsigned char)106);
                        var_23 = ((/* implicit */signed char) arr_4 [i_1 - 1] [i_0 + 1]);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_1 + 1]) ? (4038380535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1])))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_6 [(signed char)2] [i_0 + 1] [i_0 - 1] [10LL])))))));
                    }
                }
            } 
        } 
    } 
}
