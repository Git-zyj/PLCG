/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193285
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_11 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0 - 1] [16U])) ? (arr_0 [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_6))))))));
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)-24579)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7)))))) + (max((max((11286781295442475849ULL), (((/* implicit */unsigned long long int) var_6)))), (((unsigned long long int) 5852389920054923357LL))))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) var_7);
        arr_4 [(short)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_6))))) ? ((-(524287U))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)56345)) ^ (((/* implicit */int) (unsigned short)56345)))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 *= ((4294443009U) < (((((/* implicit */_Bool) (signed char)-31)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9191))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_13 -= ((/* implicit */unsigned char) (((+(arr_8 [i_0 - 1] [i_3] [i_3] [i_3]))) * (arr_8 [i_0 + 2] [i_2] [i_2] [i_3])));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25568))) < (arr_0 [i_1] [i_1])))) | (((-102729073) + (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3])))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(arr_0 [i_0 + 1] [i_1]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_16 *= ((/* implicit */short) ((unsigned int) (short)24596));
                        var_17 -= ((/* implicit */unsigned short) ((464738319) ^ (((((/* implicit */int) (unsigned short)9185)) & (((/* implicit */int) arr_1 [i_0 + 1]))))));
                        var_18 |= ((/* implicit */unsigned long long int) ((unsigned int) 1821175380U));
                        arr_14 [i_0] [(_Bool)1] [i_2] [i_4] &= ((/* implicit */unsigned char) (+(((524285U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)24601)))))));
                    }
                    var_19 -= ((/* implicit */int) var_6);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
    var_21 = ((/* implicit */unsigned int) var_0);
}
