/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23134
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (((+(arr_3 [i_1]))) - ((+(arr_3 [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_12);
                            var_14 -= (+(-969634329496322475LL));
                            var_15 -= ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) -3653167716768339711LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34786))) : (var_6))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_6)))))))));
                        }
                    } 
                } 
                var_16 = arr_4 [i_1];
                var_17 = ((((/* implicit */_Bool) ((((min((969634329496322475LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))) + (9223372036854775807LL))) >> ((((((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)8]))))) - (66ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [3LL]))) : ((-(min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1])), (var_3))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-283))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) : (min((8558160146404684627LL), (4694189068488884656LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)));
}
