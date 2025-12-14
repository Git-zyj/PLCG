/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206519
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 5136723333623856362ULL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)11))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_0] [i_0 - 2] [i_3] = ((((/* implicit */_Bool) ((5136723333623856356ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50353)))))) ? ((((~(((/* implicit */int) (_Bool)1)))) % (var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1])))))));
                            var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) arr_1 [i_0] [i_0]))), (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1])))));
                            var_17 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_0]);
                            arr_10 [(unsigned char)4] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_8 [i_0 - 1] [i_1] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)56037)), (var_1)))), (max((((/* implicit */unsigned long long int) (signed char)8)), (13310020740085695254ULL)))))) ? ((+(((/* implicit */int) ((signed char) var_0))))) : (((/* implicit */int) var_4))));
}
