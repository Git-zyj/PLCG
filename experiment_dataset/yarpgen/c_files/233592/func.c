/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233592
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [(signed char)8] = ((/* implicit */signed char) var_8);
        arr_3 [i_0] = ((/* implicit */signed char) ((((_Bool) arr_0 [i_0 + 1])) ? ((~(((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_5))))) : (((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (57))))) | (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (_Bool)1)))))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_0 [i_0 + 1]), (var_1))))));
    }
    for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)59))));
                        arr_16 [i_1 - 1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) arr_14 [i_1] [10LL] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
                        arr_17 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!((_Bool)0)));
                        arr_18 [i_2] [i_2] [(signed char)6] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-39))));
                        arr_19 [i_3] [i_2] [(_Bool)1] [i_3] = ((/* implicit */signed char) (~(min((arr_6 [i_1 - 4]), (((/* implicit */long long int) arr_10 [i_2] [i_2]))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (signed char)9)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)127))))));
        arr_23 [i_5] = ((/* implicit */_Bool) var_6);
        arr_24 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)127)) < (((/* implicit */int) (signed char)-104))))) >> (((((/* implicit */int) ((_Bool) (signed char)-80))) / (((/* implicit */int) (signed char)88))))));
        arr_25 [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) var_4))) ? (((var_6) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-80)))))))));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        arr_29 [i_6] [12LL] = ((/* implicit */long long int) (-((~(((/* implicit */int) ((((/* implicit */int) arr_27 [i_6])) < (((/* implicit */int) arr_27 [i_6])))))))));
        arr_30 [i_6] = ((/* implicit */_Bool) (signed char)80);
    }
    var_12 = (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-120))));
    var_14 = var_4;
}
