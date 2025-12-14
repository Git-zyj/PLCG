/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194996
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
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) (unsigned char)32))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162)))))) : ((-(var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0]);
        arr_3 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned char)223))));
        var_18 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) min(((unsigned char)162), (arr_1 [i_0] [i_0])))) <= (((/* implicit */int) (unsigned char)222)))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) ((var_4) == (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 1] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((var_11) << ((((~(arr_9 [i_1] [i_1 - 1]))) - (1889803024008170874ULL)))));
                arr_12 [i_1] = (((-(arr_7 [i_1 + 3] [i_1 + 2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)237), ((unsigned char)223))))));
                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) 17215143298281874183ULL)))))));
                arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((long long int) arr_9 [i_1] [i_1 + 1])), (((/* implicit */long long int) (unsigned char)18))));
            }
        } 
    } 
}
