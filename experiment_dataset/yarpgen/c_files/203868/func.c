/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203868
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_6))) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (min((min((((/* implicit */unsigned long long int) (short)-15515)), (12774563803596290412ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0])))))))));
                    var_11 = (-(((/* implicit */int) (short)-14394)));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((((arr_6 [i_1] [i_1]) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 1589667077))))))));
                        var_13 += ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((signed char) var_8))) && (((/* implicit */_Bool) var_7)))));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_3])), ((unsigned short)13640)))), (arr_7 [i_3] [i_3] [i_2] [i_0] [i_0]))))));
                        var_15 = (+(min((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_4)))), (((((/* implicit */int) (short)-26635)) & (((/* implicit */int) (unsigned short)26663)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_6))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)51896)))))));
                        var_17 = ((unsigned short) (!(((/* implicit */_Bool) -1662826411))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_1)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned long long int) var_9))))))) : (var_0)));
    var_19 |= ((/* implicit */int) max((var_3), (((/* implicit */unsigned long long int) max((var_9), (var_9))))));
}
