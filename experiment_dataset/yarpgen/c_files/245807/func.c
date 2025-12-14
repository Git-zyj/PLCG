/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245807
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
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1])) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))) : (((var_15) >> (((/* implicit */int) (unsigned char)5)))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~(4786120874829433221ULL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_12 [(_Bool)1] [10ULL] [(_Bool)1] = ((((arr_5 [i_2 + 1] [i_1 - 1]) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)242)))) * (((/* implicit */int) (_Bool)0)));
                            arr_13 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_16)) << (((((min((arr_4 [i_1 - 1] [i_1 - 1] [i_2 + 1]), (((/* implicit */long long int) (signed char)-112)))) + (133LL))) - (5LL)))));
                            arr_14 [i_2] = ((/* implicit */signed char) (unsigned char)5);
                        }
                    } 
                } 
                arr_15 [(unsigned short)16] = ((/* implicit */int) arr_5 [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))))) < ((((_Bool)1) ? (3314956585U) : (((/* implicit */unsigned int) -193153327))))));
}
