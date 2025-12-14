/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46853
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (min((var_14), (((/* implicit */unsigned int) arr_0 [i_1])))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1 - 1])))))));
                    var_20 = ((/* implicit */unsigned short) (~(((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-126)) || ((!(((/* implicit */_Bool) var_18)))))))));
                                arr_17 [i_1] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_11 [i_0] [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (1022251748U)))));
                                arr_18 [i_3] [3ULL] [3ULL] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((var_10) ? ((+((-(((/* implicit */int) arr_11 [i_0] [i_3])))))) : (((((/* implicit */int) arr_8 [i_1 + 3])) / (((/* implicit */int) arr_8 [i_1 + 2]))))));
                                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((arr_6 [(_Bool)1] [i_1]), (((/* implicit */signed char) arr_14 [i_0] [i_3] [i_3] [i_5] [i_5 - 1]))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (((/* implicit */long long int) (-(((/* implicit */int) max((arr_15 [i_0] [i_3]), ((short)-23951)))))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_11 [(_Bool)1] [i_3])))) : (((((/* implicit */int) var_17)) % (((/* implicit */int) (unsigned short)42063)))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [5LL] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) + (38)))))) ? (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_24 -= ((/* implicit */short) var_15);
}
