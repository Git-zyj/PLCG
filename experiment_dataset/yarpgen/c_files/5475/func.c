/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5475
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
    var_12 ^= (((~(((-6917766874439919153LL) & (((/* implicit */long long int) 2860519823U)))))) != (min((((/* implicit */long long int) var_0)), (var_1))));
    var_13 |= ((((/* implicit */_Bool) 1212196457U)) ? (6992633062028953576LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (short)-7352)))) ^ (((/* implicit */int) var_8)))) + (2147483647))) >> (((var_11) + (4769387411632482980LL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((arr_0 [i_0]) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_1])) < (((/* implicit */int) (unsigned char)133))))) : (((/* implicit */int) var_9)))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5109)) - (((/* implicit */int) (unsigned char)23))))) && (((/* implicit */_Bool) ((unsigned char) 1845524624221375589LL))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
        var_16 -= ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) 6917766874439919152LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [18LL] [18LL])))))), (((/* implicit */int) var_8))));
    }
}
