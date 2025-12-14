/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40452
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 3] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_0]);
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2446141697817546662ULL)))) ? (((var_10) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_12)))))) : (((/* implicit */int) (signed char)-37))));
                var_13 = ((/* implicit */long long int) arr_3 [i_0]);
                var_14 = ((((/* implicit */int) (signed char)-62)) < (((/* implicit */int) (signed char)37)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        arr_9 [0U] [0U] &= ((/* implicit */long long int) max((arr_8 [8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (-3855621897057359671LL))), (((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2]))));
                        var_15 = ((/* implicit */unsigned long long int) max((((458752) << (((((((/* implicit */int) arr_13 [i_2 - 3] [i_3] [i_4] [i_4])) + (11728))) - (22))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4])) >= (((/* implicit */int) var_1)))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_4)))) << ((((~(((/* implicit */int) var_0)))) - (55)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (-1LL) : (((/* implicit */long long int) var_10)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((arr_16 [i_2] [i_2] [i_2] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_14 [i_2] [i_2] [i_4] [i_4]))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) % (576460752303422976LL))))));
                    }
                    var_19 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(2305843009213562880LL)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))))));
                    arr_24 [i_2 + 1] [i_2] [i_4] [6ULL] &= ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_22 [i_2] [i_3] [i_2 - 3] [i_3])))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_7) : (-794941732)))), (((unsigned long long int) var_4))))));
}
