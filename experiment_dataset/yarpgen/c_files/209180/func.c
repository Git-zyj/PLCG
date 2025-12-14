/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209180
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)29099)))))) < (var_8)));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (-1474492433) : (((/* implicit */int) (signed char)19)))))));
                }
                arr_6 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) (signed char)-19))));
                arr_7 [i_0] [i_0] [i_1 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? ((-(var_8))) : (max((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1] [i_0])), (-360191356420338004LL))))) ^ (((((/* implicit */long long int) var_11)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))) : (-5273111649099703120LL)))))));
            }
        } 
    } 
    var_19 = var_5;
    var_20 = ((/* implicit */short) var_13);
}
