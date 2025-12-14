/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31247
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((_Bool) var_8)))));
    var_17 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (arr_0 [i_0])));
            arr_7 [i_0] &= (-(((/* implicit */int) var_4)));
        }
        var_18 *= ((((/* implicit */_Bool) 3910962424U)) || (((/* implicit */_Bool) (short)0)));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_19 -= ((/* implicit */unsigned char) var_7);
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) > (0LL))))) : (arr_0 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_3]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) + (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_5] [(unsigned char)16])) >> (((var_10) + (3460120907023808685LL)))))))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_25 [i_5] [i_5] &= ((/* implicit */unsigned int) (short)0);
                            arr_26 [i_4] [i_4] [7ULL] [i_4] [i_4] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_6])) ? (arr_0 [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            var_21 = ((/* implicit */long long int) arr_15 [i_2]);
                        }
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_22 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -18)), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -9223372036854775802LL)))) / (arr_27 [i_6])))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) ^ (((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) var_14))))))) : (max((((((/* implicit */_Bool) 9223372036854775802LL)) ? (511LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4445))))), (((/* implicit */long long int) arr_1 [i_8])))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6565877464851952756LL)) ? (0U) : (3910962424U)));
        arr_29 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) -26LL)) - (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (7565405776915193891ULL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        var_26 -= ((/* implicit */signed char) var_9);
        arr_32 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_9] [i_9])) ? (arr_22 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9] [i_9])))));
    }
}
