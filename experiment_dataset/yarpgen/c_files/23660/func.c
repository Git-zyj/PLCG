/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23660
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
    var_14 = var_10;
    var_15 = ((/* implicit */int) ((min((17301359706168080572ULL), (((/* implicit */unsigned long long int) -1469714991)))) <= (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)-29910)) + (((/* implicit */int) var_1)))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2538642851U)) >= ((-(((((/* implicit */_Bool) 184883671U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -474092850))))))));
    var_17 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */int) (((!((!(var_7))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1])), (arr_12 [(unsigned short)15] [i_1 - 1] [i_1 - 2] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_6)))))));
                            arr_14 [i_0] [(short)16] [i_0] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) -474092850)) * (10637122988222241268ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_3)), (arr_5 [i_0] [i_1] [i_2]))))));
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) 474092849);
                            arr_16 [i_0] [i_2] [i_1 - 2] [i_0] = ((/* implicit */int) (short)-18561);
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 1])) && (((/* implicit */_Bool) (unsigned short)62407)))) ? (arr_4 [i_0] [(unsigned char)7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))));
            }
        } 
    } 
}
