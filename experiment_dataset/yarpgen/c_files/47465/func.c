/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47465
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                    var_15 = ((/* implicit */unsigned int) var_2);
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 + 1])) ? (arr_0 [i_2 - 2] [i_2 - 1]) : (arr_0 [i_2 - 2] [i_2 - 1])));
                    arr_11 [8U] [i_1] [i_2 + 1] = ((/* implicit */_Bool) min((((int) arr_0 [i_2 - 1] [i_2 - 2])), ((-(((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_16 = min((((((/* implicit */_Bool) 937906254)) ? (((/* implicit */int) (unsigned short)448)) : (((((/* implicit */_Bool) (unsigned short)440)) ? (-566302708) : (1439303951))))), (((/* implicit */int) max(((unsigned short)65105), ((unsigned short)65095)))));
                        arr_15 [i_0] [i_0] [i_0] [19U] [19U] = ((/* implicit */_Bool) var_0);
                    }
                }
            } 
        } 
    } 
    var_17 = var_9;
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = min((min((max((var_3), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_0)) < (var_10)))))), (((/* implicit */unsigned int) (~(((1015971602) << (((((/* implicit */int) var_11)) - (31683)))))))));
}
