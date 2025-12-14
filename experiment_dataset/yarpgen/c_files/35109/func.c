/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35109
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned short)512)))) < (((((/* implicit */int) (unsigned short)50856)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)2306)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))) >= ((+(((25165824) * (((/* implicit */int) var_7))))))));
                                var_13 = ((((/* implicit */_Bool) (+(max((((/* implicit */int) var_9)), (var_5)))))) ? (((((/* implicit */long long int) 25165813)) + (2940546721620114688LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-25165830)))) ? (max((arr_0 [i_0]), (-25165833))) : (((/* implicit */int) var_1))))));
                                var_14 = ((/* implicit */long long int) arr_6 [i_0] [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -3974725480221278492LL)) + (arr_7 [(signed char)14] [(signed char)14] [i_2]))) >= (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (-25165824)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 25165847)) ? (((/* implicit */int) var_11)) : ((+(-25165831)))))));
}
