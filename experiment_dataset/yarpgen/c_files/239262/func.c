/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239262
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
    var_19 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_18))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-529301820))))));
        arr_3 [i_0] = ((/* implicit */long long int) (+((~(arr_1 [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)26))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_1]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_1] [i_1 - 3] [i_5])))))))));
                            var_23 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [9U] [9U])))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_4] [i_6] = ((/* implicit */unsigned int) (-((-((+(((/* implicit */int) var_5))))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (short)-15661)))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_21 [i_1] [10ULL] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                            var_25 = ((/* implicit */short) (~((+((~(((/* implicit */int) (_Bool)1))))))));
                        }
                        arr_22 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned int) (~((-((-(((/* implicit */int) var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(signed char)6]))))))))));
                            var_26 ^= (-(1001129398U));
                            var_27 += ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22780))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) (-((~((~(((/* implicit */int) arr_25 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_9]))))))));
                            var_29 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1 - 3] [2ULL] [i_1 - 2] [(unsigned char)4] [i_3])))))))));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            arr_34 [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_3))))));
                            var_30 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_17))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
        {
            var_31 *= ((/* implicit */unsigned char) (-((+((~(((/* implicit */int) (_Bool)1))))))));
            var_32 = ((/* implicit */_Bool) (+((+((~(((/* implicit */int) arr_20 [0U] [i_11 + 1] [i_11] [i_11] [(unsigned char)10] [(unsigned char)10]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_25 [i_1] [1] [i_1] [i_1 - 3] [i_1] [(unsigned char)13] [i_1]))))));
                /* LoopSeq 1 */
                for (short i_13 = 2; i_13 < 14; i_13 += 4) 
                {
                    arr_46 [i_1 - 3] [i_11] [i_1] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26958)))))));
                    var_34 -= ((/* implicit */unsigned long long int) (+((~(-1778215009695422649LL)))));
                }
            }
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */_Bool) (+((-((-(arr_12 [i_14] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1])))))));
            var_36 *= ((/* implicit */short) (+((-((~(((/* implicit */int) arr_26 [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_1] [i_1]))))))));
        }
        var_37 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1))))));
    }
    var_38 = ((/* implicit */unsigned char) (~((~((~(-605171385)))))));
    var_39 = (-((+((+(-2446297597372652548LL))))));
    var_40 = ((/* implicit */unsigned int) (~((~((+(((/* implicit */int) (unsigned short)55847))))))));
}
