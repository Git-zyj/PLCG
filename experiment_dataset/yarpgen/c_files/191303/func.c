/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191303
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [i_4] = (+(((((/* implicit */_Bool) var_10)) ? (arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) -12)))));
                                arr_12 [i_1] [i_1] = var_4;
                                var_12 = ((/* implicit */unsigned int) 10);
                                var_13 = ((/* implicit */short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8)))))))));
                                var_14 ^= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) -12)) ? (((/* implicit */int) (short)4)) : (-12))));
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */_Bool) max((arr_1 [i_1 + 2] [i_1 + 2]), (arr_1 [i_1 + 3] [i_1 + 1])))) ? (((/* implicit */int) ((11) < (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 3])) || (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 3]))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) var_4);
                                arr_17 [i_0] [i_0] [i_2] [i_5] [i_1] = ((/* implicit */unsigned int) -36);
                                var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)32760)), (-12)))), ((~(min((((/* implicit */unsigned int) (short)-32760)), (var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(8437708635340646360LL)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) % (((((/* implicit */_Bool) 937134835)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
}
