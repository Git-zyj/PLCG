/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215013
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                var_11 *= ((/* implicit */signed char) max((((_Bool) 18446744073709551614ULL)), (((((/* implicit */_Bool) max(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)0)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)5593)), (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)186))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (18039572735945447362ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) 2037134777)) + (10589393885838627926ULL)))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_3 + 2] [i_2])) : (((/* implicit */int) (short)-6410))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)139)))), (((((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_1] [i_3 + 2]))))));
                            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((0ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_3 + 4])) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (((/* implicit */int) arr_7 [i_1 + 1])))))));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)22786)) << (((((/* implicit */int) max((arr_6 [(_Bool)0] [i_1 + 1]), (var_7)))) - (4793))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)14828)) : (((((/* implicit */_Bool) arr_2 [(short)10])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_2] [i_2])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
