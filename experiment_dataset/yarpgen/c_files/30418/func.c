/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30418
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
    var_11 = var_5;
    var_12 = var_4;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_2);
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)890))) > (var_0)))) : (((/* implicit */int) var_2)))))));
        arr_4 [i_0] = ((/* implicit */short) ((13U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) + (var_5)))) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) min(((unsigned short)65526), (((/* implicit */unsigned short) var_3))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (-((-(18446744073709551615ULL)))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) (short)-24643)), (var_0)));
                    var_16 = ((/* implicit */short) ((unsigned int) (short)-24650));
                }
            } 
        } 
        var_17 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32743))) / (4294967283U)));
        var_18 = ((/* implicit */unsigned int) 2787393312843485512LL);
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) 0ULL);
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_19 = ((/* implicit */int) (unsigned short)49298);
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5260))) & (782558240U)))) > (3ULL)));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_26 [i_4] [i_7] [i_5] [i_7] = ((/* implicit */unsigned char) arr_9 [i_4 + 2] [i_5] [i_7]);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [(unsigned short)5] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (arr_9 [i_4 + 3] [i_5] [i_7])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_30 [8U] [(short)10]))));
                            var_23 = ((/* implicit */unsigned short) 2540501508U);
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32744)) + (((/* implicit */int) arr_18 [i_4] [(unsigned short)11] [i_5] [i_4 - 1]))))), (var_0))))));
            var_25 = ((/* implicit */unsigned short) ((short) arr_24 [i_4] [i_5] [9LL] [i_4 + 3]));
            var_26 *= ((/* implicit */short) ((unsigned int) (short)30175));
            var_27 = (-(((((2787393312843485512LL) << (((((/* implicit */int) (unsigned short)7951)) - (7950))))) / (((/* implicit */long long int) (-(4294967289U)))))));
        }
        for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_18 [i_10 + 1] [i_10 + 1] [1ULL] [(unsigned short)9])) | (((/* implicit */int) arr_18 [i_10 + 2] [i_10 + 1] [i_10] [i_10 + 2])))) & (((/* implicit */int) ((((/* implicit */int) ((15154163186758598181ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744)))))) >= (((((/* implicit */int) (unsigned short)52297)) << (((((/* implicit */int) (unsigned short)42556)) - (42549))))))))));
            var_29 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4697))) | (min((((/* implicit */unsigned long long int) 268427264)), (var_6)))))));
        }
        for (unsigned int i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) max(((-(arr_9 [(unsigned short)2] [i_11] [(unsigned short)14]))), ((-(var_10))))))));
            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) min((arr_19 [i_4] [i_11] [i_11 + 2]), (((/* implicit */unsigned long long int) var_4))))))));
            var_32 = ((/* implicit */long long int) (~(arr_19 [i_4] [i_11 + 1] [i_4])));
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) 6759454153322270002ULL)))));
        }
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4] [i_4] [i_4 - 1] [i_4] [(unsigned short)14]))) : (3881312740U)))), (5242090396919605621LL)))))));
        var_35 &= ((/* implicit */unsigned short) ((arr_7 [(short)12]) >> (((((-4448111911502902114LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-27218))))) - (163425377011625LL)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_12 = 3; i_12 < 10; i_12 += 3) 
    {
        arr_41 [(short)3] |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_9)) + (9193871304182991712ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_25 [(unsigned short)1] [i_12] [i_12])) : (((/* implicit */int) (unsigned short)7929)))))));
        arr_42 [i_12 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)30077)) - (8)));
        arr_43 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [15] [i_12]))) - (((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52695)))))));
        var_36 = ((/* implicit */short) ((unsigned int) arr_16 [i_12 - 1]));
    }
    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        var_37 *= ((/* implicit */unsigned short) min((4221457608U), (((/* implicit */unsigned int) (short)-32743))));
        arr_48 [i_13] = ((max((18446744073709551615ULL), (4257824895652726915ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)6938), (((/* implicit */unsigned short) (short)13062)))))));
        arr_49 [8U] [8U] = ((/* implicit */unsigned short) 4294967295U);
    }
    var_38 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)41197));
}
