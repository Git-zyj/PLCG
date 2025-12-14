/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228459
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
    var_11 = ((/* implicit */unsigned int) ((unsigned char) -1075266642));
    var_12 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1)))))))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)0))))));
        var_14 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) arr_0 [i_0 - 1]))))))), (((unsigned long long int) max((var_0), ((unsigned char)131))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (((((+(25ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) && (((/* implicit */_Bool) var_8))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14427)) && (((/* implicit */_Bool) (unsigned char)124))));
                }
            } 
        } 
    } 
    var_17 = var_5;
}
