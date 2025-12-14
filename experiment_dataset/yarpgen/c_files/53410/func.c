/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53410
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
    var_16 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1636513623U)) : (var_9))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (min((min((2658453673U), (1636513623U))), (((980641521U) % (1636513601U))))) : (var_4))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (var_15)))), (var_2)));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) 2658453673U);
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_13))))) ? (((unsigned long long int) arr_9 [i_1] [i_2] [i_2])) : (((/* implicit */unsigned long long int) 980641521U))))) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_6 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_7))))));
            var_20 &= ((/* implicit */unsigned int) arr_4 [i_2]);
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) var_2);
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_20 [i_1] [i_5 + 1] [i_3] [i_4] [i_5] = 1636513623U;
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((~(arr_14 [i_1] [i_2] [i_3] [i_1]))), (var_10))))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 980641521U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (980641521U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
        {
            arr_24 [i_1] = ((/* implicit */unsigned int) (-(-1207058149374974314LL)));
            arr_25 [i_6] [i_1] [i_1] = ((/* implicit */long long int) var_1);
            arr_26 [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), ((+(-1207058149374974314LL)))));
        }
        arr_27 [12U] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) 2658453673U)));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_13))));
                var_23 += ((/* implicit */unsigned long long int) 2658453673U);
            }
        } 
    } 
}
