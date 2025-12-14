/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22620
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
    var_20 = ((var_19) & ((((!((_Bool)1))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0] [i_1] [5U])) & ((-(((/* implicit */int) (_Bool)1)))))) % ((((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_7 [8U] [i_0])))) ^ (((/* implicit */int) var_8))))));
                var_21 = var_8;
                arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) arr_13 [(_Bool)1]))));
                                var_23 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((var_19) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))), (((/* implicit */int) ((_Bool) ((var_19) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_16 [i_1] [i_4] [(_Bool)1] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_4]))) ? (((((/* implicit */_Bool) ((unsigned int) 2127090720U))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (arr_6 [i_0]))))) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_1)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) max((var_9), (var_9))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_25 [(_Bool)1] [(_Bool)1] [i_5] [i_6 - 2] [(_Bool)1] |= var_14;
                                var_24 += ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_6 - 2]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_5 - 4] [i_5 - 3])) & (((/* implicit */int) arr_17 [i_5] [i_1] [i_5]))))) ^ ((~(var_13)))))));
                                var_25 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) * (((arr_19 [(_Bool)1] [18U] [i_6 + 1] [(_Bool)1]) ? (arr_20 [17U] [i_1] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
