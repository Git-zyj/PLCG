/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44618
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) arr_1 [6LL]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) 15794719259561881193ULL)) ? (((/* implicit */int) ((unsigned short) (unsigned char)87))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7833906622214697790LL)))))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (15794719259561881193ULL) : (8725724278030336ULL))))))));
                                arr_14 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [0LL] [i_0] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_13 [i_4])))) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])) : (var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_1);
    var_22 = var_11;
}
