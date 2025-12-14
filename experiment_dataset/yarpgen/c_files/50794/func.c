/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50794
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [7ULL])) & (((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 1]))))));
                    arr_9 [i_1] [i_1 + 1] [i_2] = ((/* implicit */long long int) (((((-(2147483634))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0])))))) - (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) arr_2 [i_0] [(signed char)0] [i_2])), (arr_6 [i_2] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */short) ((((arr_3 [(unsigned short)3]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) ? (arr_3 [i_3 - 1]) : (((/* implicit */long long int) (~(((((/* implicit */int) arr_2 [i_3] [i_3] [i_3])) >> (((((/* implicit */int) arr_0 [i_3 - 1])) + (54))))))))));
        var_20 -= ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_3]), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3] [0] [i_3])) > (((/* implicit */int) arr_7 [i_3 - 1] [i_3])))))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((14480838828860166498ULL) << (((3768887694039864109ULL) - (3768887694039864048ULL)))))) || (((/* implicit */_Bool) (unsigned short)38631)))))));
    }
    var_21 -= ((/* implicit */unsigned short) var_19);
}
