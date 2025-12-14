/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213609
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [10ULL] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 434479584330557014ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))))) : (8918945216960382233ULL))) | (((((arr_2 [i_0 + 2] [i_1]) && ((_Bool)1))) ? (min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))) : (min((var_9), (((12711629398399849498ULL) >> (((((/* implicit */int) (unsigned short)59877)) - (59865)))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((unsigned short) (((+(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_2] [i_1] [2ULL])) || ((!(arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17628))) != (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) : (var_3)))))) : (((/* implicit */int) ((_Bool) ((arr_5 [i_2] [i_1] [i_2]) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_8);
}
