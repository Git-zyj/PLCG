/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218838
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
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    var_16 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) (signed char)16))))) ? (((((/* implicit */_Bool) (signed char)16)) ? (var_9) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [11LL] [i_4] = ((/* implicit */_Bool) var_7);
                                var_18 ^= ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned int) var_0)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)5)) % (((/* implicit */int) var_3))))))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-6)), (arr_13 [5LL] [i_1] [i_2] [i_3] [i_2] [i_2]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((-402952154), (((/* implicit */int) (_Bool)0))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) != (arr_5 [i_3] [i_1 - 1] [i_3])))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [10])))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) ((unsigned char) arr_13 [i_2] [i_1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_0])))) != (min((((/* implicit */unsigned long long int) (unsigned short)51839)), (arr_5 [i_2] [4ULL] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(arr_18 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                                var_21 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) arr_17 [i_1] [9U]))) / (max((((/* implicit */long long int) var_13)), (var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
