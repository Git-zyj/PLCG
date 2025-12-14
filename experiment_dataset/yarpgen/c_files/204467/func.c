/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204467
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_9)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] = ((/* implicit */short) max(((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))));
                    var_16 = ((/* implicit */int) arr_6 [i_1]);
                    var_17 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2] [i_2] [i_0]))))), (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [6ULL]))));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) 1078328747U);
        arr_13 [i_0] = ((/* implicit */_Bool) (-((~(arr_2 [i_0])))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)230))))));
        var_20 = (~(((/* implicit */int) (signed char)-113)));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_0 [i_4]))));
        arr_19 [i_4] = ((/* implicit */signed char) ((arr_2 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4]))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(arr_1 [i_4] [i_4]))))))) : (((arr_14 [i_4]) & (arr_14 [i_4])))));
        arr_20 [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_4]))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (var_15) : (((/* implicit */unsigned int) var_8))))) ? (var_3) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)18532)))))))));
    var_23 ^= (-(((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) var_5)), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
}
