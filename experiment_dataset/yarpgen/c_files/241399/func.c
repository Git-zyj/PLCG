/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241399
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) (!(((_Bool) (+(arr_4 [i_1]))))));
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(-617619283)))), (var_16)));
                arr_5 [(_Bool)0] = ((/* implicit */_Bool) var_2);
                var_19 = ((/* implicit */unsigned long long int) ((((arr_2 [i_0 + 2] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0 - 2]))) : (arr_4 [i_0 - 2]))) * (((/* implicit */long long int) ((/* implicit */int) (!((!(var_3)))))))));
            }
        } 
    } 
    var_20 = (~(var_0));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (1008806316530991104LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (min((((/* implicit */unsigned long long int) arr_7 [i_2] [(short)4])), (2424918834439210072ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-22997)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) 1994716433U)) <= (11282003724506145223ULL))))))) : ((+((+(arr_7 [i_3] [3])))))));
                var_22 = ((/* implicit */unsigned int) ((-1580315677) <= (min((617619305), (((/* implicit */int) (short)-17))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_2])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_13))));
}
