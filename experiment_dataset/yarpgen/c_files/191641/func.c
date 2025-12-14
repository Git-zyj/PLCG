/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191641
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) var_2)), (var_6))))) ? (((long long int) max((var_7), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((int) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */unsigned int) 1963598148)) : (max((var_4), (((/* implicit */unsigned int) var_7)))))));
        var_12 = var_5;
        var_13 *= ((/* implicit */unsigned long long int) (~((+((+(((/* implicit */int) var_5))))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (-1963598162) : (((/* implicit */int) var_5))))))) ? (((int) ((_Bool) -1127407661))) : (-148270144)));
        var_15 += ((/* implicit */unsigned short) min((max((-215126254), (((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)39579)))))), (max((1963598126), (((/* implicit */int) var_1))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 148270143)) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (16383)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (12U)))) : (((((/* implicit */_Bool) (unsigned short)52785)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? ((((_Bool)1) ? (var_2) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5)))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 4294967284U)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) ? (min((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((-148270128), (var_2)))))) : (var_6)));
                    }
                } 
            } 
        } 
    }
}
