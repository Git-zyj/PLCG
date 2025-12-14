/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42443
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % ((-(((((/* implicit */_Bool) var_7)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = (!(((/* implicit */_Bool) var_1)));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (-3243480282837829790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = min((((/* implicit */long long int) (_Bool)1)), ((-((-(arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]))))));
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((unsigned long long int) -1635443946)) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1] [i_2] [i_3]), (((/* implicit */unsigned char) (_Bool)1))))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 4; i_4 < 18; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((((int) arr_11 [i_4] [i_4 - 4])), ((~(((/* implicit */int) var_1))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
    }
    var_24 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-484319760445893021LL));
    var_25 = ((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) 2965772348U))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_1))));
}
