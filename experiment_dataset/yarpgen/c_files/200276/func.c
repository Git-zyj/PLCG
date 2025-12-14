/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200276
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
    var_17 = var_3;
    var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) % (-650542519462169015LL))))), (((/* implicit */long long int) ((int) -650542519462169032LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_19 -= ((/* implicit */int) (signed char)-44);
                                var_20 = ((/* implicit */long long int) max(((+(((arr_1 [i_0] [i_0]) / (((/* implicit */int) arr_11 [i_0] [i_0])))))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                                var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 - 3]) < (arr_10 [i_2] [i_2] [i_2] [12LL] [i_2 + 1])))), (max((arr_10 [i_2] [i_2] [0ULL] [i_2] [i_2 - 1]), (arr_10 [(short)8] [i_2] [i_2] [i_2] [i_2 + 1])))));
                                var_22 &= 650542519462169031LL;
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 - 3] [(signed char)8])) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) arr_11 [i_0] [i_0])) / (1886368597))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (11618460146043547049ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (-2147483644) : (((/* implicit */int) (unsigned short)34041)))))));
                                var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-650542519462169049LL), (((/* implicit */long long int) (unsigned char)64))))) ? (((/* implicit */int) arr_11 [i_1] [i_5])) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [5ULL] [0ULL])) > (var_7))))))) ? (min((arr_1 [i_3 - 2] [i_3 - 4]), (((/* implicit */int) arr_2 [i_3 + 1])))) : (min((((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_12 [i_3] [i_3] [4] [i_3] [i_3]))))), (max((-2147483640), (((/* implicit */int) var_8))))))))));
                            }
                            var_26 ^= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) -650542519462168995LL)), (3144181998838017776ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(short)11] [i_1] [i_3 + 1] [(signed char)10] [3] [i_0])) ^ (((/* implicit */int) (signed char)63)))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) var_0);
                var_27 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) ^ (650542519462169032LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) (signed char)-101)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_12))))) && (((/* implicit */_Bool) var_5)))))));
}
