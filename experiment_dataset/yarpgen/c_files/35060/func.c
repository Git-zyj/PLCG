/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35060
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
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 3489863812U)), (5195998191912774103ULL)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25688))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1] [i_3 + 1])) ? (var_4) : ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3 + 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0])), (var_8))))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (short)25551))), (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (13250745881796777496ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : ((~(((/* implicit */int) arr_10 [(_Bool)0] [(unsigned char)10] [i_1] [i_1])))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)12] [(unsigned short)12])) ? (arr_3 [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_10)))))))) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((var_24), (((((((/* implicit */int) var_6)) > ((~(((/* implicit */int) (short)-32767)))))) ? (min((max((((/* implicit */unsigned int) (unsigned char)62)), (4294967271U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)22204))))))) : (var_16)))));
    var_25 = ((/* implicit */unsigned short) var_12);
}
