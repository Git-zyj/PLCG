/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25252
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
    var_17 = ((/* implicit */unsigned int) (~(9223372036854775807LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) ((2417595015U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [2U] [2U])))))))), (arr_0 [i_0])));
                var_19 = ((/* implicit */unsigned int) ((long long int) ((_Bool) 8528456588328211355LL)));
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (3484028940U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))) == (((/* implicit */int) arr_1 [i_0] [(unsigned short)10]))));
                var_21 *= ((/* implicit */unsigned short) var_7);
            }
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22980)) ? (((/* implicit */int) (unsigned char)200)) : (arr_8 [i_0 + 1] [i_0 + 1] [i_3] [(short)20])));
                var_23 = ((/* implicit */long long int) (+(arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1])));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)42556)))) < (((/* implicit */int) arr_1 [i_1 - 1] [i_4 + 1]))));
                    arr_11 [i_0] [i_1] [i_3] [16U] &= ((/* implicit */short) (+(((((/* implicit */_Bool) -1668620254)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) arr_14 [i_3] [i_5] [i_5] [i_5]);
                    var_26 ^= ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_3] [i_5 + 2] [i_5 + 1]);
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((arr_2 [i_0 + 2]) & (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [7ULL] [i_0])))) == (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [10ULL])) ? (var_13) : (((/* implicit */unsigned long long int) var_16)))))))));
                }
            }
            var_28 = ((/* implicit */_Bool) max(((+(max((((/* implicit */unsigned long long int) arr_12 [18U] [i_1] [18U] [i_0])), (var_13))))), (((/* implicit */unsigned long long int) var_0))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)1))))))));
                            arr_22 [i_7] [20LL] [i_1 - 1] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) -1920208236143644726LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2751611860U)));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)17)) << (((4294967295U) - (4294967280U))))))), (2097152))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
                {
                    for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
                    {
                        {
                            arr_30 [i_1] [i_10 - 1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20165)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41123))));
                            var_31 = ((/* implicit */unsigned short) min(((+(-7473937944744004921LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6258619436730843900ULL)))))));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */_Bool) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)42564))))), (((((/* implicit */int) (_Bool)1)) >> (0ULL)))));
    }
}
