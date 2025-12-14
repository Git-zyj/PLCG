/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194542
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
    var_17 = ((/* implicit */short) (-(((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    var_18 -= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) 2783363449U);
                    arr_7 [i_0] [i_0] [i_2 - 3] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1588194204U)));
        arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_0);
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((int) arr_5 [i_4] [i_4]));
        var_23 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_10)))) <= (((/* implicit */int) ((arr_4 [i_4] [i_4] [i_4] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))));
    }
    var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) ((2706773091U) != (var_4)))), (var_10)));
    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 691862110U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2706773102U)))) : (2356659576U)))) ? (((/* implicit */long long int) (~(691862110U)))) : (min((max((((/* implicit */long long int) (short)11102)), (7906179689911007812LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (691862110U))))))));
}
