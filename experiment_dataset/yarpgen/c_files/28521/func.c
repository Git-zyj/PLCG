/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28521
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-32747)), ((+(((/* implicit */int) (unsigned char)7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)6)) + (((/* implicit */int) var_9))))) : (max((var_19), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)16))));
                        var_22 -= (unsigned char)27;
                        var_23 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 3])) ? (arr_9 [(signed char)6] [(unsigned char)0] [4ULL] [i_2] [i_3] [i_3]) : (((((/* implicit */int) (signed char)121)) * (((/* implicit */int) var_17)))))) * (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [1]))))) == (((/* implicit */int) var_14)))))));
                        arr_10 [i_3] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) arr_4 [i_1] [i_0])))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_3)))))), (min((((/* implicit */unsigned long long int) (signed char)108)), (arr_0 [i_1 + 1])))));
                        var_24 = ((/* implicit */signed char) (((~((~(arr_8 [i_0]))))) >> (((((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) ((unsigned char) arr_1 [i_2] [i_3]))) : ((~(((/* implicit */int) var_0)))))) - (182)))));
                    }
                    var_25 = ((/* implicit */signed char) (unsigned char)239);
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_4] [i_2] = ((/* implicit */short) var_7);
                                arr_19 [i_4] [i_1] [i_2] [i_4] [(_Bool)1] = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_18)), (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_12))))))));
                                var_26 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */signed char) (((+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(unsigned char)8])) != (((/* implicit */int) var_5))))))) >= (max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)11)))), ((+(((/* implicit */int) (signed char)-122))))))));
                }
            } 
        } 
    } 
    var_28 = var_5;
}
