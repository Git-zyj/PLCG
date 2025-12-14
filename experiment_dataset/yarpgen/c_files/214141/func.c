/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214141
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))) * (67076096ULL)));
    var_12 = max((((/* implicit */unsigned short) var_4)), ((unsigned short)12438));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 901326461U)) ? ((~(((/* implicit */int) (unsigned char)114)))) : (var_8)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)16384)))) : ((+(((((/* implicit */int) (unsigned short)12438)) / (var_8)))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_0 - 1] [i_1] [i_2] [i_4] [i_4]) / (arr_8 [i_0 + 1] [(unsigned short)5] [i_2] [i_3] [9LL])))) ? (arr_8 [5ULL] [i_0 + 1] [i_2] [i_3] [i_4]) : (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0 - 2] [i_0 - 2])), (var_10))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((var_0) ^ (((/* implicit */unsigned int) var_1)))) : (((var_2) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_2] [i_3 - 1] [i_3 + 1] [i_4])))))))));
                                var_17 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
