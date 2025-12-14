/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214486
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)103)) >> (((/* implicit */int) ((_Bool) var_9)))));
    var_11 = ((/* implicit */unsigned long long int) (!(((_Bool) max((((/* implicit */unsigned long long int) 0)), (7929335953087225210ULL))))));
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_1)), (max((3560521211U), (((((/* implicit */_Bool) (unsigned short)12571)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))))));
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) / (arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) -728434770)) : (0U)));
                arr_5 [10ULL] [10ULL] [9LL] = ((/* implicit */unsigned char) ((((unsigned int) ((arr_1 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) >> (((/* implicit */int) (!(((arr_2 [i_1] [i_0]) <= (((/* implicit */unsigned long long int) 728434756)))))))));
                var_14 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [11])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_2 [i_0 + 3] [2])))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_3 [8U] [8U] [i_0 + 1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (18446744073709551598ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967290U)) || (((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1] [i_1])))))))) : (((unsigned int) arr_2 [i_0 + 2] [i_0 + 2]))));
            }
        } 
    } 
}
