/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207343
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
    var_11 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19157)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46385))) : (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_10) : (12155713075055356696ULL)))) ? (((/* implicit */int) max(((unsigned short)46379), ((unsigned short)46385)))) : (((((/* implicit */_Bool) (unsigned short)46390)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_0])) : (arr_5 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)46379)), (var_9))))))))))));
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46379))) : (13690841486393054354ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 4] [i_2 + 1] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)77))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46379)))));
    var_14 = ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)46389)));
}
