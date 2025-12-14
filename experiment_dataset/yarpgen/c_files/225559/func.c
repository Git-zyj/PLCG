/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225559
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [4ULL] [i_0] [i_2 - 3] [i_2 - 2]))) ? (arr_5 [i_1 - 1] [i_2] [i_2 - 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 812474728811086201ULL))))))));
                    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1])) % (((/* implicit */int) arr_2 [i_2 - 1])))))));
                    var_12 -= ((/* implicit */_Bool) (+(((arr_4 [(short)12] [i_2 - 3] [i_2 + 1] [i_2 - 3]) + (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1)))))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3821807314U)) ? (9107954106913781954ULL) : (16101325112724526483ULL)));
                    arr_6 [i_2 - 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)76);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (~(var_2)));
    var_15 = ((/* implicit */unsigned char) var_0);
}
