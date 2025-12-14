/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3246
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
    var_20 = ((/* implicit */short) var_18);
    var_21 = ((/* implicit */signed char) min((((((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19)))) << (((var_0) - (5414607201691788797LL))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) 5992927089074708020LL);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [7U])))), (((/* implicit */int) (unsigned short)39444))))) ? (((arr_0 [i_0]) ? (((/* implicit */int) ((-879732975) == (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)116)) && (((/* implicit */_Bool) var_19))))))) : (879732975)));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18517)) / (((/* implicit */int) (unsigned char)49))));
        var_23 = ((/* implicit */long long int) min((min((arr_1 [i_0]), (((/* implicit */signed char) arr_0 [i_0])))), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)89)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)28881)) <= (-2147483646))))));
        arr_8 [(short)4] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_5 [(signed char)22] [(signed char)22]))))));
    }
}
