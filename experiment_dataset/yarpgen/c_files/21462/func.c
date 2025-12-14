/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21462
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) arr_2 [i_0]);
                var_13 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned short)58709)))));
                            var_15 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 71207819)) ? (10079875740545859842ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) 17717414358642419123ULL)) ? (72057593970819072LL) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (signed char)-103);
}
