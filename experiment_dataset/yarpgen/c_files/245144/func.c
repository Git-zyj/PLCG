/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245144
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(max((-7426413280784583829LL), (-7426413280784583829LL)))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(arr_2 [i_0 - 4])))) != ((+(((arr_1 [(signed char)21] [i_0 + 3]) - (((/* implicit */unsigned long long int) arr_2 [i_0 - 3]))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 7426413280784583855LL)) ? (7426413280784583829LL) : (7426413280784583855LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_5 [i_1])))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)54)), (var_8)))))))));
                    arr_11 [20U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_9 [i_1] [i_2]))))));
                    arr_12 [i_1] = ((/* implicit */long long int) (unsigned short)120);
                    var_14 = min(((~(-7426413280784583861LL))), ((~(max((((/* implicit */long long int) 4294967295U)), (var_10))))));
                    var_15 = arr_8 [i_3];
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_6);
    var_17 = ((/* implicit */unsigned short) (-(var_3)));
}
