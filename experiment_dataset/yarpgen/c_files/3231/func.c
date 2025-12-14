/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3231
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [12] [12] = ((/* implicit */signed char) ((arr_2 [i_0]) << (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (unsigned char)208))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_16 = ((((/* implicit */int) max(((signed char)-24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0)))))))) << (((min((((/* implicit */int) arr_5 [i_1 - 2])), (var_5))) + (913714436))));
        var_17 += ((/* implicit */long long int) ((((arr_4 [i_1 - 2]) << (((/* implicit */int) (unsigned char)59)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_6 [i_1] [(unsigned char)18]), ((unsigned char)0)))) <= (var_4)))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_18 = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1])) - (37)))))) ? (-9079760992900100459LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 1]))));
            arr_9 [i_2] [i_1] [i_2] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) <= (max((((/* implicit */unsigned long long int) (unsigned char)48)), (1125899906842623ULL)))))));
            var_19 = arr_5 [i_1 - 2];
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_4 [i_1 - 1])))) << (((((/* implicit */int) arr_6 [(signed char)21] [i_2])) - (208)))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [13] [i_3] [i_1] |= ((/* implicit */long long int) arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2]);
            arr_14 [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL))))) << (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2]) - (588011829)))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_4] [i_1 + 1])) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_4])) : (((/* implicit */int) (signed char)(-127 - 1))))) << (((max((((/* implicit */long long int) (_Bool)1)), ((+(7894580961853467246LL))))) - (7894580961853467242LL)))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_7 [i_1]))));
            var_22 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) var_11)), (0ULL))), (((/* implicit */unsigned long long int) arr_5 [i_4])))), (((/* implicit */unsigned long long int) var_0))));
        }
    }
    for (int i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */_Bool) (unsigned char)208);
            var_24 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)197)) << (((((/* implicit */int) (unsigned char)185)) - (185))))) <= (2147483647)));
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 3; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned char) var_4);
                        arr_28 [i_7] [i_5] [i_7] [i_7] = ((/* implicit */signed char) ((2858951488519585175ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) min((((((/* implicit */int) arr_20 [i_5 + 2])) << (((((/* implicit */int) max(((unsigned char)198), ((unsigned char)44)))) - (194))))), (((/* implicit */int) arr_26 [0] [i_9] [i_9] [(unsigned char)14] [i_5]))));
            var_27 = var_6;
            arr_32 [i_9] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) -1845711854)) ? (-1835992001) : (((/* implicit */int) (signed char)-87)))) + (2147483647))) << (((((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */long long int) 1487579431)) : (var_0))) - (1487579431LL))))))));
        }
        /* vectorizable */
        for (signed char i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8621795553085787036ULL)) ? (((/* implicit */long long int) var_3)) : (((4294963200LL) << (((/* implicit */int) (signed char)16))))));
            arr_36 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (unsigned char)254))));
            /* LoopNest 3 */
            for (unsigned char i_11 = 2; i_11 < 22; i_11 += 3) 
            {
                for (long long int i_12 = 2; i_12 < 21; i_12 += 4) 
                {
                    for (unsigned char i_13 = 2; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)0))));
                            var_30 += ((/* implicit */unsigned char) 981700035);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 1) 
        {
            var_31 = ((/* implicit */int) (unsigned char)138);
            var_32 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -289886972356377638LL)), (max((((arr_4 [i_14 + 1]) << (((((/* implicit */int) (unsigned char)117)) - (55))))), (((/* implicit */unsigned long long int) (signed char)-100))))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) 4194303))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) (unsigned char)255);
            arr_49 [22ULL] [i_5] = ((/* implicit */unsigned char) -9223372036854775800LL);
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_5 - 2] [i_15])))))));
        }
    }
    var_36 = ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_37 = ((/* implicit */signed char) 1218990801);
}
