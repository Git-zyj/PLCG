/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38172
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
    var_17 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) <= (var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16)))) : (((min((var_7), (((/* implicit */unsigned long long int) var_8)))) | (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_15)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_2] [8ULL] [8ULL] [i_0])) : (((/* implicit */int) var_1))))) ? (max((var_3), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [(short)2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_1] [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] = ((_Bool) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))))))));
                    var_19 = ((/* implicit */unsigned short) ((2147483647) <= (((/* implicit */int) (unsigned char)59))));
                }
            } 
        } 
    } 
}
