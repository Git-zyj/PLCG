/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50830
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
    var_11 = ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_4)))))) / (var_2));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)76))));
                            var_12 += ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)46093)) : (((/* implicit */int) var_7)))) + (((((/* implicit */int) arr_4 [i_3])) + (((/* implicit */int) (signed char)-118))))))) : (((1040260270U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46093)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 3])))) ? (((((/* implicit */_Bool) (short)-29401)) ? (((/* implicit */long long int) -307428828)) : (arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 2] [i_1] [i_1 - 4])) ? (4253189603988738023LL) : (((/* implicit */long long int) var_1))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)43974))))));
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) > (var_2)));
}
