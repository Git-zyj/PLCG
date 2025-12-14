/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52631
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)29)))) + (max(((+(1583933065))), (((/* implicit */int) ((signed char) (unsigned short)367)))))));
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) max((((/* implicit */short) min((var_5), (var_10)))), (((short) arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned int) (unsigned char)0);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1] [i_1]))) : (18446744073709551615ULL))))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_20 [i_1 + 1] [i_1 - 2] [i_4] [16U] [i_1 - 2] [i_1 - 2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_4 + 1] [i_5 - 1] [i_5]))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2097151U))))))) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)367)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)226)))))))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)193)))))));
                            var_23 ^= ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (unsigned short)53416)))));
                        }
                    } 
                } 
            } 
            arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_1 + 1] [i_2] [8U] [i_1 + 1] [i_1 + 1] [i_1])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1 + 2] [i_1 + 2] [i_1])))))));
        }
        arr_22 [2ULL] &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((short) (signed char)118))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1]))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 2]))))))) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    {
                        arr_31 [i_1 - 1] [i_6] [i_7] [i_7] [i_1 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_1] [8ULL] [i_1] [i_7] [i_7 - 1] [i_7] [i_1]))));
                        arr_32 [i_8] [i_7] [5ULL] [5ULL] [5ULL] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_12) | (((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_6] [i_7] [i_7] [(signed char)12] [i_8 - 1]))))) ? ((-(((/* implicit */int) (short)23878)))) : (((/* implicit */int) arr_1 [i_6] [i_8])))), (((/* implicit */int) ((signed char) var_13)))));
                    }
                } 
            } 
        } 
        arr_33 [6U] [(signed char)10] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) - (5758913048402926701LL));
    }
    for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)26833)) : (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */long long int) ((unsigned short) var_1));
    }
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) 442481409)) >= (4245093970U)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) (unsigned short)14336))) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_16)))))) : (((var_6) | (((/* implicit */int) var_4)))))))));
    var_28 *= ((/* implicit */signed char) ((unsigned char) ((var_3) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)30))))))));
}
