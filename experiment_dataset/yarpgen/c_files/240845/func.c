/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240845
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) 4095ULL))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) (short)-15)))))))));
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)0)) ? (max((4096023626U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)-19)))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)0)))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_1 [(signed char)5]))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            {
                arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2526405537300373192LL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (unsigned short)65535))));
                var_23 = ((/* implicit */int) ((unsigned short) (_Bool)0));
            }
        } 
    } 
}
