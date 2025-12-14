/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234745
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) != (3994517330U)));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)3]))))) ? (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_5 [(unsigned short)7])))))) : (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [(signed char)4])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4])) & (((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)-116))))))));
                            var_22 += ((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9783)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) >> ((((-(((/* implicit */int) var_15)))) - (17098)))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned char) arr_2 [i_0]);
                        var_25 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned short)37826)) : (((/* implicit */int) (short)8125)))) << (((((((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 3] [i_2] [i_5])) | (((/* implicit */int) arr_11 [i_5])))) - (56))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) != (4047154452U))))));
                        var_26 = ((/* implicit */long long int) (unsigned char)119);
                    }
                    var_27 = ((/* implicit */short) (~(((/* implicit */int) (short)-8122))));
                }
            } 
        } 
    } 
    var_28 -= ((/* implicit */unsigned int) var_16);
}
