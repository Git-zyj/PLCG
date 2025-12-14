/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234835
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) var_7);
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 1722445893))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_0))))));
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (-4144513919061567151LL) : (4144513919061567163LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) != (var_3))))))), (((/* implicit */long long int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22784)))))))))));
                var_12 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4144513919061567155LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38565)) ? (8708901593120487296ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~(var_0)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-3765127053138099789LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26793)))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_16 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned char) (signed char)-65))));
}
