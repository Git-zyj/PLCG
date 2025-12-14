/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28060
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
    var_20 = ((/* implicit */short) -83681295);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((unsigned char) min((arr_1 [i_0]), (((/* implicit */unsigned int) 83681289)))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) min(((signed char)-42), ((signed char)-20))))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)59))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 2049077517270984761LL))))) | (((/* implicit */int) min(((signed char)121), (((/* implicit */signed char) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min(((short)18450), (((/* implicit */short) (signed char)119))));
                    var_23 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (short)3342)), (arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8821910461872016197LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) == (min((arr_1 [i_0]), (4294967295U))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (0ULL)))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_14);
}
