/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206673
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) ((long long int) ((arr_3 [i_2] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (min((((/* implicit */long long int) (unsigned char)11)), (-318562361107687465LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)9)) | (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)1))))) ? (((((var_3) + (9223372036854775807LL))) >> (((max((-6837447741951619947LL), (var_11))) + (3485033711330328610LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) / (((/* implicit */int) ((-6837447741951619938LL) != (-5322377300176970779LL))))))));
    var_16 |= ((/* implicit */long long int) var_6);
}
