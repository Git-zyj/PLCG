/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201493
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
    var_18 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) var_17))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30307))) : (max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [1ULL] [i_0])), ((~(arr_9 [i_0])))))));
                                var_19 &= ((/* implicit */unsigned int) ((((unsigned long long int) var_9)) < (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33581)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_0] [i_1 - 1])))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) 9064036575380111853ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)992)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)5295))))) ? (var_12) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_3 [(unsigned short)10]))))))));
            }
        } 
    } 
}
