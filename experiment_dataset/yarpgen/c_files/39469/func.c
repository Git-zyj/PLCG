/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39469
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
    var_11 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) max(((signed char)85), ((signed char)-113)))))))));
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-114)) >= (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) var_8)) : (627196523)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((signed char)67), (var_5))))))) : (var_7)));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_1 - 3])))))));
            arr_6 [i_0] |= ((/* implicit */signed char) (-((-(max((((/* implicit */int) var_8)), (117440512)))))));
            var_14 = ((/* implicit */signed char) min((var_14), (((signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24441)))) : ((~(((/* implicit */int) var_6)))))))));
        }
        for (signed char i_2 = 4; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_15 = min(((-(var_3))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_10)))) != (((/* implicit */int) min(((unsigned char)0), ((unsigned char)255))))))));
            arr_11 [i_2] = ((/* implicit */unsigned char) var_9);
            arr_12 [i_2] = ((/* implicit */_Bool) (-(1227987296)));
            arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)24576)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-23))))));
        }
        /* vectorizable */
        for (signed char i_3 = 4; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)35831)) ? (((/* implicit */int) (unsigned short)44540)) : (((/* implicit */int) var_0))))))));
            var_17 ^= ((/* implicit */int) arr_7 [i_0 - 2] [i_3 - 2]);
            var_18 = ((/* implicit */unsigned long long int) var_9);
            arr_16 [i_3 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_3])) >> (((((/* implicit */int) arr_10 [i_3])) - (91)))));
        }
        arr_17 [i_0 + 1] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((~(18132751963221956424ULL))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10)))))))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_2)))) != ((~(((/* implicit */int) var_8))))))) : (((/* implicit */int) ((signed char) var_2)))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) max((var_4), (((/* implicit */unsigned short) var_10))))))));
}
