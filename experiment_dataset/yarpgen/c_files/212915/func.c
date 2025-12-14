/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212915
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
    var_14 &= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [3U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1648259821)) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) (unsigned char)98)))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)168))))) ? (((arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 2]) % (arr_6 [i_0] [i_0] [i_0]))) : ((-(((/* implicit */int) (unsigned char)157))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))))), ((-(14754279517763026945ULL)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_2]))))) : (40365502U)));
                }
            } 
        } 
    } 
}
