/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220024
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
    var_12 = ((/* implicit */short) var_1);
    var_13 = (~(((long long int) ((((/* implicit */_Bool) 336759904)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [21] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52874))) : (((((/* implicit */_Bool) 0ULL)) ? (9776758663004089557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [8] [i_1]))))))) : (max(((~(0ULL))), (((/* implicit */unsigned long long int) ((long long int) 9776758663004089557ULL)))))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23500)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_13 [i_0] [i_0] [i_1] [(_Bool)1] [i_1] [(short)18] = ((short) ((9776758663004089557ULL) / (4904700313857222797ULL)));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [1ULL] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)12659)) > (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)8])))) ? ((+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) var_8)) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62)))));
                arr_15 [i_0] = ((/* implicit */unsigned char) ((short) ((2510099826792877LL) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_1] [i_1] [i_0] [i_0])))))));
                arr_16 [11] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (min((9776758663004089567ULL), (((/* implicit */unsigned long long int) (signed char)-76))))));
            }
        } 
    } 
}
