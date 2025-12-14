/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220758
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
    var_10 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_3);
        var_11 ^= ((/* implicit */unsigned int) arr_0 [2LL]);
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) var_6)))))))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_13 = ((/* implicit */long long int) (~(max((max((((/* implicit */unsigned long long int) var_9)), (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
            arr_8 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */signed char) (_Bool)1)), (max((((/* implicit */signed char) arr_3 [i_1 - 1])), (var_0))))));
            var_14 += (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) 549755813887LL))))));
            var_15 += ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -549755813884LL)) <= (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (arr_12 [i_1 - 1])))));
            arr_13 [15U] [i_1] = ((/* implicit */signed char) max((arr_5 [i_1] [10]), (var_7)));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_1])), (-549755813887LL)))) || (((/* implicit */_Bool) ((unsigned short) var_0)))));
            var_17 = ((/* implicit */unsigned long long int) arr_11 [i_3]);
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            var_18 *= ((/* implicit */unsigned long long int) var_6);
            var_19 = ((/* implicit */signed char) min((var_19), (var_4)));
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                var_20 = ((/* implicit */short) (-(((/* implicit */int) (short)-2337))));
                var_21 |= 17814821639856254171ULL;
                var_22 = ((/* implicit */short) ((_Bool) arr_4 [i_1]));
            }
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                arr_27 [(unsigned char)3] [i_5] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (540142429501410882ULL))));
                var_23 &= ((((/* implicit */_Bool) min((arr_16 [i_1 - 1] [i_5]), (arr_16 [i_7] [i_1 - 1])))) || (((/* implicit */_Bool) min((arr_16 [i_7] [i_1 + 1]), (arr_16 [i_5] [i_7])))));
                var_24 = ((/* implicit */unsigned short) (((!((_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) var_5))))) % (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) max((arr_5 [i_1] [i_5]), (((/* implicit */int) arr_22 [i_1] [i_5]))))) : (var_9)))));
                var_25 += ((/* implicit */short) (~((~((~(((/* implicit */int) var_8))))))));
            }
            for (short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_8]))) ? (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1)))) : (arr_20 [i_1] [i_1] [i_1])))), (549755813887LL)));
                var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_5] [i_1 + 1] [i_8] [i_1]))))), (arr_18 [6ULL])));
                var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)-8)), (var_9))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])))))), (max((max((var_1), (((/* implicit */unsigned long long int) arr_20 [8ULL] [8ULL] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) < (arr_24 [i_1] [i_5] [i_1] [i_8]))))))));
            }
            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_5])) : (max((((((/* implicit */_Bool) 17845394185839518722ULL)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_1] [(short)16] [i_1] [i_1])) <= (((/* implicit */int) var_4)))))))));
            arr_30 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_21 [i_1 + 1])), (arr_18 [i_1 - 1])))) >= (max((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1])))))))));
            var_30 = ((/* implicit */short) ((_Bool) ((_Bool) max((((/* implicit */unsigned int) arr_16 [i_1 - 1] [i_1 + 1])), (arr_18 [i_5])))));
        }
    }
}
