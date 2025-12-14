/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24133
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2502879120965492084ULL) : (((/* implicit */unsigned long long int) -5020354077003228808LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2502879120965492084ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)233)))))))) || ((_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) 3365527395U)) ? (2502879120965492084ULL) : (2502879120965492103ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) min(((-(arr_0 [i_0] [i_0]))), (min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                var_13 = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61)))))));
                var_14 = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_15 &= ((/* implicit */unsigned char) arr_4 [i_0]);
                    var_16 = ((/* implicit */signed char) max((var_16), (max(((signed char)119), (((/* implicit */signed char) (_Bool)1))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_2);
}
