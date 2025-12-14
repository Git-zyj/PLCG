/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191954
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
    var_10 -= ((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((_Bool) (short)30057)))));
    var_11 = (!(((/* implicit */_Bool) var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned int) var_9);
        var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_1 [(unsigned char)5])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((unsigned int) (+(arr_1 [i_1])))))));
        var_15 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30057))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30051)) * (((/* implicit */int) var_8))))))) << (((arr_1 [i_1]) + (908402863)))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_8))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_17 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_11 [4U] [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (14U))))), (((unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3 + 1]))))) || (((/* implicit */_Bool) ((int) arr_4 [i_2] [i_3 - 2])))));
                    }
                } 
            } 
        } 
        var_19 &= ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)57045)))));
    }
    var_20 += ((/* implicit */_Bool) ((unsigned long long int) ((long long int) var_6)));
    var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((1802322276), (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (var_3)))));
}
