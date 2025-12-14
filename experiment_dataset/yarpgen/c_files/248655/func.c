/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248655
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-85)), (var_2)))), (max((var_1), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)92)), (var_9)))))))));
    var_14 ^= ((/* implicit */unsigned short) max((2402415752U), (1892551543U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = (+(max((max((1892551543U), (1892551545U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))))));
                arr_4 [(signed char)7] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)250))));
                var_16 = ((/* implicit */unsigned int) var_5);
                arr_5 [10LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((17418213432481209553ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? ((~(-9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15ULL))))))));
                var_17 = ((/* implicit */_Bool) (+(-2626544637372890365LL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (18321518725757124605ULL))) : (((/* implicit */unsigned long long int) var_9)))), (var_1))))));
}
