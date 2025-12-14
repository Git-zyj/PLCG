/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238473
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
    var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned char)142)) - (129))))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((var_17) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_19))))), (max((14401777475644109677ULL), (((/* implicit */unsigned long long int) (unsigned char)111))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) var_9);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0ULL)) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_5 [(unsigned char)9] [i_0 + 2])))))) - (((/* implicit */int) (unsigned char)69))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_22 [(_Bool)1] [i_1] [i_5] [(_Bool)1] [i_5] = (unsigned char)144;
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_1] [i_0] = ((4044966598065441939ULL) % (3631502237666052165ULL));
                                arr_24 [i_5] [i_1] [(unsigned char)4] [i_6] [i_6] [i_6] [i_5] = arr_11 [i_0] [i_0];
                            }
                        } 
                    } 
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) || (((/* implicit */_Bool) var_7))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)255)))), (((_Bool) (_Bool)0)))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10] [14ULL] [i_8 + 1] [i_9]))) + (var_11)))));
                                arr_32 [(signed char)5] [(unsigned char)10] [i_8 + 1] [i_9] [(signed char)5] [i_9] [i_8 + 1] = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) arr_4 [i_8]))))) == (((((/* implicit */_Bool) 4044966598065441939ULL)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) (_Bool)1)))))))));
                                var_27 *= ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) ((signed char) (unsigned char)0))), (max((var_11), (((/* implicit */unsigned long long int) (unsigned char)243)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)12), (((unsigned char) var_2)))))));
                                arr_39 [i_12] [i_11] [i_8] [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                var_30 += ((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_11] [i_11]), (((unsigned char) var_13))));
                                arr_40 [i_0] [i_1] [i_8 + 1] [i_0] [i_11] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_30 [i_0 + 1] [i_1] [i_1] [i_8 + 1] [i_0 + 1] [i_12] [i_0 + 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 4; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                                arr_48 [i_0] [i_1] [3ULL] [(unsigned char)13] [i_13] [i_14] [i_14] = ((/* implicit */signed char) arr_37 [i_13] [i_13] [i_8] [i_13] [i_14] [i_1] [i_0]);
                                arr_49 [i_0] [2ULL] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)0)), (2147557533406894571ULL)));
                                arr_50 [i_0 - 1] [(signed char)1] [i_13] [(unsigned char)5] [i_14] [i_13] |= ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_1] [i_8] [i_13] [i_14] [(signed char)14]);
                            }
                        } 
                    } 
                }
                arr_51 [i_0 + 2] = ((/* implicit */signed char) var_2);
                var_32 = ((/* implicit */unsigned char) 12563146871836510842ULL);
            }
        } 
    } 
}
