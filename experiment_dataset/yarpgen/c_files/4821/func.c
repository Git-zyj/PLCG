/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4821
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -78769747))))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (var_0)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))))));
    var_13 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_3)) ? (var_10) : (var_7))) * (((((/* implicit */_Bool) (unsigned char)30)) ? (var_10) : (((/* implicit */unsigned long long int) -1146625743)))))), ((~(var_10)))));
    var_14 = ((/* implicit */int) var_7);
    var_15 = ((/* implicit */unsigned int) (~((~((+(-2147483635)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (signed char)-116);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_3 [i_0] [(unsigned short)14] [i_1])))) ? (((/* implicit */unsigned int) 2147483635)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (var_5)))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551606ULL))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22446)) ^ (((/* implicit */int) ((arr_2 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 471166955U))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_13 [i_1] [(unsigned char)3] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) > (((/* implicit */int) (unsigned short)8))));
                            var_21 = ((/* implicit */short) (signed char)19);
                            arr_14 [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65516)) | (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */_Bool) 1746566146);
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (+(((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22457)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_0] [i_1 + 2] [i_2 - 2] [i_3 + 1] [i_1 + 3] [i_0] [i_2 + 2]))));
                            arr_19 [22ULL] [i_1] [i_1 - 2] [i_1] [i_3] [i_5] = ((/* implicit */long long int) var_10);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_1] = ((/* implicit */int) ((long long int) ((var_10) << (((/* implicit */int) (unsigned char)19)))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(4294967295U))) : (((3000909703U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))))));
                        }
                    }
                } 
            } 
            arr_23 [i_0] [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned long long int) 262143)) : (18446744073709551607ULL)))));
            arr_24 [i_1] [i_1 + 2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)22440)))));
        }
        var_25 = ((/* implicit */signed char) ((((unsigned int) 2147483647)) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (var_4)))) && (((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
}
