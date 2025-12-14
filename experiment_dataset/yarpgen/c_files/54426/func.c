/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54426
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [(short)0] = min(((-(((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))), (((((/* implicit */int) arr_0 [(_Bool)1])) % (arr_2 [i_0]))));
            var_11 = ((/* implicit */unsigned int) (-((-(arr_2 [i_0])))));
        }
        var_12 = ((/* implicit */unsigned char) var_1);
        arr_7 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((int) arr_2 [i_0])) <= (max((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0]) : (-1454639225)))))));
        arr_8 [(unsigned char)8] [(_Bool)1] = ((/* implicit */short) (~(((((/* implicit */_Bool) -1453117192)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_5 [i_0]))))));
        arr_9 [(signed char)11] = ((/* implicit */long long int) (((~(((/* implicit */int) var_5)))) < (((/* implicit */int) min((min((((/* implicit */short) var_5)), (var_4))), (((/* implicit */short) ((1453117191) <= (1453117186)))))))));
    }
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */unsigned int) var_8);
}
