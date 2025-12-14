/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25414
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_10 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16470)) ? (-3943244904921898573LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56567)) | (((/* implicit */int) (_Bool)1)))))));
                                var_16 = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
                                arr_11 [(unsigned short)4] [i_1] [i_2] [i_1] [(short)6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56567))) <= (-5264549703023328961LL)));
                            }
                        } 
                    } 
                    arr_12 [i_0] [6ULL] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2LL])) ? (5264549703023328961LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (arr_0 [i_1]))))) : (((/* implicit */long long int) ((-634029335) & ((~(((/* implicit */int) var_4)))))))));
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) < (3034224493U)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_4);
}
