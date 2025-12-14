/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27600
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))) ? (((/* implicit */int) (unsigned short)6831)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)58704)) : (((/* implicit */int) var_6))))))));
    var_18 -= var_1;
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */signed char) 144080003703767040ULL);
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4161536ULL) / (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 3] [(unsigned short)6] [i_2])) : (((/* implicit */int) arr_1 [i_1 - 3]))))) ? (((/* implicit */int) (unsigned short)65112)) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) >= (36028797018963968ULL))))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) ((3ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0] [i_0])))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 9063770246072556621ULL))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_23 *= ((/* implicit */signed char) ((((arr_1 [i_3 - 2]) ? (639523907) : (((/* implicit */int) arr_1 [i_3 - 2])))) >> ((((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) || (((/* implicit */_Bool) 25ULL))))))) - (41503)))));
        arr_10 [i_3] [i_3] = min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)));
        arr_11 [i_3] &= ((/* implicit */_Bool) ((int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)27161))));
    }
}
