/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51825
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) | (((var_0) << (((((var_7) + (6295803784728575764LL))) - (47LL))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -2017460577)) : (((((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (-118237946630515078LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_5))))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3))))))) | (min((min((var_0), (var_0))), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned short)62631)) : (((/* implicit */int) var_5))))), (var_7))))));
                        var_12 = ((/* implicit */signed char) arr_12 [(unsigned char)4] [i_3] [(signed char)4] [i_1]);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_3)))))) | (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (199))))))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(((4294967294U) << (2U))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) % ((~(((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
}
