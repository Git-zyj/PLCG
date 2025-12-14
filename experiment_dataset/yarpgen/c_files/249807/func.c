/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249807
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) ((unsigned char) min((arr_4 [i_2] [i_1] [i_2] [i_2 + 1]), (((/* implicit */long long int) arr_2 [3U] [i_2 + 1] [i_2 + 1])))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (_Bool)1))));
}
