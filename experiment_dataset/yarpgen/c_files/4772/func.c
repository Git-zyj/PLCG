/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4772
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((((unsigned long long int) (unsigned short)18460)) > (((arr_6 [i_0] [i_1] [i_2] [i_3]) % (arr_6 [i_0] [i_1] [i_2] [i_3])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_4])))))) << (((((/* implicit */int) (unsigned short)65477)) - (65452)))));
                            var_18 ^= ((/* implicit */long long int) arr_9 [i_0]);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - ((+(0))))))));
                            arr_11 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_3] [i_1]);
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65477))))) || (((/* implicit */_Bool) (~(-7811621586535527506LL))))));
                        }
                        var_20 = (i_1 % 2 == 0) ? (((/* implicit */short) (((((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44072)) || (((/* implicit */_Bool) 1403289710U))))))) + (2147483647))) >> (((((/* implicit */int) min((arr_9 [i_1]), (arr_9 [i_1])))) - (199)))))) : (((/* implicit */short) (((((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44072)) || (((/* implicit */_Bool) 1403289710U))))))) + (2147483647))) >> (((((((/* implicit */int) min((arr_9 [i_1]), (arr_9 [i_1])))) - (199))) + (123))))));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */short) arr_14 [i_0]);
                        arr_17 [i_0] [i_5] [i_2] [i_1] = ((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_0] [i_1]), (min((((/* implicit */long long int) (signed char)44)), (arr_15 [i_1] [i_2] [i_1] [i_1])))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((unsigned short) arr_19 [i_6] [i_1] [i_0]));
                            var_22 = ((/* implicit */unsigned char) (~(arr_4 [i_0])));
                            var_23 = ((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_5] [i_2] [i_1] [i_0] [i_0]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            arr_25 [i_1] [i_1] [i_2] [i_2] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) (!(var_10)));
                            arr_26 [i_0] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) (~(0)));
                            var_24 += (~((-(((/* implicit */int) ((((/* implicit */_Bool) 6950003496322044840ULL)) || (((/* implicit */_Bool) -7467081935497885030LL))))))));
                            var_25 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_7] [i_1] [i_2] [i_1] [i_5] [i_5] [i_2]));
                        }
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_1] [i_1] = ((/* implicit */short) var_7);
                            arr_30 [i_1] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned short)65477)))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 3478483866U)) != (0ULL))))))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) ((_Bool) 132178182921237530ULL)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (3441907231306551390LL)))));
                            var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) - (((-3441907231306551390LL) + (0LL))))));
                        }
                        arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((long long int) (_Bool)1)) >> (((((/* implicit */int) arr_23 [i_1] [i_5])) - (63993)))))) <= (min(((-(11496740577387506773ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((long long int) (_Bool)1)) >> (((((((/* implicit */int) arr_23 [i_1] [i_5])) - (63993))) + (28127)))))) <= (min(((-(11496740577387506773ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_5])))) * (((/* implicit */int) ((1360139117388652457ULL) < (1067668746073834200ULL))))));
                    }
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_0] [i_10])))));
                        var_29 |= ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) (short)0))))) == (-3441907231306551390LL));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)19), (((/* implicit */unsigned short) (_Bool)1))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))));
                    }
                    arr_37 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((unsigned int) (-(max((-3441907231306551390LL), (((/* implicit */long long int) 4294967294U)))))));
}
