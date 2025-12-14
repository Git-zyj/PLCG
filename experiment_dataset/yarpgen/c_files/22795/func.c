/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22795
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = max((13595878975227538524ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(2792397804U)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [9U] = ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_0] = max((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])), (1502569487U)))));
                        var_16 |= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)75))));
                    }
                }
            } 
        } 
        arr_15 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (-(min((var_3), (((/* implicit */unsigned int) (-(var_8))))))));
        var_17 = ((/* implicit */unsigned long long int) 372318016U);
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(max((arr_17 [i_4]), (arr_17 [i_4])))));
        var_19 += ((/* implicit */unsigned long long int) max(((~(88671011))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4])))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3700638606U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -24453591)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(533469067194381519ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3700638602U))))))))));
    }
    var_21 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (+(594328718U)))), (min((((/* implicit */unsigned long long int) var_11)), (var_6)))))));
    var_22 = ((/* implicit */signed char) max(((-(((/* implicit */int) (unsigned char)216)))), (((-350664865) ^ (((/* implicit */int) (signed char)52))))));
    var_23 = ((/* implicit */unsigned char) var_5);
}
