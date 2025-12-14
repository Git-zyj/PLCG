/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39322
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((max((14049780960123687762ULL), (((/* implicit */unsigned long long int) -2792845689310683391LL)))), (var_18))) : (14049780960123687754ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((_Bool) (-((-(arr_3 [9] [9] [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)255)), (arr_10 [i_0] [i_1])))) ? ((-(arr_10 [i_0] [i_1]))) : (((/* implicit */int) var_4)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(255)))) ? (max((arr_2 [i_0] [i_1] [i_2]), (((/* implicit */long long int) arr_8 [i_2] [i_3] [i_2] [14])))) : (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_3]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)17))))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_23 = ((short) (unsigned char)16);
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) max((((int) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))))), ((-(((/* implicit */int) (unsigned char)16))))));
                var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((((/* implicit */long long int) var_9)) != (((long long int) (~(var_1))))));
}
