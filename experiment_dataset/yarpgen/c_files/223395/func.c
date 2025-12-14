/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223395
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
    var_14 = (-(((/* implicit */int) var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((min((((/* implicit */int) (!(((/* implicit */_Bool) 825698424))))), ((-(((/* implicit */int) (short)-7463)))))), (((/* implicit */int) (signed char)-12))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0 + 1])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))));
                        arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33977))));
                        var_16 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0 + 1] [i_1] [i_1] [i_4] [i_4] [i_4] = max((((/* implicit */unsigned long long int) arr_14 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0 - 1])), (((((/* implicit */_Bool) ((arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]) | (((/* implicit */unsigned long long int) 1022LL))))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])), (9645617101227777786ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (1765339172))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 4; i_5 < 16; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                            arr_19 [i_0] [i_1] [i_4] [i_4] [i_5 - 4] [i_4] = ((/* implicit */signed char) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (short)-13572))));
                        }
                        var_18 = ((/* implicit */unsigned char) -1765339172);
                        arr_20 [i_0 - 1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (+(1765339172)));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((arr_3 [i_0 + 1] [i_1] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2] [(_Bool)1] [i_1]))))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_4)))))));
                    }
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) max((((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_25 [i_0] [i_0] [i_0 + 1] [i_0])))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_0 [i_0 - 1])))) & (-1765339164)))));
                        arr_26 [i_0] [i_0] [i_0 - 1] [i_0] &= ((/* implicit */unsigned int) var_13);
                    }
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) -1765339167)))))));
                }
            } 
        } 
    } 
}
