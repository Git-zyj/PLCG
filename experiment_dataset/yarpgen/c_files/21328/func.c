/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21328
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) -1383564941);
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)7168)) : (((/* implicit */int) var_5))))) ? ((-(var_4))) : (min((((/* implicit */unsigned int) var_9)), (((2410858799U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_17 = ((/* implicit */short) ((signed char) ((var_11) - (arr_6 [i_2]))));
        arr_8 [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1884108508U)) ? (var_4) : (2979639496U)))));
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [i_5] = (+(max((1969611363U), (((/* implicit */unsigned int) (signed char)108)))));
                    arr_18 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1884108497U)) ? (arr_13 [i_4] [i_5]) : (arr_13 [i_3] [i_3]))))));
                    arr_19 [i_3] [(signed char)1] [(signed char)10] [i_5] = ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-86)))), (((/* implicit */int) (signed char)120))))) ? (((((/* implicit */_Bool) -586255862)) ? (((((/* implicit */_Bool) 8U)) ? (-1) : (arr_13 [i_3] [i_4]))) : (var_11))) : (((arr_12 [i_3] [i_4] [i_3]) >> (((arr_12 [i_5] [i_5] [i_5]) - (909457403))))));
                    arr_20 [i_5] [(signed char)2] [i_5] = ((/* implicit */signed char) (((+(arr_7 [(signed char)10]))) ^ (((/* implicit */int) var_5))));
                    arr_21 [i_3] [i_3] [i_3] [i_3] &= ((unsigned int) max((((unsigned int) (short)11188)), (((/* implicit */unsigned int) (-(arr_6 [i_3]))))));
                }
            } 
        } 
        arr_22 [i_3] = arr_9 [i_3];
        arr_23 [i_3] = ((/* implicit */signed char) var_6);
    }
    var_18 |= ((/* implicit */int) 6U);
    var_19 = ((/* implicit */signed char) ((int) var_11));
}
