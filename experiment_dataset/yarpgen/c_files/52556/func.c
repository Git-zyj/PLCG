/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52556
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
    var_12 = ((/* implicit */short) ((long long int) var_1));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_13 = arr_0 [i_0];
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */long long int) min((max((((/* implicit */short) var_1)), (arr_1 [i_0] [i_0]))), (min((((/* implicit */short) ((_Bool) arr_0 [i_0]))), (max((arr_0 [i_0]), (((/* implicit */short) (_Bool)1))))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                var_15 = ((/* implicit */short) max((((unsigned long long int) (+(arr_3 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1 + 3] [i_1] [i_1 + 3]))))) ^ ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                arr_8 [i_0 - 2] [i_1 + 3] [i_0] [i_2 - 1] = (~((+(((((/* implicit */int) var_3)) | (((/* implicit */int) arr_0 [i_0])))))));
                arr_9 [i_0] [i_0] = ((/* implicit */long long int) (+(min((arr_6 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 1]), (((/* implicit */unsigned long long int) (+(-374196321))))))));
            }
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_12 [i_0] = min((max((arr_10 [i_1 - 1] [i_0 + 2] [i_0 - 1]), (min((arr_10 [i_0] [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_3])))))), (arr_10 [i_1] [i_1] [i_1]));
                var_16 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15205)) ^ (((/* implicit */int) (short)26769))))), (((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0] [i_0] [i_0])) * (arr_7 [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 3])))));
                /* LoopSeq 4 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0 - 1]);
                    var_18 = ((/* implicit */unsigned int) var_0);
                    var_19 -= ((/* implicit */unsigned int) arr_14 [i_3] [6LL] [i_3] [i_3]);
                }
                for (int i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    arr_20 [i_0] [(unsigned char)22] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) <= (arr_19 [i_1 + 3] [i_1] [i_1] [i_1] [(signed char)3] [i_1])))), (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1 + 2]))), (((/* implicit */unsigned long long int) arr_17 [i_3] [(signed char)23] [(signed char)23] [i_3] [i_3]))));
                    arr_21 [i_0] [(signed char)14] [(signed char)14] [i_0] [i_0] = (_Bool)1;
                }
                for (short i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    var_20 -= ((/* implicit */short) (~(min((arr_13 [i_3] [i_1 - 1] [(_Bool)1] [i_1] [i_1] [(short)18]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
                    arr_24 [i_0] [i_0] = ((/* implicit */long long int) (-(arr_13 [i_0] [i_6 - 1] [i_0] [i_3] [i_1 + 2] [i_0])));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) (~(((unsigned long long int) (short)-30791))));
                    arr_27 [i_0] [i_0] [i_7 - 2] [i_0 + 1] [(unsigned char)22] = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
                    arr_28 [i_0] = ((/* implicit */unsigned char) var_0);
                }
            }
            /* vectorizable */
            for (long long int i_8 = 1; i_8 < 22; i_8 += 4) 
            {
                arr_31 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_26 [i_0 + 3] [i_0] [i_0] [i_0 - 2]);
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_0] [i_8] [i_1] [i_0 + 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_30 [(short)16] [i_1] [i_8]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
            }
            var_23 &= ((/* implicit */_Bool) ((int) ((int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1])));
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 698609284))))));
        }
        for (signed char i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */int) ((signed char) arr_0 [i_0]))) | ((~(((/* implicit */int) arr_23 [i_0] [14LL] [i_0 + 3] [i_0 + 3] [i_0])))))) + (2147483647))) << ((((-(arr_6 [i_10] [i_9] [i_9 + 1] [i_0]))) - (11386343811026767611ULL)))));
                arr_41 [(short)20] [i_9 + 1] [i_10] [16ULL] |= ((/* implicit */short) arr_26 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0 + 3] [i_10] [i_10] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)26121))))) <= (3145728U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                var_26 = ((/* implicit */int) arr_14 [i_0] [i_10] [i_10] [i_10]);
            }
            for (long long int i_11 = 1; i_11 < 22; i_11 += 4) 
            {
                var_27 -= ((/* implicit */signed char) ((short) arr_7 [i_0] [i_0] [i_0] [i_0 + 4]));
                var_28 &= ((/* implicit */signed char) (-((+(((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0 + 1] [(signed char)22] [(signed char)22])))))))));
                var_29 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
            }
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        }
    }
    for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 3) 
    {
        var_31 = (+(min((((/* implicit */unsigned long long int) ((unsigned int) var_8))), (((752410687613491179ULL) / (((/* implicit */unsigned long long int) -374196321)))))));
        var_32 = ((/* implicit */int) (_Bool)1);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_13] [i_13])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_13] [i_13])))));
        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) 3812511447631305893ULL)))));
    }
    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_35 = ((/* implicit */long long int) ((arr_7 [i_14] [i_14] [i_14] [i_14]) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_25 [i_14] [i_14] [i_14] [i_14] [i_14])))))));
        arr_53 [i_14] [i_14] |= ((/* implicit */int) ((unsigned long long int) (~((~(((/* implicit */int) arr_38 [i_14] [i_14] [i_14])))))));
        var_36 = ((/* implicit */long long int) (+((~(arr_10 [i_14] [i_14] [i_14])))));
        var_37 = ((/* implicit */short) arr_22 [i_14]);
    }
    var_38 ^= var_11;
}
