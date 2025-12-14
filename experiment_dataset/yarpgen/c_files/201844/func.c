/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201844
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 8781614271692587180LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (arr_2 [(short)22])))))) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) 63488))))) : (min((-2296007335917513734LL), (-2296007335917513734LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)35014)) + (((/* implicit */int) (signed char)(-127 - 1))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) && (((((/* implicit */int) var_12)) < (((/* implicit */int) arr_4 [i_3] [i_1]))))))))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4229067911U)))))) : ((+(var_8)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (var_7)))) / (((unsigned int) -673382733)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_3))))))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */int) (unsigned short)35002)) * (((/* implicit */int) var_4)))), (((/* implicit */int) min(((unsigned short)44795), (((/* implicit */unsigned short) var_12))))))));
                        arr_13 [i_0] [i_0] [i_1] [17LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_6)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0])))) == ((-(((/* implicit */int) (unsigned char)0))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (((arr_7 [i_0] [i_1] [i_2] [i_0 - 1]) | (var_6)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (-1946279461)))) ? (((/* implicit */long long int) ((549438115) + (-1946279461)))) : (-1LL)))) : (min((((/* implicit */unsigned long long int) var_2)), (var_8)))));
    }
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}
