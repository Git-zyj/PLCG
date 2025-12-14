/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28918
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_0 [i_0])));
        var_11 = ((/* implicit */signed char) max((var_11), (((signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_12 *= ((/* implicit */short) var_0);
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_4 [i_1]))) + (((/* implicit */int) ((unsigned char) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) ((long long int) var_5))) ? (min((((/* implicit */long long int) arr_4 [i_1])), (arr_3 [i_1]))) : (((/* implicit */long long int) ((unsigned int) arr_3 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
        arr_6 [i_1] [17LL] = ((/* implicit */unsigned char) arr_4 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) arr_5 [i_1]))))), (((((/* implicit */_Bool) (unsigned short)37388)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28171))) : (3648477007234207750LL)))));
        var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned int) (unsigned short)64092))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_9))) + (((/* implicit */int) max((arr_5 [(short)21]), (((/* implicit */unsigned short) var_5))))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
    {
        var_15 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) var_4))))))))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)37377)) - (((/* implicit */int) (unsigned short)37365)))) + (((/* implicit */int) arr_4 [i_2 + 3]))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_17 = ((long long int) arr_10 [i_3]);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6])))))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3])))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_4]))) ? (((/* implicit */int) arr_13 [i_4] [i_5])) : (((/* implicit */int) arr_18 [i_3] [(unsigned char)10] [i_5])))))));
                    }
                } 
            } 
        } 
        arr_20 [(unsigned char)10] [i_3] |= ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) var_2)))));
        arr_21 [i_3] = ((/* implicit */short) ((long long int) var_7));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) ((_Bool) ((int) var_1)))) << ((((+(((var_3) << (((var_8) - (1925520327))))))) - (1686383612))))))));
}
