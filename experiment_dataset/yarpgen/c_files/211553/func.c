/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211553
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) var_1);
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)32747)) - (32742)))))))), (((((/* implicit */long long int) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) & (((var_4) << (((((/* implicit */int) (unsigned char)108)) - (107)))))))));
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (signed char)51))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_12 = (signed char)-51;
                        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) 473238729U)) ? (((/* implicit */int) (signed char)-52)) : (((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */long long int) 29U)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (5345147985537017925LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((5345147985537017906LL) << (((4294967242U) - (4294967242U)))))));
}
