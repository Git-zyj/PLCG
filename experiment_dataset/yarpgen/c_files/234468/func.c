/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234468
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [14ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (var_10)))) ? (((((/* implicit */_Bool) 9335343332845011860ULL)) ? (arr_6 [i_0] [(_Bool)1] [4] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_0])))) : (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])))) : (var_3)));
                    arr_11 [i_2] [i_1] [i_0] [i_2] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_0])) ? (arr_4 [21LL] [22] [(unsigned char)9]) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 527730053U)) ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -761749388676116556LL)) ? (var_11) : (var_11)))))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13253043327872870524ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
}
