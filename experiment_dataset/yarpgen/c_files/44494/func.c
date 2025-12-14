/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44494
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
    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(var_9)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)55763)), (16155473309598092591ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 &= ((((/* implicit */_Bool) (~(arr_5 [i_1 + 1])))) ? (min((((/* implicit */unsigned int) arr_2 [i_2])), (var_9))) : (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (var_1) : (((/* implicit */unsigned int) var_3)))));
                    var_14 ^= (+(((/* implicit */int) var_8)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (16155473309598092591ULL) : (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((var_0) ? (((/* implicit */unsigned long long int) var_5)) : (16155473309598092591ULL)))))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4))))) : ((-(min((((/* implicit */unsigned int) var_10)), (var_5))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (2291270764111459025ULL)))) ? (max((arr_5 [i_0]), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65408)) || (((/* implicit */_Bool) 2291270764111459002ULL)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((4269040230U) * (((/* implicit */unsigned int) var_3)))) : (((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) var_6)));
                        var_17 = ((/* implicit */unsigned char) arr_3 [i_2]);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (_Bool)1);
}
