/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193987
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [21] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_0))) < (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) 130048))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1))))) ^ (var_2))) & (((((((/* implicit */_Bool) arr_6 [8] [i_1] [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) & ((~(arr_4 [i_2])))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_4))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-119)))) : (((/* implicit */int) (_Bool)1))))) ? (4414171220239271760LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)1)))))));
        var_20 *= ((/* implicit */short) min((var_13), (min((var_16), (((/* implicit */unsigned long long int) var_5))))));
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (min((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_4])))))));
        arr_15 [i_4] [i_4] = min((((/* implicit */unsigned long long int) min((arr_2 [i_4]), (((/* implicit */unsigned int) var_3))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))), (min((((/* implicit */unsigned long long int) var_1)), (var_16))))));
        arr_16 [i_4] = ((/* implicit */unsigned short) 3255932090U);
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_0)))) ? ((-(((/* implicit */int) (unsigned char)127)))) : ((~(((/* implicit */int) arr_18 [i_5] [i_5]))))));
        var_22 -= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_1), (((/* implicit */short) var_7))))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_0)))))));
    }
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) < (var_12))))))) % ((~(6654553017199293304ULL))));
    var_24 = ((/* implicit */signed char) var_3);
}
