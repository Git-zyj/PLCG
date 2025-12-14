/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218829
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) arr_2 [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_1 - 1] [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_3)))));
                                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-((+(((/* implicit */int) var_3)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (4144898425819051080ULL)));
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */short) ((unsigned short) arr_8 [i_0 + 1] [i_0] [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_2]));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                    arr_16 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) var_6);
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (-(4144898425819051095ULL))))));
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_20 [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_1 - 1])) ? ((+(((/* implicit */int) max((((/* implicit */short) var_5)), (arr_4 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2])))))) : (((/* implicit */int) var_6))));
                    var_15 = var_6;
                    arr_21 [i_0] [i_0 + 1] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                    var_16 = ((/* implicit */unsigned short) ((4144898425819051087ULL) == (14301845647890500536ULL)));
                }
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (short)22758)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_6))))))) : (((unsigned int) ((short) arr_10 [i_0 - 1] [i_0 - 1] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) var_4)))));
}
