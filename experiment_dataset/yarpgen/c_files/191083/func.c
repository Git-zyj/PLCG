/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191083
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
    var_13 += ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_12 [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1])))));
                                arr_13 [i_4 - 2] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_3])), (max((arr_7 [i_0] [5U] [(_Bool)1] [(signed char)6]), (arr_2 [i_1] [i_0 - 1])))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_6 [i_0 - 1] [(short)2] [i_3]), (arr_6 [i_0 + 1] [i_0] [i_0 - 1]))))));
                                arr_14 [i_0] [i_0 + 1] [1ULL] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */signed char) (~(((arr_0 [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_0 [i_3] [i_4 - 1]))))));
                                var_15 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (short)467);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((arr_12 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1] [i_1 - 1])) < (((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((var_3), (((/* implicit */long long int) var_10)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : ((+(((int) var_2))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-467)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)251))));
}
