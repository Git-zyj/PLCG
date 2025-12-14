/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49662
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
    var_16 = ((/* implicit */unsigned short) ((short) var_10));
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_6 [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                    arr_9 [5LL] [i_1] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10008664039062243062ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_2]))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))))) : (min((8438080034647308554ULL), (((/* implicit */unsigned long long int) -1356306475))))));
                    var_18 *= ((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1]);
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_19 &= ((/* implicit */signed char) ((short) arr_7 [i_0] [i_0] [i_3] [i_0]));
                        arr_16 [i_0] [i_0] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) ((arr_15 [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [(_Bool)1] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_5 [i_0] [i_3] [i_1] [i_0]))) ? (-1778791474226495219LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [6] [i_1] [6] [6])))));
                        var_20 = ((/* implicit */_Bool) ((unsigned short) 10008664039062243062ULL));
                    }
                    var_21 ^= ((/* implicit */signed char) arr_6 [i_1 - 1] [i_1] [(unsigned char)1] [i_1]);
                    arr_22 [i_0] [i_0] = ((_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1] [i_3])))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 4; i_7 < 8; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_30 [(_Bool)1] [i_0] [i_1 + 1] [i_7 + 2] [i_0] [i_7 - 4])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_1 + 1] [i_7 - 4] [i_7 + 2] [i_7 - 1]))))) ? (((/* implicit */int) (unsigned short)39338)) : (((((/* implicit */_Bool) (unsigned char)202)) ? ((((_Bool)1) ? (((/* implicit */int) arr_23 [i_0] [(unsigned short)9] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_20 [i_0] [1U] [i_1] [i_6] [1U] [i_8])))))))))));
                            arr_31 [i_6] [i_1 + 2] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_0] [9ULL])), (arr_13 [i_0] [i_0] [i_7 - 3] [i_0]))))) * (max((((arr_25 [i_0] [(_Bool)1]) ? (8438080034647308554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_27 [i_0] [i_0] [i_7] [i_0])))))));
                            var_24 = ((((long long int) arr_27 [i_0] [i_6] [i_8] [i_7 - 4])) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) 4667125480943457764LL)) % (10008664039062243062ULL)))))));
                            var_25 ^= arr_23 [i_0] [i_6] [i_7];
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (unsigned char)250))));
                        }
                        var_27 ^= ((/* implicit */unsigned short) min((((int) (((_Bool)1) ? (599952603) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_7 - 2] [i_7 - 2] [i_7 - 4])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_7 - 4] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_13 [i_1 + 2] [i_7 - 1] [i_7 + 1] [i_7 - 3]))))));
                    }
                    arr_32 [i_6] = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [2]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_35 [i_9] [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + ((+(arr_27 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_9])))));
                    arr_36 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [6LL])) : (((/* implicit */int) arr_0 [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_9])) ? (((/* implicit */int) arr_34 [i_9] [(short)3])) : (-791029047)))), ((~(var_10)))))));
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))) & (arr_27 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])));
                    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((arr_39 [i_0] [i_1] [i_10]) ? (((/* implicit */int) arr_38 [i_0] [(short)4] [(short)4])) : (((/* implicit */int) (signed char)13))))) < (134201344U)));
                    arr_40 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned short) arr_17 [i_0] [(unsigned short)6] [i_0] [i_1] [i_0] [i_10]);
                }
                var_30 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) == (arr_28 [i_0] [i_1 + 2]))))));
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) min((arr_39 [i_1] [i_1] [i_1 + 1]), (arr_39 [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
            }
        } 
    } 
    var_31 = ((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (599952586) : (((/* implicit */int) (_Bool)0)))))))) == ((~(-3225653546827584031LL))));
}
