/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249341
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
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_13)) : (8023530498352457770LL))))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_14))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 524287U);
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((var_9) ? (arr_10 [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */long long int) ((((((/* implicit */int) (short)10616)) < (((/* implicit */int) var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (2147483647))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1]))) <= (arr_0 [i_0])))))))));
                            arr_17 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) max(((short)4942), (((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_1])))))), (((((/* implicit */int) (signed char)33)) << (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)1] [i_4] [i_1]))))))));
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */long long int) arr_6 [i_1] [i_4] [i_1]);
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32406)))))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned char) arr_8 [i_0] [i_5] [i_1] [i_1]);
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)39))));
                                arr_22 [i_1] [i_1] [i_4] [i_1] [i_5] = ((/* implicit */short) (~(((18446744073709551609ULL) + (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1 + 1] [i_1 - 1]))))));
                                arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] = ((/* implicit */signed char) arr_21 [i_6] [i_6] [i_4]);
                            }
                            /* vectorizable */
                            for (long long int i_7 = 4; i_7 < 13; i_7 += 4) 
                            {
                                arr_26 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                                var_21 = ((((/* implicit */int) arr_15 [(signed char)7] [i_1] [i_4])) + (((/* implicit */int) arr_1 [i_7 - 4])));
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-32407)) : (arr_25 [i_0] [i_4] [i_1]))));
                                arr_28 [i_1] [i_5] [i_4] [i_4] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                            {
                                arr_32 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_30 [i_0] [i_5] [i_0]));
                                arr_33 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)15))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        for (long long int i_10 = 4; i_10 < 23; i_10 += 4) 
        {
            {
                arr_41 [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) & (9245216777172860427ULL))), (((/* implicit */unsigned long long int) 1561246267U))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_10 - 4])) ? (arr_38 [i_9] [i_9] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6))))));
                            arr_46 [i_11] [i_10] = 3047925699096170851LL;
                            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_9] [i_10 - 1] [i_9]))));
                        }
                    } 
                } 
                arr_47 [i_9] = ((/* implicit */int) (unsigned char)252);
                var_25 = arr_37 [i_9];
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_6))))))), (((((/* implicit */_Bool) ((var_9) ? (502589155302808877LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (4294967295U) : (((var_3) << (((var_10) + (1773621587)))))))));
}
