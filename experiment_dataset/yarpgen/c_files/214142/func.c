/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214142
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
    var_13 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)0))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) min((var_1), ((unsigned short)44140))))));
    var_14 *= var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] = ((/* implicit */unsigned short) min((max((arr_5 [i_0] [i_1] [i_2 + 1] [i_3 - 1]), (((/* implicit */long long int) min((arr_7 [i_0] [i_0]), (var_7)))))), (((/* implicit */long long int) (unsigned short)65535))));
                            arr_10 [i_0] = ((/* implicit */unsigned short) var_11);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1]))))) ? (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(_Bool)1])))))) : (((((((/* implicit */_Bool) (unsigned short)5163)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) / (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1])))))))));
                var_16 = ((/* implicit */unsigned short) (~(((((-551138841032530351LL) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (min((arr_3 [i_0] [i_0 - 1] [i_1]), (((/* implicit */long long int) arr_8 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [(unsigned short)4] [i_0 - 1] [i_0 - 1] [(unsigned short)4])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
            }
        } 
    } 
}
