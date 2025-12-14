/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23242
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */long long int) var_7)) : ((+((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 4])) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 4])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1]))))))))));
                    var_12 ^= ((/* implicit */unsigned char) (_Bool)1);
                    arr_9 [i_2] [i_0] [(signed char)14] [6LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_0 [i_2 - 4])) : (((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) arr_2 [i_3]);
        var_13 = ((/* implicit */signed char) arr_3 [(unsigned char)13]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) min((arr_19 [i_3]), (((/* implicit */unsigned int) ((var_4) % (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)110)) >= (268435455)));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1))))));
}
