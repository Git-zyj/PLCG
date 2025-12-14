/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20212
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
    var_10 = ((/* implicit */unsigned char) ((-373622733113032657LL) & (((/* implicit */long long int) 4294967295U))));
    var_11 ^= ((/* implicit */short) 0U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((1829528605) / (1829528585)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned long long int) var_9);
                    var_13 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2]);
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */long long int) min((min((11172084137245712723ULL), (((/* implicit */unsigned long long int) 373622733113032635LL)))), (6390955206456097821ULL)));
                    arr_13 [i_0] [i_1 + 2] = ((/* implicit */unsigned int) var_1);
                    arr_14 [i_0] [i_1 + 1] [i_0] = 4749678870678242513ULL;
                }
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (6797840254879143369LL)))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8))))), ((((_Bool)1) ? (var_2) : (arr_9 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */int) min((arr_6 [i_0] [i_1] [0ULL]), (var_1)))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255)))))))));
            }
        } 
    } 
}
