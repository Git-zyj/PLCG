/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48275
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
    var_20 = var_18;
    var_21 = ((/* implicit */short) max((((signed char) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */signed char) ((var_10) != (((/* implicit */unsigned long long int) -832417473)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [12LL] [i_2 + 3] [i_0 + 3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -832417477)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min(((unsigned char)230), (((/* implicit */unsigned char) var_4))))) : (max((-832417473), (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [6LL] [i_1]), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_2])))))) >= (((unsigned long long int) 44327449U)))))) : (((((/* implicit */_Bool) var_3)) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(44327456U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1])), (arr_2 [i_1])))) : (((/* implicit */int) arr_1 [i_0 + 1])))) < (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0 + 4])) : (((((/* implicit */_Bool) 278769099U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)117))))))));
                    arr_11 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6016150945380091599ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5431190699659087927LL)));
                }
            } 
        } 
    } 
}
