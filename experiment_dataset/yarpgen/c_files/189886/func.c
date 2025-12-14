/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189886
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_9 [i_3 + 2] [i_2 - 1] [i_4 - 1] [i_3 + 1] [i_4])))) || (((((/* implicit */_Bool) (unsigned short)50598)) || (((/* implicit */_Bool) (short)26089))))));
                                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_12)))) * (((((/* implicit */int) var_12)) % (((/* implicit */int) var_11))))));
                                arr_13 [5U] [4U] [i_0] [4U] [4U] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-51)) < (((/* implicit */int) (signed char)-27))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -631313874)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) (signed char)-123)) + (((/* implicit */int) (unsigned short)866)))) - ((+(((/* implicit */int) (_Bool)1))))))));
                arr_15 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((arr_9 [i_1] [i_1 + 1] [i_0] [i_0 + 2] [i_0 - 2]) << (((arr_9 [i_0 + 1] [i_1 + 4] [i_0] [i_0] [i_0 + 1]) - (3844963619U)))))));
            }
        } 
    } 
}
