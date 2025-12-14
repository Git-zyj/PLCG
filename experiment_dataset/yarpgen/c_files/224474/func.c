/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224474
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
    var_14 = ((/* implicit */unsigned short) ((-4074658269924544484LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-119)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)(-32767 - 1)))))));
                    var_16 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((4052441412763291157ULL) ^ (((/* implicit */unsigned long long int) 1266536361))))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((arr_6 [i_0] [(signed char)5]) / (arr_6 [i_1] [i_1]))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((min((((unsigned long long int) (unsigned char)226)), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_2 + 1])) ^ (var_8)))))))));
                    arr_7 [(_Bool)1] [(_Bool)1] [(signed char)13] = ((/* implicit */unsigned int) (unsigned char)231);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_11))));
}
