/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28221
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
    var_10 = ((/* implicit */_Bool) var_7);
    var_11 &= ((/* implicit */unsigned short) 68719468544LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)17155)) : ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    var_13 = ((/* implicit */signed char) (unsigned short)4872);
                    var_14 = ((/* implicit */unsigned short) (+(68719468544LL)));
                    arr_8 [(unsigned short)23] [i_1] [(unsigned short)23] [(_Bool)1] &= ((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0] [i_0])), ((~((~(((/* implicit */int) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        arr_11 [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3 - 3] [i_3 - 3] [i_3 - 2])) ? ((~(((/* implicit */int) (signed char)-7)))) : (((/* implicit */int) arr_9 [i_3 - 2]))));
        var_16 = arr_4 [i_3 + 1] [(unsigned short)9] [i_3];
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_17 = arr_1 [i_4] [i_6 + 1];
                        arr_20 [i_3] [i_4] [i_3] [i_5] |= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (68719468570LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) var_5))))) : (((unsigned int) var_1))));
        var_19 = ((/* implicit */signed char) 7U);
    }
}
