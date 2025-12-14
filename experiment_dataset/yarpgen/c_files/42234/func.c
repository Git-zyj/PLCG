/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42234
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((-8047565551038144331LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (((/* implicit */long long int) ((/* implicit */int) min((var_4), (var_0))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))))))));
        var_16 |= ((/* implicit */int) -8047565551038144318LL);
        var_17 = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_12)))));
        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)3082)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) == (-942457690)))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)57849)))));
            arr_7 [i_0] [i_1 + 1] = ((max((8047565551038144330LL), (((/* implicit */long long int) (signed char)-77)))) >> (((((((/* implicit */_Bool) (unsigned char)171)) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) 1311132817U)))) - (4611686018427387849ULL))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (max((var_2), (((/* implicit */long long int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
            var_20 += ((/* implicit */unsigned int) ((long long int) var_9));
        }
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)28901), (((/* implicit */short) var_3))))) >= ((-(((/* implicit */int) (unsigned char)198))))))), (((((((/* implicit */_Bool) 4206343392U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) << (min((((/* implicit */unsigned int) var_0)), (var_7))))))))));
}
