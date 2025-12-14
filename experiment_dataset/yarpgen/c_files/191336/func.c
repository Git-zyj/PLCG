/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191336
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
    var_20 = ((/* implicit */int) var_19);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_2 + 2] [i_0] [i_1] = ((((/* implicit */int) arr_7 [i_0] [i_1])) << (((((/* implicit */_Bool) -1516150856360184558LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((-6873721413924213311LL) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((long long int) (unsigned short)16006)))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(arr_4 [i_1 + 1] [i_1])))))) ? (min((8969384713332503511ULL), (((/* implicit */unsigned long long int) (signed char)-120)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            var_22 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_3 + 2]))));
            arr_11 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-109))));
            var_23 -= ((/* implicit */_Bool) ((int) var_12));
        }
    }
    var_24 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_18))))));
    var_25 = (-(-2001100807));
}
