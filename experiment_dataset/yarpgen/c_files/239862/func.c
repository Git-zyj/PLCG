/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239862
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
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */int) (((~(var_7))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11963)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) ((signed char) (~(arr_11 [i_3 - 2] [0ULL] [i_3] [i_3 - 1] [i_3 - 3]))));
                                var_14 = min(((~(((((/* implicit */_Bool) var_1)) ? (arr_11 [i_0] [i_0] [i_2] [8ULL] [i_4]) : (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) -759072493205530914LL)));
                                arr_14 [6ULL] [i_1] [i_1] [9] [i_1] [12LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1728248264)) ? (-1728248264) : (-1809340839)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        arr_18 [i_1] [i_2 + 2] [(signed char)14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [6U] [i_0] [i_0])) >> (((var_2) - (353697252U)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (956470262U)))) : (min((((/* implicit */long long int) var_0)), (3864581395501497108LL)))))) / (((unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16252928)) ? (2190506717U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8262))))), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2]))))) ? (min((arr_17 [12ULL] [i_2 + 1] [i_0] [(unsigned short)6] [i_0] [i_0]), (arr_17 [i_2] [i_2 + 2] [(unsigned short)5] [i_0] [(signed char)9] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [(unsigned char)12] [(signed char)4])))) ? (((((/* implicit */_Bool) -1728248250)) ? (((/* implicit */int) arr_6 [i_0] [16ULL] [i_2] [i_5])) : (-1809340839))) : (1123422781)))))))));
                        var_16 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (arr_0 [i_2 - 1]) : (((/* implicit */unsigned long long int) 4075453660U)))), (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_2 + 1] [i_2])), (((17486626121945385948ULL) * (((/* implicit */unsigned long long int) -145431088))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_6 [16ULL] [i_2 - 1] [i_2] [i_5])), (arr_10 [(unsigned short)8] [i_2 - 3] [i_2 - 3] [i_5]))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 2] [i_0] [(_Bool)1])) ? (arr_10 [i_0] [i_2 + 1] [i_2 + 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2 + 1] [(unsigned short)13] [i_5])))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-56)) + (2147483647))) << (((((-759072493205530915LL) + (759072493205530928LL))) - (13LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))));
}
