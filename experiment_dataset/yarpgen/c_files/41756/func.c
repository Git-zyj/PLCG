/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41756
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) var_0);
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_1 [9ULL]))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 34351349760LL)), (5948841528478489693ULL))))));
        arr_3 [i_0] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12497902545231061944ULL)))))) / (max(((+(5948841528478489693ULL))), (((/* implicit */unsigned long long int) ((arr_0 [4U] [i_0]) >> (((var_7) - (180001121813500275ULL))))))))));
        var_16 = (+((+(min((((/* implicit */unsigned long long int) var_5)), (12497902545231061921ULL))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 12497902545231061923ULL;
        arr_8 [i_1] = ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_15 [i_2] = max((arr_11 [i_2]), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_9)), (var_3))))));
                var_17 = ((/* implicit */int) var_11);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_11)))))))));
}
