/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50025
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
    var_12 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 15793177919759829480ULL)) ? (15793177919759829480ULL) : (((/* implicit */unsigned long long int) 16777216U)))) > (2653566153949722136ULL))))));
    var_13 = ((/* implicit */int) (unsigned short)65535);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) 7961134190872059983LL);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (short)27618);
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 36846485U))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((unsigned int) 36846485U)) <= (16777231U)))) != (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [5U])), ((unsigned short)0)))) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
}
