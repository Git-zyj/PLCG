/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210399
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((215663213U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (((+(arr_7 [i_0 - 1] [i_1 - 2] [(signed char)12]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_0 - 1] [i_1 - 1] [i_1]))))));
                    var_18 = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (+((-(max((((/* implicit */long long int) (signed char)-57)), (-2523320923614535303LL)))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) -838151793))) ? (((/* implicit */long long int) arr_5 [(short)5] [(short)0])) : (-2523320923614535303LL))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) 2523320923614535302LL);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(320918396)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) : (0ULL)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((long long int) (-(((/* implicit */int) (unsigned char)0)))))));
}
