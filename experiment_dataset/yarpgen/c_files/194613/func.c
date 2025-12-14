/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194613
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
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_4)) : (var_8))) / ((+((+(((/* implicit */int) var_5))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_10 [i_2] [8ULL] [(signed char)1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_19)) % (var_15))) * (((/* implicit */unsigned long long int) (~(4294967295U))))));
                    var_22 = (-(((((((/* implicit */unsigned int) ((/* implicit */int) (short)24669))) ^ (4294967268U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))));
                }
                for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_19)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */int) var_13))))))))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
                    arr_13 [(unsigned char)8] [i_0] [i_1] [i_0] = ((/* implicit */int) (+(((unsigned long long int) var_3))));
                }
            }
        } 
    } 
}
