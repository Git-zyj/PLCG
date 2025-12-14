/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53317
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
    var_16 = ((/* implicit */long long int) 4294967295U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_2 [i_0] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)32)))))))), ((~(((long long int) arr_4 [i_1] [i_1] [i_1 + 1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] |= ((/* implicit */short) (-(var_8)));
                                var_17 = min((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))) % (arr_1 [i_0]))), (((/* implicit */unsigned int) (unsigned char)27)))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0])));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_4])) >= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_3] [i_0] [i_0])))))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_4] [i_2] [i_1] [i_0]))))), ((~(arr_4 [i_3] [i_1] [i_2 - 1])))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), (min((((/* implicit */unsigned long long int) var_10)), (4611404543450677248ULL)))))) ? (var_14) : (((((/* implicit */_Bool) ((short) 277641043126110061LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4611404543450677244ULL)))))));
}
