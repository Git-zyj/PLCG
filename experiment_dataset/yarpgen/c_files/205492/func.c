/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205492
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
    var_15 = max(((+(((/* implicit */int) (unsigned short)20842)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (-1416558759) : (((/* implicit */int) var_7)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -1LL)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)9] [i_2] [i_2] [i_2] = ((((((/* implicit */int) var_11)) / (-474129965))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min(((unsigned short)35780), ((unsigned short)33939)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (var_3))))) - (33921))));
                    var_16 = ((((/* implicit */_Bool) 524284)) ? (((/* implicit */int) (unsigned short)31596)) : (((/* implicit */int) (signed char)6)));
                }
            } 
        } 
    } 
}
