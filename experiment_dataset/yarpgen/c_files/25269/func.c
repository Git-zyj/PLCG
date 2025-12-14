/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25269
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_11)) & (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (var_6)))), (var_5)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_3 - 2] [i_1 + 2] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */int) min(((unsigned char)23), (((/* implicit */unsigned char) (signed char)2))))), (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_0)))))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || ((_Bool)0))))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */long long int) min((((((/* implicit */int) min(((signed char)15), (arr_1 [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) 4451004207001536539ULL)) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)25612)))) : ((~(((/* implicit */int) var_11))))))));
                                var_17 = ((/* implicit */unsigned char) 2147483647);
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)30400))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1 + 2] [i_1 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_12 [i_2] [i_1 + 1] [i_0] [i_0] [i_0])) : ((((~(((/* implicit */int) (signed char)23)))) * (((((/* implicit */int) (signed char)-64)) | (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2]))))))));
                    arr_17 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-90)) | (((/* implicit */int) arr_10 [i_2] [i_1 - 2] [i_2] [i_1 + 1]))))) ? (9588536196976740723ULL) : (min((((/* implicit */unsigned long long int) 8558267950759956027LL)), (8858207876732810893ULL)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2]))))));
                }
            } 
        } 
    } 
}
