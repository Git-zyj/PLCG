/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234279
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */short) arr_2 [i_0]);
                            arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_11 [i_2] [i_2 + 3] [i_2 + 2] [i_2 + 2]))))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 + 2]))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)39)) >> (((/* implicit */int) arr_1 [i_1])))), ((~(var_12))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2 + 3] [i_3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */unsigned char) var_0)))))))), ((-(((long long int) arr_1 [i_0 - 2]))))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [i_1] [i_0] [i_0 + 1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_0]))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_11))))) ? ((+(3652974007U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))));
                arr_16 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) ? (-875298695) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 + 3]), (((/* implicit */unsigned char) arr_0 [i_0 + 3])))))) : (max((((/* implicit */unsigned int) (short)7)), (1023U)))));
                arr_17 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_5)))), (min((((/* implicit */unsigned long long int) var_0)), (5500253335814328539ULL)))))) && (((/* implicit */_Bool) (+(3652974007U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+(min((((/* implicit */unsigned int) var_15)), (var_7)))))));
    var_17 = ((/* implicit */unsigned char) var_6);
    var_18 = ((/* implicit */long long int) ((signed char) var_3));
    var_19 = ((/* implicit */unsigned short) (+(min(((-(((/* implicit */int) var_2)))), (var_6)))));
}
