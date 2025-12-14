/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25835
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9122))) * (max((1905476289U), (((/* implicit */unsigned int) 16320)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((unsigned short) -402368779))), (arr_0 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL)))))));
        var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((arr_6 [i_1 - 1] [i_1]), (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1])))))) ? ((-(((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2131706431U)) || (((/* implicit */_Bool) 215588682U))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */int) (short)9099)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16947)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) (short)3974)) : (((/* implicit */int) (signed char)18))))));
        var_21 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned int) var_13))))) : (arr_3 [i_2]));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_5]))) / (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9100))))), (((((/* implicit */_Bool) arr_14 [i_3] [i_5])) ? (arr_13 [i_3] [i_4] [i_5]) : (((/* implicit */unsigned long long int) arr_14 [i_5] [i_4])))))));
                    var_22 |= ((/* implicit */unsigned short) var_16);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)40604)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)9122)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (short)32767))))), (var_10))) : (((/* implicit */long long int) (~((~(arr_14 [i_4] [i_3])))))))))));
                    arr_17 [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((int) max((arr_15 [i_3]), (arr_15 [i_3]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_2);
}
