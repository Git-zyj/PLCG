/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234587
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
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (min((16443129107855336749ULL), (((/* implicit */unsigned long long int) -3773300939011376538LL))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) min((var_1), (((/* implicit */short) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_3 + 3] [i_3 + 3])) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_0))))))))));
                        var_20 -= max((((/* implicit */unsigned long long int) (short)16384)), ((+(arr_6 [i_2 - 2] [i_3 - 2]))));
                        arr_8 [12ULL] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_7) << (((/* implicit */int) var_14))))))) ? (((((/* implicit */unsigned long long int) -674105753)) % (6493791188582569992ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    }
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    var_22 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned int) var_14))));
    var_23 += ((/* implicit */signed char) max((11952952885126981638ULL), (((/* implicit */unsigned long long int) (signed char)42))));
}
