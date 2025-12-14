/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/398
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)124)))) + (arr_0 [i_0]))), (((((/* implicit */_Bool) ((int) (signed char)112))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)124)) - (((/* implicit */int) (short)5085))))) : (arr_0 [i_0])))));
        arr_4 [i_0] = min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */unsigned int) (signed char)121)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (8050431655886752131ULL));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) 3201312666U);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (65535ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!((!(arr_8 [21U] [i_1])))))), (((long long int) ((unsigned long long int) 80543680U)))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14630)) ? (((/* implicit */long long int) arr_9 [i_1] [i_1])) : (8174165917763814809LL)))), (16523511012845784185ULL))), (((/* implicit */unsigned long long int) min((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1])))))))));
                arr_12 [i_2] [i_2] = ((/* implicit */int) (signed char)-90);
            }
        } 
    } 
    var_21 = max((0ULL), (((/* implicit */unsigned long long int) (short)12752)));
    var_22 = min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((signed char) var_17))));
}
