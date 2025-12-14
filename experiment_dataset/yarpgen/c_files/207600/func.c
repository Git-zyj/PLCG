/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207600
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)96))) ? ((~(((-4973976314288539423LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (((-(max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2])), (var_5))))) / (((var_5) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36465)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_0 - 3] [i_0 - 2] [i_0 - 4] [(unsigned short)14])), (((((/* implicit */_Bool) (unsigned char)30)) ? (var_1) : (((/* implicit */int) var_3))))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] &= ((/* implicit */unsigned short) arr_8 [i_0]);
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) -8174056013259215685LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(16650662285367633313ULL)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [12]))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36465)) - (((/* implicit */int) arr_17 [i_0] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_1]))));
                        }
                        arr_20 [5ULL] [5ULL] [i_4] [i_1] [5ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_18 [i_0]))))));
                        arr_21 [i_0] [i_0 - 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)225))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (2485377974322804195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (18446744073709551608ULL)));
                        var_14 = (-9223372036854775807LL - 1LL);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            {
                var_15 ^= ((/* implicit */long long int) ((int) var_5));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_33 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) min(((unsigned char)53), ((unsigned char)30))))), ((~(arr_28 [i_7] [i_7 - 2] [i_9])))));
                        arr_34 [i_6] [i_6] [(_Bool)1] [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((_Bool) arr_24 [i_6])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_39 [i_6] [i_7] [i_8] [i_10] [i_11] = ((/* implicit */_Bool) max((((max((15961366099386747400ULL), (((/* implicit */unsigned long long int) arr_36 [i_6] [i_6] [i_6 - 1] [i_6] [(unsigned char)6])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)31)) && (((/* implicit */_Bool) var_9)))))))), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_3))))));
                                var_16 = ((/* implicit */int) (unsigned char)31);
                                var_17 = ((/* implicit */int) (unsigned char)55);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_0))));
    var_19 = ((/* implicit */unsigned char) ((_Bool) var_1));
}
