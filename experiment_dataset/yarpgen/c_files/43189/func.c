/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43189
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
    var_19 = ((/* implicit */signed char) var_18);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) var_10);
                    var_21 = ((/* implicit */unsigned long long int) (short)16091);
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-16083))) >= (-1666310362166723671LL)))) : (((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned short) var_16))))))), (((((/* implicit */_Bool) (~(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)57)) && (((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (short)25364)) : (((/* implicit */int) (signed char)-48))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((((-1214121296848307517LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)237)) - (186))))))) <= (((min((8646911284551352320ULL), (((/* implicit */unsigned long long int) 4278190080U)))) | (((/* implicit */unsigned long long int) 136326867))))));
                }
            } 
        } 
    } 
}
