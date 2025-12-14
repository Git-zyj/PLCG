/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193189
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-19));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) ((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-19), (((/* implicit */short) arr_1 [i_2 - 1])))))) : (((arr_1 [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (var_2)))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) 0U))), ((short)0)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((signed char) (+(max((4294967295U), (((/* implicit */unsigned int) -1353010468)))))));
        var_16 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_3]), (((/* implicit */unsigned int) (short)-17838))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (5U)))), ((-(min((arr_7 [(signed char)7] [i_3] [i_3] [i_3]), (((/* implicit */long long int) (short)-12771))))))));
        var_17 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_3] [i_3])), (4092692242U)))), ((+(15ULL)))));
    }
    var_18 = ((/* implicit */unsigned int) (!(var_10)));
}
