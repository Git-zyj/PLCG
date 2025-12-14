/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235080
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
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)65535)))) == (((/* implicit */int) (!(((/* implicit */_Bool) -1988508777))))))))));
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)65526))))) > ((+(((/* implicit */int) (unsigned short)13))))))), (min((min((((/* implicit */unsigned long long int) 830517372U)), (18446744073709551595ULL))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))))));
    var_22 = 2147483647;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (unsigned short)10))));
                                arr_18 [i_1] [i_3] = ((/* implicit */signed char) ((unsigned long long int) 3464449932U));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_1 - 1] [i_2] |= ((/* implicit */signed char) ((int) (-(((/* implicit */int) (!((_Bool)1)))))));
                }
            } 
        } 
    } 
}
