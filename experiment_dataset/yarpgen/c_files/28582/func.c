/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28582
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
    var_15 = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_13))))), (min((5304602725536387609LL), (((/* implicit */long long int) 1921869515U))))))));
    var_16 = ((/* implicit */unsigned char) (-(((long long int) min((var_7), (((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 |= ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) var_2)), (var_14))));
        arr_2 [i_0] = min((((arr_1 [i_0]) >> (((arr_1 [i_0]) - (3170799878U))))), (((/* implicit */unsigned int) min((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_12)))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */long long int) ((_Bool) var_14));
            arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) min((arr_0 [i_1] [(unsigned short)22]), (((/* implicit */unsigned short) arr_6 [5U] [i_1]))))), (arr_9 [i_2] [i_2 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
            arr_11 [i_2] [i_2] = ((/* implicit */signed char) arr_4 [2LL]);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_0 [i_1 + 1] [(unsigned short)5]))));
            var_20 ^= ((/* implicit */unsigned char) min((min((min((var_5), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_3 - 1])), (var_0)))))), (arr_13 [i_1] [(unsigned short)5] [i_1])));
            var_21 &= ((/* implicit */unsigned char) min((min((((/* implicit */int) ((_Bool) var_4))), (min((((/* implicit */int) var_4)), (var_7))))), (((/* implicit */int) var_3))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((_Bool) ((unsigned char) var_5))))));
                var_23 += ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                arr_23 [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_14 [i_1 - 3]));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) var_0)))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_26 [(unsigned short)6] = arr_6 [i_4] [i_4];
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_1))))) <= (arr_7 [i_6] [i_6])));
                arr_27 [i_1] [i_4] [i_6] = ((/* implicit */signed char) var_8);
                arr_28 [i_1] = ((/* implicit */short) arr_13 [2LL] [i_4] [i_6]);
            }
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned short) var_3)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_27 = ((/* implicit */int) ((unsigned char) min((min((((/* implicit */short) var_1)), (var_12))), (var_12))));
            arr_32 [i_1] [i_1] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */short) arr_29 [i_1] [i_1 - 3] [i_1]))));
            var_28 = ((/* implicit */unsigned short) max((var_28), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4095))))), ((unsigned short)49152)))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_29 ^= ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_14 [i_1 - 3])), (arr_7 [i_1] [i_1]))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_5)))), (arr_22 [(_Bool)1] [i_1] [i_8] [(_Bool)1])))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 1) 
            {
                var_30 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104)))), (13068159806393541656ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_1] [7U] [i_9 - 2])), (min((((/* implicit */long long int) var_1)), (var_11))))))));
                arr_40 [(unsigned short)9] [i_8] [i_1] [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_16 [i_8]))) <= (((/* implicit */int) var_12))))), (min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_31 [i_8] [i_8])))));
                var_31 = ((/* implicit */unsigned short) var_10);
                var_32 -= ((/* implicit */unsigned char) min((min((min((var_11), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_3))));
                arr_41 [i_1] [i_8] |= ((/* implicit */long long int) var_1);
            }
            arr_42 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (min((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned short) var_2))))), (var_14)))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_33 &= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_34 [i_1 - 3])), (min((var_11), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((arr_3 [i_1 - 1]) > (arr_3 [i_1 - 4]))))));
                var_34 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min(((signed char)-36), (((/* implicit */signed char) (_Bool)0))))), (var_11)));
            }
            for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) 
            {
                arr_49 [i_8] = ((/* implicit */unsigned char) min((var_11), (((/* implicit */long long int) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_0)))))));
                var_35 -= ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) arr_36 [i_1] [2U] [i_8] [i_11])))))), (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned short)1)), (var_11)))))));
            }
        }
    }
}
