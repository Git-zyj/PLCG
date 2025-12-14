/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37451
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
    var_16 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [(unsigned short)7])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))), (((((long long int) arr_6 [i_0] [i_1] [i_1])) / (((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_11)))))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (2459693748568817396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                    arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 11672334692281020007ULL)) && (arr_2 [i_0])));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_10 [i_3 + 3]);
                        var_19 = ((/* implicit */unsigned short) max((var_19), ((unsigned short)56580)));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (unsigned char)255);
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_6))));
    var_22 = ((/* implicit */unsigned char) var_0);
}
