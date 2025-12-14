/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249941
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 6; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(short)6] [i_1] |= ((/* implicit */unsigned long long int) (+(1352512136U)));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_0 + 1]))))) ? ((+(min((901943905U), (901943905U))))) : (min((((3393023391U) + (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3] [i_2 + 4] [i_2 + 4])) != (-1511540027))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [4] [i_0 - 2])) : (((/* implicit */int) (signed char)-104))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [(short)6] [(short)6] [(short)6] [(short)6])) - (((/* implicit */int) arr_4 [(unsigned char)1] [2ULL] [i_2]))))) : (((((/* implicit */_Bool) (unsigned char)242)) ? (901943921U) : (3852451319U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2] [i_2 + 2] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_21 [i_3 + 3] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_5] [i_4 - 2] [i_3 + 1])) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_4 + 2] [i_5])) : (((/* implicit */int) arr_20 [i_3 - 1] [i_3 + 1] [i_3 + 3])))), (min((arr_15 [i_3 + 2]), (arr_15 [i_3 + 3])))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_15 [i_3])) > (((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (14080829340379320550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [10ULL]))))))))));
                    arr_22 [4U] [4U] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((923503773U) <= (3852451313U))))))) && (((/* implicit */_Bool) min((arr_16 [i_4 - 1] [(_Bool)1] [i_3 + 2]), (arr_16 [i_4 - 1] [(unsigned short)16] [i_3 + 2]))))));
                    arr_23 [8U] [i_4] [(signed char)10] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4])) - (((/* implicit */int) arr_12 [i_3] [i_3]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_14)));
}
