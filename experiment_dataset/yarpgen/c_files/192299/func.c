/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192299
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((((/* implicit */_Bool) -4718235818474803938LL)) || (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) (short)23079)) ? (-4718235818474803938LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) 4011482558U)), (var_5)))))));
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (+(min((var_9), (((/* implicit */int) var_8))))))) + (((((/* implicit */_Bool) (-(3435221010187821749ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [(unsigned char)5] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_4 [(_Bool)1] [(unsigned char)15] [(_Bool)1]) == (max((((/* implicit */int) arr_1 [i_0])), (1522815090)))))), (((((/* implicit */_Bool) -5353742049912557942LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (15011523063521729866ULL)))));
                    arr_9 [16] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (signed char)-55))))))));
                }
            }
        } 
    } 
}
