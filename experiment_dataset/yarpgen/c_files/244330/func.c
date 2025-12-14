/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244330
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)51)), (var_8)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max(((unsigned short)22), (((/* implicit */unsigned short) (unsigned char)51))))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)51))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)21)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1])))))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(var_8)))), (max((8507434628670201713ULL), (15637360632670185035ULL))))))));
                        }
                    } 
                } 
                arr_15 [i_1] = max((17404039162289036210ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(var_3)))), (((long long int) arr_9 [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_11)), (min((max((9939309445039349911ULL), (994020968203291783ULL))), (((var_4) - (18446744073709551615ULL)))))));
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (unsigned char)123)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    var_22 = 4294967295U;
}
