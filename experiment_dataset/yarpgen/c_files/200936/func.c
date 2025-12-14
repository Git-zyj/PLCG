/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200936
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((3451505301822621214LL), (((/* implicit */long long int) (signed char)-53)))))));
        var_19 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)15))))));
        var_20 = ((/* implicit */_Bool) (+(min((-3451505301822621214LL), (((/* implicit */long long int) (_Bool)1))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (signed char)-15);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) (+((~(-3451505301822621215LL)))));
                            arr_15 [i_4] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (+(max((3451505301822621204LL), (((/* implicit */long long int) 1850635705U))))));
                            arr_16 [(signed char)4] [i_2] [i_4] [i_3] [8LL] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)125))));
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)162))));
    }
    var_24 = (unsigned short)54316;
    var_25 = ((/* implicit */signed char) (+(min((2444331590U), (((/* implicit */unsigned int) (_Bool)1))))));
}
