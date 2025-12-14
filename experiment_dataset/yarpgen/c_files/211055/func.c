/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211055
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4227858432U)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_21 = (-(var_18));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            var_22 = arr_0 [i_3] [i_0];
                            var_23 -= (+(arr_8 [i_0] [0U] [i_3] [i_4]));
                            var_24 = ((unsigned int) arr_9 [i_0 + 4] [i_0 + 1] [i_2] [i_4 + 1]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_25 -= (~((~(var_0))));
                            var_26 = (i_2 % 2 == 0) ? (((arr_8 [i_2 - 1] [i_2] [i_2] [i_0 + 1]) >> (((arr_8 [i_2 + 1] [i_2] [i_0] [i_0 + 3]) - (1624952447U))))) : (((arr_8 [i_2 - 1] [i_2] [i_2] [i_0 + 1]) >> (((((arr_8 [i_2 + 1] [i_2] [i_0] [i_0 + 3]) - (1624952447U))) - (3556848361U)))));
                            var_27 = ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_2] [i_0] [i_0] [i_2] [i_0])) ? (3979373428U) : (arr_6 [i_0 + 2] [i_2] [i_2 + 1] [i_2 + 1]));
                            var_28 |= var_5;
                        }
                        for (unsigned int i_6 = 4; i_6 < 12; i_6 += 2) 
                        {
                            var_29 |= ((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6 - 4] [i_6] [8U]) >> (((arr_10 [i_6 - 4] [i_6]) - (3466110062U))));
                            var_30 = (+(arr_4 [i_0] [i_6 - 4] [i_0 + 2]));
                        }
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            var_31 = (+(arr_7 [i_2]));
                            var_32 *= (+(arr_17 [12U]));
                        }
                        var_33 = arr_17 [i_2];
                        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 + 2] [i_2 - 1]))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3279098465U) << (((arr_9 [i_1] [8U] [8U] [i_0]) - (1843235879U)))))))))));
            var_36 = ((((/* implicit */_Bool) ((arr_18 [i_1] [i_1] [2U] [2U] [i_0] [i_0 + 4]) ^ (var_1)))) ? (arr_1 [i_0]) : ((+(0U))));
        }
    }
}
