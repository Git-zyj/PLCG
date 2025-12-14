/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240325
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)8), ((unsigned short)65527))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_0)))) ? ((+(((/* implicit */int) (unsigned short)33840)))) : (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned short)39235))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8601))) < (arr_2 [i_0] [13LL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : (arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56955))))) || (((/* implicit */_Bool) (unsigned char)191))));
                    arr_9 [i_0] [(unsigned short)0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)39219))));
                    var_11 = ((/* implicit */_Bool) -510489085);
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned long long int) (signed char)-47);
}
