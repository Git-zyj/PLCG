/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49991
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
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)58253)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8643943293004047899LL))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (max((((/* implicit */unsigned long long int) var_14)), (9411607857578992682ULL))))))));
    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) (unsigned short)58253))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_14))), (((/* implicit */int) (unsigned short)7282))))) : (var_3)));
    var_19 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_4))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) max(((signed char)55), (((/* implicit */signed char) arr_2 [i_0]))))) + (arr_0 [i_0 - 3]))) | (((/* implicit */int) ((signed char) -1025525785)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (-1025525785) : (arr_5 [i_0] [i_1] [i_0])))), (4772074260219510362LL))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(arr_10 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15))))))));
                    var_21 = ((/* implicit */_Bool) min((((arr_6 [i_2] [(short)1]) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0 - 2])))), (((((/* implicit */_Bool) (~(var_3)))) ? (max((1025525780), (1025525782))) : ((-(arr_0 [i_0])))))));
                }
            } 
        } 
        var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) (short)22413)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-37)) <= (((/* implicit */int) (short)22739)))))))) != (((unsigned long long int) (_Bool)1)));
    }
    for (long long int i_3 = 3; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_15 [6] |= ((((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)21)) ^ (((/* implicit */int) var_7))))))) & (-4772074260219510368LL));
        var_23 = ((/* implicit */_Bool) (+(((-1025525786) * (((/* implicit */int) (_Bool)1))))));
    }
}
