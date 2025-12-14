/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4127
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */int) min((arr_4 [i_1 - 2] [i_1 + 1]), ((signed char)-15)))) / (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 3]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6279560454800294107ULL)) ? (-3162498973565052208LL) : (((/* implicit */long long int) -1)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) (unsigned short)23901))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
