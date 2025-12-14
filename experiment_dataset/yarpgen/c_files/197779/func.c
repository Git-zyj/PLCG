/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197779
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
    var_15 ^= ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) % (max((((/* implicit */long long int) var_9)), (var_11))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (short)26790)) ? (-2000679701061669008LL) : (((/* implicit */long long int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(1314742348)));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))), ((~(((((/* implicit */int) (signed char)62)) ^ (((/* implicit */int) (signed char)65)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) (unsigned char)200)) ? (13837481212911710177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))))), (((/* implicit */unsigned long long int) var_12))))));
    var_18 = ((/* implicit */unsigned char) var_10);
}
