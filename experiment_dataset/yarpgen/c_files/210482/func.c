/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210482
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (((+(arr_1 [i_2 + 1] [i_0 + 1]))) / (max((arr_1 [i_2 + 2] [i_0 + 3]), (((/* implicit */unsigned long long int) var_7))))));
                            arr_12 [i_0] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)62310)))) + (((/* implicit */int) ((unsigned char) (signed char)72)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-73)))))));
                var_18 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) + (min((min((arr_2 [i_1] [i_0 + 3]), (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))));
                arr_13 [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                arr_14 [i_0 + 2] [i_0] [8] |= ((/* implicit */short) min((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0])), (((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_1])) << (((((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 3] [(signed char)12] [(_Bool)1])) - (60735)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (_Bool)1);
}
