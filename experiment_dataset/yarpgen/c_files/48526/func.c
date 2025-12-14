/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48526
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) var_8));
                    var_12 = ((min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (1631300487882384820ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
        arr_7 [9ULL] [i_0] = (~(((/* implicit */int) ((_Bool) min(((unsigned short)56033), (((/* implicit */unsigned short) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_13 = ((/* implicit */long long int) (_Bool)1);
            arr_11 [i_3] = ((/* implicit */int) (_Bool)1);
        }
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_4] [i_0 - 1] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_4] [i_0]) : (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) arr_13 [i_0] [i_4 - 1] [i_4]))));
            var_14 *= (unsigned short)51495;
            var_15 = ((/* implicit */_Bool) min((var_15), (arr_0 [i_0])));
            var_16 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_11))));
                        var_18 = ((/* implicit */long long int) arr_20 [i_0 + 1]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */_Bool) var_3);
                arr_26 [i_0] [(short)8] [i_8] = arr_12 [i_8] [i_8];
                arr_27 [i_0 + 1] [i_5] [i_8] = var_9;
            }
        }
    }
    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_1))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) arr_29 [i_9]))))), (((((/* implicit */_Bool) -6607083162359232579LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967295U)))))));
        var_22 = ((/* implicit */unsigned short) var_3);
    }
    var_23 += ((/* implicit */_Bool) ((long long int) 7228823572430619302ULL));
}
