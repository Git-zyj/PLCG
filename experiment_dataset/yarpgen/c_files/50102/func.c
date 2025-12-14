/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50102
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
    var_16 = (((-(var_11))) - (((/* implicit */int) var_10)));
    var_17 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(1122026875U)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_20 -= ((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))));
        var_21 = arr_5 [i_1];
        var_22 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                var_23 = ((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1]);
                var_24 = ((/* implicit */signed char) arr_5 [i_1]);
            }
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)242))));
                var_26 = ((/* implicit */unsigned long long int) var_1);
                var_27 &= arr_4 [i_1] [i_4];
                var_28 = ((/* implicit */unsigned short) (_Bool)1);
                var_29 = ((/* implicit */unsigned int) var_14);
            }
            var_30 ^= (!(((/* implicit */_Bool) arr_0 [i_1])));
            var_31 = (((_Bool)1) ? (2948546144U) : (1U));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) min((arr_12 [i_1]), (var_11)))) : (((arr_8 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]) ? (((/* implicit */unsigned long long int) var_11)) : (arr_13 [i_1] [i_2]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (var_5)))));
            var_33 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            var_34 = (!(((/* implicit */_Bool) (+(1122026868U)))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_35 ^= var_14;
                var_36 = ((/* implicit */unsigned long long int) var_9);
            }
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_37 = min((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))), (2U));
                var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (+(((var_15) - (((/* implicit */unsigned long long int) -186087390)))))))));
                var_39 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_5] [i_5] [i_7]))))), (arr_19 [i_1] [i_5] [i_7] [i_7])))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) arr_13 [i_1] [i_1]);
            /* LoopSeq 1 */
            for (unsigned char i_9 = 2; i_9 < 23; i_9 += 3) 
            {
                var_41 += ((/* implicit */unsigned long long int) var_6);
                var_42 += ((/* implicit */unsigned int) min((((/* implicit */int) ((arr_19 [i_9 + 1] [i_8] [i_8] [23]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_8] [i_9 - 2] [i_9 - 2])) : (((/* implicit */int) arr_11 [i_8] [i_9 + 1] [i_9 + 1]))))));
                var_43 = var_5;
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_8 [i_1] [i_8] [i_9 - 2]))));
                var_45 = ((/* implicit */unsigned long long int) var_3);
            }
            var_46 = (~(((/* implicit */int) ((((/* implicit */int) arr_18 [i_1] [i_8] [23])) > (((/* implicit */int) arr_5 [i_1]))))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                var_47 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                var_48 = ((/* implicit */int) (_Bool)1);
                var_49 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
            }
            for (unsigned char i_11 = 2; i_11 < 20; i_11 += 4) 
            {
                var_50 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_1] [i_8] [i_11 + 2])) ? ((~((+(var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11 + 3] [i_11 + 3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    var_51 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)245))))))))));
                    var_52 += ((/* implicit */unsigned char) var_7);
                }
                var_53 += ((/* implicit */_Bool) var_14);
                var_54 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [(unsigned char)15] [i_8] [(unsigned short)12]))));
            }
            /* vectorizable */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) (_Bool)0))));
                var_56 += var_1;
                var_57 = ((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_13] [i_13 - 1])))));
                var_58 = ((/* implicit */_Bool) arr_28 [i_1] [i_8] [i_13 - 1]);
            }
        }
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
        {
            var_59 = ((/* implicit */unsigned int) arr_22 [(_Bool)1] [i_14] [i_14]);
            var_60 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
            var_61 -= ((/* implicit */unsigned short) arr_15 [i_14] [i_14]);
            var_62 = ((/* implicit */int) (~(arr_37 [i_1])));
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_63 = ((/* implicit */unsigned char) (+((+(max((arr_42 [i_1] [i_15] [i_14]), (((/* implicit */unsigned long long int) var_11))))))));
                var_64 = ((/* implicit */unsigned short) var_4);
                var_65 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                var_66 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_14] [i_14] [i_15])) ? (((/* implicit */unsigned int) var_6)) : (arr_19 [i_1] [20ULL] [i_15] [(unsigned char)21])))), ((~(var_15))));
            }
        }
    }
}
