/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203607
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
    var_19 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) max((min((arr_0 [i_0]), (arr_0 [i_0]))), ((+(arr_0 [i_2 + 1])))));
                    arr_7 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) max(((+(arr_4 [i_0] [i_0]))), (((/* implicit */int) ((((var_4) + (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) < (arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(arr_4 [i_0] [i_0])))) * (((((/* implicit */long long int) arr_0 [i_0])) / (arr_6 [i_0] [i_0] [i_0] [i_0])))));
        var_22 = max((((/* implicit */unsigned long long int) (+(arr_0 [i_0])))), (((((/* implicit */_Bool) 3672891483984066532LL)) ? (16551241240355602733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)63), ((unsigned char)10))))))));
    }
}
