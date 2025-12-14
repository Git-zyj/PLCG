/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195105
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (-(-548372430)));
            arr_5 [14LL] [14LL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [(signed char)7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-8))))))), (9170083424108147931ULL)));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */int) arr_3 [i_2 - 1]);
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2]))))) ? (var_6) : (((/* implicit */long long int) 750153023))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        arr_11 [i_3] = ((/* implicit */short) max(((_Bool)1), (((_Bool) var_15))));
    }
    var_21 = ((/* implicit */long long int) -21846602);
}
