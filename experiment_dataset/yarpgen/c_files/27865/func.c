/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27865
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (short)-4438)) ? (3096321443U) : (((/* implicit */unsigned int) 15)))), (((/* implicit */unsigned int) var_11))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [(signed char)1] [i_2] [i_2] [i_3] [i_3] = max((((((/* implicit */_Bool) min((((/* implicit */int) (short)4421)), (-1)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_3 [i_0]))))), (((long long int) max(((short)31174), (((/* implicit */short) var_6))))));
                                arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0])) : ((+(((/* implicit */int) ((unsigned char) arr_9 [5] [i_3] [i_2] [8LL])))))));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4438)) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (((/* implicit */int) arr_7 [i_4])))))) + (((((/* implicit */_Bool) 0LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) 6194362627488346039LL)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_7 [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(var_13)))))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) - (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_12 [i_1] [i_1] [i_1] [i_2]) : (arr_3 [i_2]))))));
                    var_16 = ((/* implicit */short) (~(((/* implicit */int) (signed char)101))));
                }
                var_17 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (1208493330)))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_0] [(short)16] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) min((arr_14 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */int) (short)4032))))) : (4294967295U))));
                arr_17 [(short)3] = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_10);
}
