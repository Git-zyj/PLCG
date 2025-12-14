/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3138
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
    var_14 = ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (1496784504022832475ULL) : (var_11)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) (+(var_8)));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_13))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (var_13) : (arr_4 [i_0 + 1] [i_1 - 1] [i_1 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16949959569686719141ULL)) ? (((/* implicit */int) var_2)) : (arr_0 [i_0] [i_1])))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (unsigned char)76)) : ((+(49979995)))))) : (var_13));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) 49979983);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_19 [i_3] [i_2] [i_2] [i_2] = 49979981;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_19 ^= ((((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) < (((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (-49979995) : (((/* implicit */int) var_2)))));
                        var_20 = 8936415185883884889ULL;
                        arr_22 [i_2] [i_3] [i_4] [i_2] [i_5] = ((/* implicit */_Bool) 1071834323);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_2] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_21 [i_5] [i_3 - 1] [i_5] [i_5] [i_3 - 1]))));
                    }
                }
            } 
        } 
    } 
}
