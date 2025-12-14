/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228098
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
    var_19 = min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)3)) == (((/* implicit */int) var_10))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((var_12) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) 1103953012)) ? (var_14) : (((/* implicit */int) (_Bool)0))))))));
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (var_17)))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)60))))) ? ((-(1099511627775ULL))) : (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_0 - 2] [i_1] [i_0]);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2013075617655743455ULL)) ? (-1485951672) : (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 1] [i_0 + 1]))));
                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1)) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (arr_4 [i_1] [i_0] [(_Bool)1]))) : ((-(((/* implicit */int) arr_0 [(short)4]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_13 [5ULL] [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 1])))) ? (((((/* implicit */_Bool) (signed char)-121)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])), (arr_3 [(signed char)0] [5ULL] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40555)))));
                            var_24 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (short)-7043))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [8ULL] [i_1] |= ((/* implicit */unsigned long long int) arr_4 [(unsigned short)8] [i_1] [i_1]);
            }
        } 
    } 
}
