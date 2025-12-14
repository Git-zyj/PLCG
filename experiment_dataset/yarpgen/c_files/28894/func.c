/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28894
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */signed char) max(((~(((/* implicit */int) min(((unsigned short)56034), (((/* implicit */unsigned short) (unsigned char)203))))))), (((/* implicit */int) var_0))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                    }
                    var_12 &= ((/* implicit */signed char) max((min((((unsigned int) var_3)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9248)) ? (((((/* implicit */_Bool) 2959394341U)) ? (((/* implicit */int) (unsigned char)139)) : (var_7))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) var_3)))))))));
                    arr_11 [20ULL] [20ULL] [i_2] [i_2 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) -6518506732793121630LL)))), (((var_4) ? (15336061877655949160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((7077900043136988069ULL) + (((/* implicit */unsigned long long int) -118504132469220658LL)))) : (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (+(((long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (5999839024881809287LL))))));
    var_14 = 15336061877655949160ULL;
}
