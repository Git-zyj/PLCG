/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249222
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((signed char) arr_2 [i_1] [i_0] [i_0]));
                arr_4 [i_0] = arr_1 [i_0];
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (2176035988238627202LL))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) var_1);
                            arr_20 [i_4] [i_6] [(short)0] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_6]))) != (arr_10 [i_2] [(_Bool)0])));
                            arr_21 [(unsigned short)7] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_14 [i_2] [i_3] [9ULL] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_8 [i_2])));
                            arr_22 [i_2] [i_2] [i_4] [i_5] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) arr_15 [4ULL] [i_6] [i_5] [i_4] [i_2] [i_2]);
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_9))));
                            var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_4]))))), (((((/* implicit */_Bool) arr_8 [i_4])) ? (11970693195100433126ULL) : (6476050878609118490ULL)))));
                            arr_25 [i_4] [i_2] [i_5] [i_4] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((max((11970693195100433139ULL), (11970693195100433164ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_5])))))));
                        }
                        for (unsigned short i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (12742677864621728523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760)))));
                            var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (signed char)-32)))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_3] [i_2] [i_2] [i_4])) * (((/* implicit */int) arr_23 [i_2] [i_2] [i_4] [i_5] [i_8] [(unsigned char)10]))))))));
                            arr_28 [i_2] [i_4] [i_5] [i_8 - 2] = ((/* implicit */unsigned int) arr_12 [10] [i_3]);
                            var_29 = ((/* implicit */long long int) min((var_29), (arr_26 [i_8] [i_3] [i_4] [i_5] [i_8] [2ULL])));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 4ULL))))))));
                            var_31 = ((/* implicit */unsigned short) var_2);
                            arr_31 [3ULL] [i_4] [4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */signed char) arr_8 [i_9 - 3]);
                            arr_32 [i_2] [(unsigned short)2] [i_3] [i_4] [i_4] [i_5] [i_9] |= (short)-32760;
                        }
                    }
                } 
            } 
        } 
        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) arr_13 [i_2] [i_2]))))) <= ((~(arr_13 [i_2] [i_2])))));
        var_33 = ((/* implicit */int) max((var_33), (2147483631)));
    }
}
