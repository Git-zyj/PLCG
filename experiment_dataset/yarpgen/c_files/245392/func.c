/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245392
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) var_6);
        var_15 = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1] [i_1]))) ? (16704271242173273562ULL) : ((+(var_4))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) 1742472831536278054ULL);
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (5035267536906124959LL)));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) arr_7 [i_2]))) ? (((/* implicit */int) ((unsigned short) 763710795523375456ULL))) : (((/* implicit */int) arr_1 [i_2])))) << (((((((((/* implicit */_Bool) max((arr_3 [i_2]), (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2]))))) : ((+(5765005963637862463LL))))) + (48951LL))) - (12LL)))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_2] [i_2])), (var_7)))) : (((/* implicit */int) arr_7 [i_2])))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(-1153715151691048371LL))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        var_20 = ((/* implicit */long long int) arr_12 [i_3] [i_3]);
        var_21 = ((/* implicit */unsigned long long int) var_1);
        arr_15 [i_3] = arr_11 [i_3];
    }
}
