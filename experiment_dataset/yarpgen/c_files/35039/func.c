/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35039
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
    var_17 -= ((/* implicit */signed char) ((1633244648U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_2)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_2 + 1])), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 2])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) var_6))))), (((unsigned long long int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [7U] [i_0]))))))));
                    var_19 -= ((/* implicit */short) -7600400802859565023LL);
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((arr_0 [i_0] [i_2]) ? (((((/* implicit */int) var_14)) | (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 4])))) : (((/* implicit */int) (short)0)))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((max((2251799813683200ULL), (((/* implicit */unsigned long long int) 18LL)))) - (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (1152921504606322688ULL))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (signed char)122))))))) + (((arr_0 [i_2 + 3] [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 4] [i_2 + 2]))) : (1280851410U))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0)))) ? (((((/* implicit */_Bool) 3974552625270297075LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [4] [4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [1U] [i_3] [i_3])) ? (var_1) : (((/* implicit */int) (signed char)-4)))))));
        var_23 |= ((/* implicit */int) arr_8 [i_3 + 3]);
    }
}
