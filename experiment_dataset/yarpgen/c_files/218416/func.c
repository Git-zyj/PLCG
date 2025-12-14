/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218416
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
    var_11 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (unsigned char)254)), (min((0U), (((/* implicit */unsigned int) (short)0))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_10)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)78))))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4)))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)81))) << (((((/* implicit */int) ((signed char) ((unsigned int) (unsigned char)25)))) - (13)))));
        arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_3))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) var_4)))))))), ((-(var_2)))));
    }
}
