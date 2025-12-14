/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243537
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) var_3)), ((-(7755603767329322978LL)))));
    var_21 = (!((!(((/* implicit */_Bool) (-(0U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(max((-9196923814170688071LL), (((/* implicit */long long int) (unsigned short)32786)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1 + 2] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)106))))));
                    var_23 = min(((!(((/* implicit */_Bool) (~(9196923814170688059LL)))))), ((!(((/* implicit */_Bool) (~(2660098752U)))))));
                }
                var_24 = ((/* implicit */short) min((max((((/* implicit */unsigned int) max(((unsigned short)32741), (((/* implicit */unsigned short) (_Bool)1))))), ((-(2660098752U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62)))))));
                var_25 |= (!(((/* implicit */_Bool) max(((+(-9223372036854775806LL))), (max((711951879496454188LL), (((/* implicit */long long int) 2660098753U))))))));
            }
        } 
    } 
}
