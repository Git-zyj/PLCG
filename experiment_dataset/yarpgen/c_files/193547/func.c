/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193547
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
    var_20 = ((/* implicit */int) var_16);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((arr_0 [i_0]) << (((arr_1 [0ULL] [i_0]) - (2022441528001696338ULL))))), ((-(arr_1 [i_0] [i_0]))))))));
        var_22 = (+(((7021293039108915170ULL) >> (((var_0) + (1151646118))))));
        arr_2 [14ULL] [11ULL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_17))));
                    var_24 &= (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) 13636218273189353451ULL))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_0]) : (var_12))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_3])) / (((/* implicit */int) arr_5 [i_0] [i_0]))));
                        var_26 -= ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_0]));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_3))));
                    }
                    var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) ((signed char) 2233830421192547771ULL))) ? (max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5934628432238206335ULL)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)4))))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) var_14)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 6; i_4 += 2) 
    {
        arr_13 [i_4] [i_4] = ((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4])))))) : (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_4 + 3] [i_4 + 3]) : (arr_9 [i_4] [i_4 - 2]))));
        var_29 = ((/* implicit */unsigned long long int) var_15);
        var_30 ^= ((/* implicit */unsigned int) ((arr_0 [i_4 - 2]) | (arr_0 [i_4 + 1])));
        arr_14 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967289U)) / (var_17)))) ? (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_10 [i_4]))) : (((unsigned long long int) arr_12 [i_4] [i_4])));
    }
}
