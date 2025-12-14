/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210224
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
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]);
            var_16 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
            var_17 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7706)))))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [4U] = ((/* implicit */unsigned short) arr_1 [i_2]);
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_3 [(unsigned short)16] [i_2] [(unsigned short)16])), (arr_2 [i_0] [i_0] [i_2]))) << (((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_2])) - (71)))))) ? ((+(arr_2 [i_2] [i_0] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-21543)))))));
        }
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_0] [i_0])) ? (max((((/* implicit */long long int) (_Bool)1)), (-6206930880053407288LL))) : (((/* implicit */long long int) ((/* implicit */int) (((-(var_0))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7)))))))))));
            arr_11 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (8965872141885536125ULL))))));
            arr_12 [i_0] [(signed char)5] = (+(((((-2875334716825258231LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0]))))) : (arr_1 [i_0]))));
        }
        var_19 = ((/* implicit */int) ((arr_5 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0])));
    }
    for (short i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */int) (((~(var_3))) + (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [19LL] [i_4 + 2])) && (((/* implicit */_Bool) var_3))))) << (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_4])) >= (((/* implicit */int) arr_16 [(unsigned short)12]))))))))));
        arr_18 [i_4] = ((/* implicit */unsigned char) min((2041137112), (((/* implicit */int) (unsigned char)240))));
        arr_19 [i_4] = arr_16 [i_4];
        arr_20 [i_4 - 2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))) > (2875334716825258206LL)));
    }
    for (short i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
    {
        arr_23 [i_5] [i_5 + 2] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)80)))) ^ ((+(((((/* implicit */int) arr_15 [i_5])) << (((((/* implicit */int) (short)11182)) - (11167)))))))));
        /* LoopSeq 4 */
        for (short i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            var_20 &= var_12;
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            arr_34 [i_5] [i_6 + 1] [i_5] [i_6 + 1] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ ((-(((/* implicit */int) ((((/* implicit */int) (short)9415)) >= (2041137112))))))));
                            arr_35 [(unsigned short)16] [i_8] [i_7 + 1] = ((/* implicit */long long int) min((((4108490759595244789LL) >= (((/* implicit */long long int) arr_32 [i_6 - 2] [i_6 + 2] [i_6 - 2] [i_6 - 1] [i_6 - 1])))), (var_7)));
                            var_21 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_5 + 1])) <= (((/* implicit */int) arr_15 [i_5 - 2])))))));
        }
        for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_31 [i_5 + 2] [i_5 + 2] [i_10 + 1] [i_10 + 2]) >= (arr_31 [i_5 + 3] [i_5 - 2] [i_10 + 1] [i_10 - 1]))))));
                var_24 = ((/* implicit */unsigned short) var_8);
            }
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_41 [i_10 + 2] [i_5 + 2] [i_5 - 1] [i_5 - 2]), (arr_41 [i_10 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 1])))) <= (((/* implicit */int) ((unsigned short) (-(arr_36 [i_5])))))));
            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((var_1) > (((/* implicit */long long int) (+(arr_31 [(signed char)19] [i_5] [(signed char)19] [i_10])))))))));
        }
        for (signed char i_12 = 3; i_12 < 22; i_12 += 1) 
        {
            arr_46 [i_5] = ((/* implicit */short) var_3);
            var_27 = ((/* implicit */short) var_7);
            arr_47 [i_5 - 2] [9LL] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15509)) ^ ((~(((/* implicit */int) arr_27 [i_5 - 1] [i_5 - 1] [i_12 - 2] [i_12 - 1]))))));
        }
        /* vectorizable */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) -5391633875639598299LL)) && (((/* implicit */_Bool) -4108490759595244789LL))));
                    var_29 = ((/* implicit */unsigned char) var_3);
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_5 + 2] [i_5])) ? (var_1) : (((/* implicit */long long int) arr_48 [i_15]))))))));
                }
                for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    arr_58 [i_13] [i_13] [i_14] [i_14] [i_16] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) arr_52 [(_Bool)1] [i_5 - 1] [i_13] [i_13] [i_5] [i_5 - 1])))));
                    var_31 = ((/* implicit */unsigned short) arr_51 [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1]);
                }
                for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    var_32 = ((/* implicit */_Bool) -6516384777447439853LL);
                    arr_62 [(unsigned short)12] [i_13] [i_14] [20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_31 [i_5] [i_13] [i_5] [i_17]) >= (arr_31 [10LL] [(short)16] [(short)16] [10U])))) : ((-(((/* implicit */int) (unsigned char)13))))));
                    var_33 = ((/* implicit */short) ((var_1) ^ (((/* implicit */long long int) arr_61 [i_5] [(unsigned short)10] [i_5 + 2] [i_17]))));
                }
                var_34 -= ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_14])))));
                arr_63 [i_13] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5 + 1] [i_5 + 2] [i_13] [i_5 + 2]))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5]))) ^ (arr_44 [i_13] [i_5 + 1])))));
            }
            var_35 = ((/* implicit */_Bool) (~(arr_21 [i_13] [i_5 + 1])));
            var_36 |= ((/* implicit */short) ((long long int) (_Bool)1));
            arr_64 [i_13] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_55 [i_5] [(unsigned char)9] [i_13 - 1] [i_13] [i_13] [i_13])))));
            arr_65 [(short)0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((arr_61 [i_5] [i_13] [i_5] [5LL]) - (453037908)))))) ? (arr_28 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (_Bool)1)))))));
        }
    }
    var_37 = ((/* implicit */unsigned short) var_3);
}
