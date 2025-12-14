/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23109
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
    var_20 = ((/* implicit */unsigned int) min((var_13), (var_18)));
    var_21 = var_18;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_22 ^= ((/* implicit */long long int) ((unsigned long long int) -1758112369));
                        var_23 = ((/* implicit */int) 6048480876460831171ULL);
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((var_17), (((/* implicit */int) var_18))));
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 1]))))), (arr_8 [i_1] [i_1 - 1] [i_2 - 1] [i_2])));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                    }
                    for (signed char i_4 = 4; i_4 < 8; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((5031561259740789755LL), (((/* implicit */long long int) (signed char)127))));
                            arr_17 [i_0] [i_1] [i_2] [(unsigned char)0] [(unsigned char)0] [i_5] = ((/* implicit */unsigned short) (-(min(((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4] [i_4] [(signed char)0])))), (((/* implicit */int) ((unsigned short) arr_13 [i_0])))))));
                            var_25 = ((/* implicit */_Bool) var_12);
                        }
                        var_26 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -5031561259740789756LL))));
                        arr_22 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) -6899581087606533378LL)), (max((var_16), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5031561259740789744LL)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) arr_2 [i_2])))) % ((+(((/* implicit */int) (unsigned short)47264)))))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (unsigned short)54600))));
                        arr_23 [i_0] [i_0] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) max((-8LL), (max((((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_0] [i_1] [i_2 + 2] [i_6])) + (2147483647))) << (((((/* implicit */int) (unsigned short)18284)) - (18284)))))), (15LL)))));
                        var_29 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_8)), (var_16))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (13164663699573219465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_6 + 1])))))))));
                    }
                    var_30 = ((/* implicit */int) max(((unsigned short)10963), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    } 
}
