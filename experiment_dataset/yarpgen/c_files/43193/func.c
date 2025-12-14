/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43193
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
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) (unsigned short)3189))))));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (var_5)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))) && (((/* implicit */_Bool) (-(var_5))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)22433))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (signed char)-66))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned short) arr_5 [i_1]))))) : ((+((+(arr_6 [i_0] [i_1] [i_2])))))));
                    arr_10 [i_0] [i_0 + 1] [i_0] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-46)) || (((/* implicit */_Bool) (unsigned short)60229))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */int) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_8)))) ? (var_1) : (max((((/* implicit */unsigned int) var_4)), (1073741823U))))))));
}
