/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19323
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [13]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [1U] [1U])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((((/* implicit */int) (short)-9952)) ^ (((/* implicit */int) arr_4 [i_1])))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3575670380U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1 + 2]))))) != ((-(var_2))))))) : (((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_2 [i_1 - 4] [i_1 - 4]))))) : (min((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) * (((/* implicit */int) arr_3 [i_1] [i_1 - 1])))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1 - 1])) > (((/* implicit */int) arr_0 [i_0] [i_1 - 4])))))));
                var_15 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_4 [i_0]))))) != (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 3] [i_1])) << (((((/* implicit */int) var_6)) + (22930)))))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (1622875787U)))) ? ((+(2097148LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 4] [i_1]))))) > (max((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_3])))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_0] [i_2])))) & (((/* implicit */int) arr_1 [i_0] [i_1 - 4]))))) ? (var_8) : ((~(((arr_9 [i_3]) / (((/* implicit */long long int) arr_2 [i_2] [i_1]))))))));
                            var_17 ^= ((/* implicit */short) ((((var_2) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) 16150153609859521997ULL))) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1])))) + (70)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (unsigned short)0))))), ((+(var_5)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))))) <= (1152921229728940032ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */long long int) var_5))))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) var_4)))))))))));
}
