/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30563
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) var_7);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) max((arr_2 [(unsigned char)4] [(unsigned char)13]), (((/* implicit */long long int) (signed char)100))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
        var_13 = (~(arr_2 [4] [i_0 + 1]));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) - (arr_0 [i_0 + 1] [i_0 - 1])));
        var_15 = ((/* implicit */unsigned char) var_7);
    }
    var_16 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_17 [(unsigned char)3] [i_2] [6] [i_4 - 1] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) arr_3 [0])), (((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_1)))) << ((((~(var_10))) + (969098219)))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [5] [i_4 + 2] [i_4 + 2] [(unsigned short)15] [i_4 + 3])) * (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_10 [i_4 + 2] [i_4 - 2] [i_4 + 2] [(short)3] [i_4 + 2])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [(short)1] [i_4 + 1] [i_4 - 2] [9] [i_4 + 3]))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_2] = ((/* implicit */long long int) var_0);
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_9)))), (((((/* implicit */_Bool) arr_16 [(signed char)14] [i_1] [i_2] [i_2] [(short)14] [(short)6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
                var_19 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) arr_7 [(_Bool)1] [i_2] [i_2])))) - (((((/* implicit */int) var_6)) + (((/* implicit */int) var_0)))))), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_2))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_7] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned short) var_3)), (arr_21 [i_7 - 1] [i_7 - 1]))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) (signed char)-27)), (arr_8 [i_6] [i_7 - 1] [i_8])))), (max((((/* implicit */long long int) arr_20 [i_6])), (-10LL)))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_26 [i_7 + 1] [i_8] [i_8] [5ULL])))))))));
                }
            } 
        } 
    } 
}
