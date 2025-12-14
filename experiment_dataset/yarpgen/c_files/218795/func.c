/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218795
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
    var_15 = ((/* implicit */short) 7028755042087661428ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((long long int) 7U)) : (max((((/* implicit */long long int) (signed char)15)), (arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_19 [i_2] [(unsigned short)13] [(signed char)14] [i_2] = ((/* implicit */int) arr_15 [(unsigned char)18] [(unsigned char)18]);
                                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)3722))));
                            }
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_3 + 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_3 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)26), (var_3))))) : (max((((/* implicit */unsigned long long int) (unsigned short)65434)), (7028755042087661428ULL))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) 4294967282U))))))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [(short)16])), (var_10)))), (max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_0])), (arr_18 [i_1] [i_0] [1LL]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (var_0)))), (var_9))), (min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34926))))))))));
}
