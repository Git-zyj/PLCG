/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226760
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-42), (((/* implicit */signed char) (_Bool)1))))) && (((/* implicit */_Bool) ((unsigned char) var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)16] |= ((/* implicit */short) (~(((long long int) var_2))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [(unsigned char)10] [i_0] = (-((-((-(3LL))))));
                                arr_16 [i_1] [i_1] [i_4 + 3] = ((/* implicit */short) var_12);
                                var_18 &= ((/* implicit */_Bool) var_6);
                                arr_17 [i_2] [i_2] |= (signed char)41;
                            }
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_15)) : (16445629756605917541ULL))) : (((((/* implicit */_Bool) -7954550338994653599LL)) ? (arr_7 [i_3] [i_2]) : (arr_14 [i_3] [i_3] [i_0] [i_1] [i_1] [i_1] [i_0]))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) -7954550338994653584LL))))) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [12LL] [i_3 + 3])) - (64)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(signed char)7] [(signed char)4] [i_1] [(signed char)4] [18ULL])))))) != (var_12))))));
            }
        } 
    } 
}
