/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190418
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (-(((-5741677351770480251LL) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (max((max((var_7), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned int) 5741677351770480250LL)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))));
                            var_12 -= ((/* implicit */unsigned long long int) var_6);
                            var_13 *= ((/* implicit */int) ((((/* implicit */int) var_3)) < (((((/* implicit */_Bool) ((unsigned char) (short)(-32767 - 1)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((unsigned char) var_6));
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) (signed char)-77))) : (min((var_0), (((/* implicit */int) var_10)))))) <= (((/* implicit */int) var_2))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) / (max((18446744073709551595ULL), (((/* implicit */unsigned long long int) -7))))))) ? (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3277607155U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) / (((/* implicit */int) var_8)))) - (((/* implicit */int) var_6)))))));
}
