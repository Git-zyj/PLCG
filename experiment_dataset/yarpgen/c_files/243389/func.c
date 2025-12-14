/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243389
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 638622571U)) ? (((((/* implicit */long long int) 3656344738U)) / (1245114850057828946LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((var_9) ? (var_7) : (var_5))))) : (max((((/* implicit */unsigned long long int) 484716390U)), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) -1687005302)) : (549739036672ULL))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3327786903447703874LL)) ? (((/* implicit */unsigned long long int) 638622571U)) : (var_8)))) ? (((/* implicit */int) max((var_11), (var_11)))) : (((/* implicit */int) max(((unsigned char)22), ((unsigned char)22)))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (!((_Bool)1)));
                    arr_9 [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (~(min((-4638731436528621515LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))));
                }
            } 
        } 
    } 
}
