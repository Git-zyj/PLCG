/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19885
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] &= ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)110)))) + (((/* implicit */int) (signed char)-111))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_16)), (var_8))), (((/* implicit */long long int) ((unsigned short) (unsigned char)122)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) arr_2 [(unsigned char)9] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : (max((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)24245)))), (((arr_2 [i_0] [i_1] [i_1]) ? (-661217252799327208LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)132)), (var_11))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (11461066668591376819ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min(((+((-(((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (short)2046)) : (((/* implicit */int) (unsigned char)231))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72057594004373504ULL)) ? ((~(((/* implicit */int) arr_6 [i_3])))) : (max((((((/* implicit */_Bool) (short)-2047)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_9 [5LL] [i_3])))), ((-(((/* implicit */int) var_16))))))));
                var_21 = ((/* implicit */long long int) 0ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (signed char)-111)))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned short)384))))));
}
