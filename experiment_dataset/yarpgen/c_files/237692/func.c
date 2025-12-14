/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237692
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
    var_10 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) 96671910)) ? (-3064218639311278642LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (((((/* implicit */_Bool) var_3)) ? (3945693540U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
            var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((long long int) var_7))));
        }
        var_13 = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))))) ? (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 6; i_5 += 1) 
                    {
                        {
                            var_15 = max((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)0)) : (var_5)))))), ((~(-9223372036854775800LL))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8803038361679113296ULL)) ? (var_1) : (var_1)))) : (-1986853784463853038LL))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_9))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 1986853784463853023LL)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (-1)))) : (min((((/* implicit */long long int) (_Bool)1)), (-1LL)))))));
            }
        }
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (min((6), (((/* implicit */int) (unsigned short)0)))) : (((int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_4))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (min((((/* implicit */unsigned long long int) 280375465082880LL)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (10880942886081901709ULL))))))))));
}
