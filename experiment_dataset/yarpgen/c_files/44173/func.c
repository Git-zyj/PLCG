/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44173
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) var_12)), ((unsigned short)41966))), (((/* implicit */unsigned short) max((var_0), ((unsigned char)30))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = min(((~((~(((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])) : (-4573837963127334570LL))))));
                var_15 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)128)), (max((9037124860956646697LL), (((/* implicit */long long int) 2160691704U))))))), (11ULL)));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)248);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((min((((/* implicit */int) (signed char)-109)), (-106254371))) + (2147483647))) << (((min((var_4), (((/* implicit */unsigned long long int) (unsigned char)121)))) - (121ULL)))))), (max((((/* implicit */long long int) (signed char)17)), (var_3)))));
    var_17 = ((/* implicit */unsigned char) var_5);
}
