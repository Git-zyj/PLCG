/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208364
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) min((((((unsigned int) (unsigned short)5)) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)214)) ^ (((/* implicit */int) (signed char)-119))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))) != (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))))))));
                    arr_8 [i_0] [i_2] [i_2 - 1] = min((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_1]), (arr_0 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_0]))) ^ (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (arr_1 [i_0])))) : (((/* implicit */int) min((arr_1 [(unsigned char)1]), (((/* implicit */unsigned short) (unsigned char)16))))))));
                }
            } 
        } 
    } 
    var_19 = ((((((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18)))))) | ((+(((/* implicit */int) var_1)))));
    var_20 += ((/* implicit */unsigned char) (((((+(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) var_16)) << (((var_7) - (16794530052746870124ULL))))))) >> (((max((((/* implicit */long long int) var_8)), (min((var_4), (((/* implicit */long long int) (unsigned char)89)))))) - (1413635371LL)))));
}
