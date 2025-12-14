/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248706
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
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = arr_6 [i_0 - 1] [i_0 + 1];
                    arr_7 [(_Bool)1] [i_0 + 2] [i_2] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_0] [i_1]))));
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (6707625642034965498LL) : ((-9223372036854775807LL - 1LL)))) : (9223372036854775807LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) -1072192871)) : (9223372036854775807LL)))));
                                var_23 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((arr_26 [i_3] [i_3] [i_5] [i_4 + 2] [i_3]) ? (((arr_26 [i_3] [18ULL] [i_5] [i_4 - 2] [i_9]) ? (arr_25 [(_Bool)1] [i_4 - 1] [i_5] [i_4 - 2] [i_9] [i_4 + 2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3] [i_4 + 1] [i_5] [i_4 - 2] [i_3]))))) : (max((((/* implicit */unsigned int) arr_22 [i_5] [i_3] [i_5] [i_4 - 2] [i_3] [i_4 + 1])), (arr_25 [i_3] [9LL] [i_5] [i_4 - 1] [i_5] [i_3] [i_3]))))))));
                                arr_27 [i_3] [14LL] [i_5] [i_4 - 2] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */int) (unsigned short)42684)) != (((/* implicit */int) arr_17 [i_9] [i_4] [i_5] [i_4] [i_4] [i_3]))))) ^ (((/* implicit */int) max(((short)-6136), (((/* implicit */short) (signed char)-25)))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) arr_9 [i_3] [(signed char)13]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-4401)), (var_12))))) % (((((/* implicit */_Bool) 469762048U)) ? (4006344756U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 4; i_10 < 21; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_28 [i_11 - 1] [i_11] [i_3] [i_3] [17LL] [i_3]), (9007199237963776ULL)))) ? (((/* implicit */unsigned long long int) arr_10 [i_4])) : (var_6)))) ? ((-(arr_25 [i_4] [i_4] [i_10 + 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]))) : (((unsigned int) var_0)))))));
                                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_10] [i_5]))));
                                arr_33 [i_3] [i_4 + 2] [i_5] [i_3] [i_11 - 1] [21LL] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                    var_29 |= ((/* implicit */short) (((+(arr_21 [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_4 - 2]))) < (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) arr_13 [20ULL])) : (var_3))) < (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1740))) : (arr_14 [i_3])))))))));
                }
            } 
        } 
    } 
}
