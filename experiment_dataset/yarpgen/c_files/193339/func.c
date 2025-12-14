/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193339
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) ((short) arr_2 [i_0]));
        var_13 = ((/* implicit */long long int) ((unsigned char) 502773038369202627LL));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_3] [i_3] [(short)15]))));
                        var_16 = ((/* implicit */_Bool) ((short) arr_0 [i_3] [i_0]));
                        var_17 = ((/* implicit */_Bool) ((short) arr_4 [i_3]));
                        var_18 = ((/* implicit */unsigned short) arr_7 [(unsigned char)4] [i_1] [i_1] [i_2] [i_2] [(unsigned char)4]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_11 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) % (max((((unsigned long long int) (_Bool)0)), (((/* implicit */unsigned long long int) max((var_4), (var_2))))))));
        var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_9 [i_4]), (arr_10 [i_4] [i_4])))), (((((/* implicit */_Bool) -502773038369202636LL)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_9 [i_4]))))));
        arr_12 [(unsigned char)19] = ((/* implicit */long long int) var_9);
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_1))) | ((~(((/* implicit */int) var_8))))))) : (((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_6]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6])))))));
                var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((((/* implicit */_Bool) var_4)) ? (-502773038369202636LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) 1350291260U)))));
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (var_3))))))));
            }
        } 
    } 
}
