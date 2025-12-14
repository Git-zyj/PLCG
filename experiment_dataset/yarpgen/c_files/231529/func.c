/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231529
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(-3944104267231372041LL)))))) ? (((/* implicit */long long int) var_12)) : (max((var_15), (var_9)))));
        var_18 -= (!((!((!(((/* implicit */_Bool) var_12)))))));
        var_19 = ((/* implicit */unsigned int) var_5);
    }
    var_20 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_15))), (((/* implicit */long long int) min((var_3), (var_16))))))));
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~((((_Bool)0) ? (((/* implicit */unsigned int) -1606253892)) : (457199216U))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (unsigned short)24763)) ? (min((-1606253891), (arr_3 [i_1]))) : ((~(((/* implicit */int) (_Bool)1)))))))))));
                    var_23 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((740241314U) >> (((var_1) - (3840446295U)))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_13))));
    var_25 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)9)) < (((/* implicit */int) ((unsigned char) (signed char)-32)))))), (((((/* implicit */_Bool) var_5)) ? (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7121578320896588758LL))) : (var_9)))));
}
