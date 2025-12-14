/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217775
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned short)62796)) << (((((((/* implicit */int) (short)-11)) + (35))) - (11)))))))) % (min((((/* implicit */long long int) ((var_8) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (unsigned short)19)) ? (-6398484461233618484LL) : (((/* implicit */long long int) 247277682U))))))));
    var_17 = ((/* implicit */_Bool) var_14);
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((var_12), (var_4))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((745411331U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18995)))))))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)19015)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (short)-8)) ? (486871733190656304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */unsigned short) min((((1048455029400258527LL) << (((4294967295U) - (4294967294U))))), (((/* implicit */long long int) -2052583957))));
                                var_19 = ((/* implicit */short) arr_13 [i_0] [i_1] [i_2] [(signed char)3] [(signed char)10]);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_5 [i_1]))));
                var_21 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
}
