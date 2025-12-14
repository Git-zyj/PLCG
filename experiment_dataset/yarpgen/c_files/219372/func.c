/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219372
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
    var_13 ^= ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_5 [(unsigned char)0] [(unsigned char)0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (28261))))))))) ? (((/* implicit */long long int) max((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (signed char)-93))))) : (min((2327405371777633474LL), (((/* implicit */long long int) (unsigned short)0))))));
            var_14 = ((/* implicit */unsigned short) var_5);
        }
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) arr_1 [i_0]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_16 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_15 [i_3 - 1] [i_5])))));
                        var_17 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((short) (short)15551))), ((unsigned short)65532)));
                    }
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_19 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) (unsigned short)34786);
                        arr_20 [i_2] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((4754743790440559025LL) >> (((((/* implicit */int) (unsigned short)32768)) - (32722)))));
                    }
                    for (short i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) (signed char)-1);
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_10 [(unsigned char)4] [i_7 + 3] [i_3 + 1])) == (((/* implicit */int) arr_21 [i_3] [i_3] [i_3 - 1])))), (((((/* implicit */int) arr_8 [i_2] [i_3] [i_4])) < (((/* implicit */int) ((short) arr_18 [i_2] [i_2] [(short)9]))))))))));
                        arr_23 [i_2] [i_3] [(signed char)9] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_3 [i_3 - 1] [i_3])))) ? (((arr_17 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1]) - (((/* implicit */unsigned long long int) arr_3 [i_3 - 1] [i_3])))) : (((/* implicit */unsigned long long int) ((int) arr_17 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1])))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_2])) ? (((/* implicit */int) arr_12 [i_7 - 1] [i_3 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_7 - 1] [i_3 - 1] [(_Bool)1] [i_2]))))) ? (((/* implicit */int) arr_12 [i_7 - 1] [i_3 - 1] [10U] [i_3])) : (((/* implicit */int) arr_9 [i_2] [(signed char)6]))));
                        arr_24 [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) ((long long int) (-((~(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (short i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_21 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_21 [i_3 - 1] [i_3] [i_8 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_3 - 1] [i_4] [i_8 - 1]))))));
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) min((var_7), (var_8)))))));
                    }
                    for (short i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_3 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_4]);
                        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_18 [i_2] [i_2] [i_2]), (((/* implicit */short) arr_10 [(short)6] [i_3] [10U])))))))) ? ((~(((/* implicit */int) arr_9 [i_2] [i_3 - 1])))) : ((-(((/* implicit */int) var_11))))));
                    }
                    var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [i_2])) ? (((2922700670U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3 - 1] [i_3 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2)))))));
                    arr_33 [i_2] [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_16 [i_3 + 1] [i_3 + 1]), (var_12))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (signed char)-59))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((int) ((unsigned short) var_10)));
                    var_27 -= ((/* implicit */unsigned short) min((((((/* implicit */int) var_11)) << (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min((arr_18 [i_2] [i_10] [i_11]), (arr_18 [i_2] [i_10 - 1] [i_11]))))));
                    var_28 += ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */_Bool) (short)7783)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))), (((/* implicit */unsigned int) min((var_3), (((short) arr_3 [(unsigned short)11] [i_11])))))));
                    var_29 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_38 [i_2] [i_2] [i_10 - 1] [i_10 - 1]))))) ? ((~(4294967289U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)7]))))))));
                    var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_1))))))), (((unsigned long long int) (+(559865946U))))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_42 [i_12] = ((/* implicit */signed char) ((_Bool) 0ULL));
        arr_43 [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_12] [i_12] [i_12] [i_12]))));
        var_31 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28978))) & (2249151589U)))));
    }
    /* LoopNest 2 */
    for (long long int i_13 = 2; i_13 < 11; i_13 += 2) 
    {
        for (short i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            {
                var_32 = ((/* implicit */int) (short)-4583);
                var_33 = ((short) arr_0 [i_13 - 2]);
                arr_51 [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) -407741222514105174LL))), (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5850)))))));
            }
        } 
    } 
}
