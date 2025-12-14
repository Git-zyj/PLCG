/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214791
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
    var_11 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) max(((unsigned short)61284), ((unsigned short)4252)))), (2469137714U))), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)61284)))) | (((var_4) ? (2437600071U) : (((/* implicit */unsigned int) -1792376721))))))));
    var_12 = ((/* implicit */signed char) var_3);
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_5))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_1])))) ? (((var_4) ? (1625820664U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) : (((/* implicit */unsigned int) ((0) >> (((var_9) + (7989638625193914270LL))))))));
                    var_15 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194303LL)) ? (var_0) : (((/* implicit */unsigned int) 868469043))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (4294967283U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])))))));
                    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)186))));
                    var_17 = ((/* implicit */unsigned char) ((arr_1 [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) ((((var_5) && (((/* implicit */_Bool) (unsigned short)65535)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 0U)), (4194303LL))))))))));
                }
            } 
        } 
    } 
}
