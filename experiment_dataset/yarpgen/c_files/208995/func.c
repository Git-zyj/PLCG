/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208995
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned char)18] [i_1 + 2] [(signed char)0] [i_1 - 1] [i_1 + 2])) | (((/* implicit */int) (unsigned short)21570))))) ? (((((/* implicit */int) arr_6 [(unsigned short)16])) ^ (((/* implicit */int) arr_3 [(unsigned char)10] [(unsigned short)0])))) : (((/* implicit */int) arr_12 [(unsigned short)0] [i_3] [(unsigned short)0] [i_1 + 1] [(unsigned short)0])))))))));
                                var_14 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3] [16LL] [16LL] [i_1 - 3] [(unsigned short)20])) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)6733)) < (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_6 [4ULL])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_0]))))))));
                                arr_13 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_0] [i_1 + 2] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) (unsigned char)111)) >> (((14250303578905471740ULL) - (14250303578905471730ULL))))) <= (((/* implicit */int) (unsigned char)224)))));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (_Bool)0))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1]))))));
                    arr_15 [i_2 - 1] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((((15035480399186295216ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47955))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (unsigned short)54687))));
                arr_22 [i_6] [i_6] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)43968))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)));
    var_18 = ((/* implicit */long long int) min((var_18), ((((~(((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)64521)))))))));
}
