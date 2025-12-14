/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227842
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((signed char) (signed char)127))) : (((/* implicit */int) var_9)))) ^ (((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_1 [7U] [7U]))))) >> (((/* implicit */int) (_Bool)1))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)1755))))) + (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) arr_0 [(short)2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)121))))) : (((arr_1 [i_0] [i_0]) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (arr_3 [(unsigned short)10])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56213))) ^ (11132213610549323174ULL))) : (((/* implicit */unsigned long long int) var_0)))) : (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) min((3430784726U), (((/* implicit */unsigned int) (unsigned char)31)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((18446744073709551615ULL) - (18446744073709551592ULL)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_18)) : (2147483647)))));
        var_23 *= ((/* implicit */unsigned long long int) arr_2 [19ULL] [i_2]);
        var_24 = ((/* implicit */short) ((_Bool) 1ULL));
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(3595746215U)))) ? (min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22018)) ? (arr_10 [2U]) : (144221321)))))) : ((+(((((/* implicit */_Bool) (unsigned short)22018)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))))))))));
                var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_8 [i_4 + 2] [i_4 + 3])) : ((~(1ULL)))))));
                var_27 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)-115)) ^ (((/* implicit */int) (unsigned short)0)))));
                arr_13 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45331)))))) ? (22ULL) : (((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_3]))));
                var_28 = ((/* implicit */short) (~(2147483647)));
            }
        } 
    } 
}
