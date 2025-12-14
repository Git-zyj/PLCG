/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212330
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (((((/* implicit */int) (_Bool)1)) * (arr_2 [i_1 + 1]))) : ((+(1114168129)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 3LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))), (((((/* implicit */_Bool) (unsigned short)48244)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29835))))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_13 ^= ((/* implicit */_Bool) (+(var_4)));
                            var_14 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_16 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) var_5))));
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4754225154861210131ULL)) ? (((((/* implicit */_Bool) var_2)) ? (-200941123357416007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((var_7) ^ (((/* implicit */int) (unsigned short)7421))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13444125138512515179ULL)) ? (var_4) : (((/* implicit */long long int) var_10))))) || (((/* implicit */_Bool) ((int) var_4))))))));
    var_18 = ((/* implicit */long long int) 10901948598991781199ULL);
}
