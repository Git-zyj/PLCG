/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246971
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1 - 2] [i_2] [i_0] = ((((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (var_4))) - (min((((/* implicit */int) ((0) > (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_11 *= ((unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                                arr_12 [i_0] = ((/* implicit */int) max((((unsigned long long int) (!(((/* implicit */_Bool) var_10))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) - (18182964612205408612ULL)))))));
                            }
                        } 
                    } 
                    var_12 = ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (var_4) : (var_8)))))) / (((((/* implicit */_Bool) (+(var_2)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10)))))))));
                    var_13 = var_7;
                    arr_13 [i_0] [i_0] [i_2] = max((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10541295412459112014ULL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)-111))))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))), (((/* implicit */unsigned long long int) (~(var_6)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) ((var_8) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 24; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))))));
                    arr_23 [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_9)) - (80)))))))) ? (((/* implicit */int) min((var_1), (var_0)))) : (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (var_2)))), (var_4)))));
                }
            } 
        } 
    } 
}
