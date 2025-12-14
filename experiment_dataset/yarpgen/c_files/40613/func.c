/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40613
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)6] [i_1] [(unsigned short)0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 0)) : (3487030586326051723ULL))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
                    arr_8 [(unsigned char)3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7)));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = (signed char)-67;
    }
    var_20 = ((/* implicit */int) (signed char)80);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-81))))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) (+(2110279978)))) : (((((/* implicit */_Bool) (unsigned short)31803)) ? (8417602650272588531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
