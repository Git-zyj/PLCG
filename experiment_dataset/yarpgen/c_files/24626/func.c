/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24626
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
    var_19 = ((/* implicit */unsigned int) min((min(((unsigned char)78), ((unsigned char)87))), (((/* implicit */unsigned char) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 3595940784U)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)123)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) var_10));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)161)) <= (((/* implicit */int) (short)-32756))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)88)) ? (14935468137761225777ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744)))));
    var_21 = ((/* implicit */unsigned char) var_15);
}
