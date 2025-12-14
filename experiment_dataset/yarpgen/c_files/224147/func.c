/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224147
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
    var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)18] [(unsigned short)15] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((16842172692231441731ULL), (1604571381478109884ULL))), (1604571381478109895ULL))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((long long int) 9059574335656749529ULL));
                            arr_14 [i_0] = ((/* implicit */unsigned short) ((long long int) ((signed char) min((9059574335656749529ULL), (((/* implicit */unsigned long long int) (unsigned short)59169))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (unsigned short)21624)), (0ULL))), (9059574335656749529ULL)));
            }
        } 
    } 
    var_20 = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) - (14058110872892167342ULL)));
    var_21 += ((int) (-(((9387169738052802085ULL) + (1604571381478109884ULL)))));
    var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)0))))));
}
