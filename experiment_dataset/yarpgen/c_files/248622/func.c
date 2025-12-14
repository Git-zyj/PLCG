/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248622
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
    var_20 = ((/* implicit */long long int) min((((unsigned int) ((_Bool) var_9))), (((/* implicit */unsigned int) var_3))));
    var_21 *= ((/* implicit */short) var_5);
    var_22 = ((/* implicit */unsigned char) (-(((((unsigned long long int) var_10)) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_23 = ((/* implicit */unsigned int) max(((unsigned short)5684), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0 - 2] [i_1 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 + 2])) == (((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) 2198812978U)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned short)16383))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)17)), (arr_11 [i_0] [(unsigned char)5] [(unsigned char)5] [(signed char)2] [i_0])))), (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))))))), (((/* implicit */unsigned long long int) (~(arr_11 [i_0] [i_0 + 2] [i_3 - 1] [i_3 - 1] [8LL])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1834584264U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (16557129144649614767ULL)));
                                arr_13 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_3] [i_3]);
                                var_26 = ((/* implicit */long long int) -29);
                                var_27 ^= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) arr_3 [(unsigned char)8] [(unsigned char)8])) | (18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) + (arr_3 [i_1 - 1] [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
