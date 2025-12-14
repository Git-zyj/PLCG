/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220887
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
    var_20 = ((/* implicit */signed char) ((2142290804U) << ((((-(((/* implicit */int) var_0)))) + (13)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) ((((((2142290804U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -140046899)) || (((/* implicit */_Bool) 2152676479U)))))))) << (((((/* implicit */int) arr_0 [i_0])) - (59)))));
        arr_3 [i_0] = (+(min((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [14LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_1] [i_2] &= min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) -284266790786830860LL))))), (((long long int) (unsigned char)0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_13))))) || (((/* implicit */_Bool) arr_1 [i_2]))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-12)) == (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = (-(min((0U), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])))));
    }
}
