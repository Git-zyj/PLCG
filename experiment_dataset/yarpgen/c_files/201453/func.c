/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201453
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
    var_16 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)230))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), ((~(arr_4 [i_0] [i_0 - 2] [i_0])))))) : (arr_10 [i_1] [(signed char)8] [i_2 + 1])));
                    }
                    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) var_8);
                        arr_13 [i_4] [i_2] [i_1] [i_1] [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned char) 1902767371U);
                        var_20 = max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1])))))), ((_Bool)1));
                    }
                    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) ((_Bool) (unsigned char)24));
                        arr_16 [i_5] [i_2 + 1] [i_2 + 1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (unsigned char)28)))) : (((/* implicit */int) max((arr_9 [i_0 - 2] [i_0 - 2] [14] [i_0] [i_0 - 2] [i_5 - 3]), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)44)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_6])))))), (arr_4 [i_0] [i_0] [i_0 - 2])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_7] |= ((/* implicit */short) ((288230376151711743ULL) ^ (((/* implicit */unsigned long long int) arr_4 [i_6] [i_2 + 1] [i_0 - 1]))));
                            arr_22 [i_7] [i_6] [(_Bool)1] = ((/* implicit */_Bool) (+(arr_14 [i_7] [i_7] [i_6] [i_6] [i_7] [i_2])));
                            arr_23 [i_7] [i_7] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */int) ((arr_18 [i_1] [i_1] [i_2] [i_6]) ^ (((/* implicit */long long int) ((-241734820) & (1946703601))))));
                            arr_24 [i_0] [i_1] [i_7] [i_2] [i_7] = ((/* implicit */_Bool) -9223372036854775800LL);
                        }
                        arr_25 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) + (511U)))), (((1126204429460858718LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-16693))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) ^ (((/* implicit */int) arr_11 [i_6] [i_6] [i_2] [i_2 + 1] [i_0 + 1] [i_0])))))));
                        arr_26 [i_0] [i_1] [i_2] [i_0] [i_6] [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) arr_19 [i_0] [i_2 + 1] [i_2] [i_0 - 2] [i_2]))))));
                        var_23 = ((/* implicit */short) (-(arr_18 [i_0] [i_1] [i_2] [i_2])));
                    }
                    var_24 = ((/* implicit */unsigned long long int) 1767953471);
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */_Bool) (unsigned char)3);
    var_26 = ((/* implicit */short) (unsigned char)72);
}
