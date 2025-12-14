/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244001
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
    var_13 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_12)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 *= ((/* implicit */int) ((((var_7) != (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_15 = min((((/* implicit */int) (((+(((/* implicit */int) var_1)))) != (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) var_2))))))), ((+((-(var_3))))));
            var_16 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2))))) % ((~(((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (~(var_3)))) ? (max((var_3), (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))))));
        }
        for (short i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_11 [i_4] [i_0] = ((/* implicit */unsigned short) min(((~(var_7))), (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)111))))) : ((~(((/* implicit */int) var_5))))))));
                        var_17 += ((/* implicit */unsigned int) var_0);
                        arr_12 [i_0] [(unsigned char)10] [(unsigned char)10] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_8))))))) ? (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-112)))))) : ((~(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
            arr_13 [(short)6] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (max((((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_5)))))))));
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) max((var_8), ((!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) var_4))))))));
        }
        arr_14 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)100))));
        arr_15 [(unsigned char)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (607496201U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))));
    }
}
