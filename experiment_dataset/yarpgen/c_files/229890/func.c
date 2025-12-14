/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229890
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
    var_14 -= ((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (3563340314663041506LL)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49030)) ? (((/* implicit */long long int) var_9)) : (3563340314663041506LL)))) ? (13744769714714003133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_11)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (3563340314663041509LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (short)6672)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3205360296U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) var_9);
                arr_5 [i_0] [i_1] [(unsigned char)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) (short)6672))) : (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (short)-31341))))))) ? (((((/* implicit */_Bool) 18446744069414584320ULL)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6648))) ^ (471947536U)))) : (-2261838829989091570LL))) : (((/* implicit */long long int) 3645107109U))));
            }
        } 
    } 
}
