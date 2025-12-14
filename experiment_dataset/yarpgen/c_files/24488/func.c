/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24488
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4777204992691929309LL)))) ? (-6103121934540804264LL) : (((/* implicit */long long int) 3319185330U))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (unsigned char)120)), (var_10)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_1]))))));
                            arr_14 [i_3] [14U] [i_1] [i_3] |= ((/* implicit */unsigned int) arr_3 [i_4]);
                        }
                        var_22 = ((/* implicit */long long int) var_8);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_8);
}
