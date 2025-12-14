/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3621
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17449)) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)3333)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_13 ^= ((/* implicit */int) ((arr_1 [i_0] [i_0]) ^ (((unsigned long long int) (unsigned short)17429))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_4);
        var_14 = ((/* implicit */unsigned short) var_0);
        arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    }
    var_15 = ((/* implicit */int) (unsigned short)17429);
    var_16 ^= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            {
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)59);
                arr_15 [i_1] [i_2 + 3] = ((/* implicit */unsigned short) min((((((arr_8 [i_1] [i_2]) - (((/* implicit */int) var_12)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1]))))))), (((((/* implicit */_Bool) -184211014)) ? (min((var_5), (((/* implicit */int) (unsigned short)48074)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)26031)) : (((/* implicit */int) (short)8356))))))));
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 313100639)) ? (757897896) : (-184210985)))))))));
                var_17 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))) ^ (max((16634802017308347490ULL), (((/* implicit */unsigned long long int) (unsigned short)48073))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_10 [i_1]) | (((/* implicit */int) ((signed char) min((-1984785423), (((/* implicit */int) (unsigned char)185)))))))))));
            }
        } 
    } 
}
