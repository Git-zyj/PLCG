/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237636
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
    var_14 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (767001161U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67)))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((((var_0) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), ((~(21LL)))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned char)15))) <= ((+(((/* implicit */int) (short)29021)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (((+((-(17U))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_1])))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_5)))) >> (((-1LL) + (28LL)))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((max((4294967295U), (((/* implicit */unsigned int) var_12)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) & (min((-4616865507050311886LL), (((/* implicit */long long int) (_Bool)1))))));
        }
    }
    for (long long int i_2 = 2; i_2 < 8; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((arr_6 [i_2 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2] [4LL])) : (((/* implicit */int) arr_2 [i_2 + 2]))))))))));
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */long long int) min((max((var_5), (((/* implicit */unsigned short) (signed char)83)))), (((/* implicit */unsigned short) var_8))))), (min((min((-215460674708006880LL), (((/* implicit */long long int) var_5)))), (min((var_0), (((/* implicit */long long int) var_9))))))));
    var_22 = ((/* implicit */signed char) max((min((min((8901668029101606870ULL), (((/* implicit */unsigned long long int) (short)22112)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217727ULL)) && ((_Bool)1)))))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_10)), (4294967295U))))))));
    var_23 |= ((/* implicit */short) var_1);
}
