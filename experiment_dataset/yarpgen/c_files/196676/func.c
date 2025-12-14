/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196676
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] |= ((((/* implicit */_Bool) (~(min((5037994282335995520ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))) ? ((~(1414360545))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (unsigned short)22316))))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_0 [i_1]);
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50)))))));
                    var_20 = max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_2)))) ? ((+(13408749791373556095ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))), ((-(13408749791373556096ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                {
                    var_21 &= ((/* implicit */unsigned int) (unsigned short)38745);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_25 [i_3] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_14 [i_3]);
                                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_17 [i_3] [(short)7] [(short)7]))))) - (var_7)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */int) (((+(var_15))) == (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned int) var_12)))))))) ^ (max((max((arr_23 [i_3] [i_3] [i_4] [i_5] [(short)5]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_14 [(signed char)12]), (((/* implicit */short) var_8)))))))));
                    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 3])) ? (max(((+(((/* implicit */int) arr_17 [i_3] [i_3] [(_Bool)1])))), (min((0), (((/* implicit */int) var_16)))))) : (((/* implicit */int) (signed char)-36))));
                }
            } 
        } 
    } 
    var_25 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    var_26 = min((((long long int) max((((/* implicit */long long int) var_8)), (var_1)))), (((/* implicit */long long int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (unsigned char)255))))) == (((/* implicit */int) (short)32745))))));
}
