/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53414
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
    var_16 = ((/* implicit */int) (~(((var_7) << (((((/* implicit */int) var_5)) - (152)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_2)));
        var_17 &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (var_4));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_18 ^= var_0;
                    var_19 = ((/* implicit */long long int) var_4);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (short)-32441)) >= (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) (short)32463));
                    var_22 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((unsigned int) var_3))) : ((~(var_14)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 21; i_6 += 4) 
        {
            for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_6 - 3] [i_6 - 3] [i_7 - 2]))))) ? ((~(arr_15 [i_1] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) 298401351837447885ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32441))) : (4294967295U))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_26 [i_1] [10LL] [i_1] [i_8] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_22 [i_6 - 2] [i_6 - 1])) != (298401351837447885ULL))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (+((-2147483647 - 1))));
                            var_26 = ((/* implicit */unsigned int) var_12);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_6] [i_7 + 1] [i_1])) ? (arr_10 [i_1] [i_7 + 1] [i_1]) : (arr_10 [i_1] [i_7 + 1] [i_1])));
                            var_27 = ((/* implicit */unsigned int) ((arr_13 [i_1]) == ((-(((/* implicit */int) (signed char)13))))));
                            arr_34 [4U] [i_1] [4U] [4U] [(unsigned char)7] = ((/* implicit */unsigned int) var_3);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) (short)-32448)) < (((/* implicit */int) var_8)))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_29 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3161895188U))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 3] [i_1]))) % (var_0)))) ? (((/* implicit */int) arr_19 [i_6 - 1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_6 + 2] [i_1])) != (((/* implicit */int) arr_19 [i_6 - 3] [i_1])))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (short)-32448)) + (((/* implicit */int) (_Bool)0))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)32447)) - (32439)))));
                            var_33 = ((/* implicit */unsigned int) ((signed char) ((signed char) arr_16 [i_1] [i_1] [i_8] [i_12])));
                        }
                    }
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned int) ((short) var_6));
}
