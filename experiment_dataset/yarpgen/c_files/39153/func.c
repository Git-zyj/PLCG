/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39153
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((_Bool) ((((arr_1 [i_0]) + (2147483647))) >> (((var_11) - (9402767645839526127ULL)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_13 [(_Bool)1] [2ULL] [i_2] [i_2] [i_2] [i_2]) : (arr_7 [4] [i_1] [4])))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), (var_5)))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_7))))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7314)) ? (var_10) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_8)) / (var_2))))), (((/* implicit */int) var_6))));
    var_16 -= ((/* implicit */unsigned int) var_10);
}
