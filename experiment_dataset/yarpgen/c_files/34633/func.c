/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34633
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | (((((var_10) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_8))))))))));
    var_21 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [(short)1] [(unsigned short)7] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1 - 1]);
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) == (2389043938U))), (max((var_8), (arr_3 [i_0] [17LL] [i_0])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-9223372036854775790LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) arr_0 [i_4 - 1] [2LL])) : ((~(-1088967396)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_11)))))), (((((_Bool) arr_14 [i_0] [i_2] [i_2] [i_0])) ? (arr_11 [i_0] [i_0 - 3]) : (((/* implicit */int) (unsigned short)2))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((9223372036854775790LL) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_17))))))));
}
