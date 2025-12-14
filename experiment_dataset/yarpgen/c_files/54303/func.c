/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54303
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) (~(((((/* implicit */int) var_1)) - (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_12)))));
        arr_4 [i_0] = (!(((/* implicit */_Bool) 3455255519U)));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((max((60446764U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (var_7) : (((/* implicit */int) arr_6 [i_1]))))) && (arr_6 [i_1])))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned short)49830)))), (((/* implicit */int) var_0))));
                        var_16 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (short)-15520)))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)88))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */long long int) 3455255495U)) != (var_12))))))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_8))))))) < (((/* implicit */int) min((((((/* implicit */_Bool) (short)7190)) && ((_Bool)1))), (var_0)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_16 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15523)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)64304))))) ? (((/* implicit */int) (signed char)-95)) : ((~(((/* implicit */int) var_11))))))));
                            var_18 *= (signed char)-76;
                            arr_17 [i_3] [(unsigned short)4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)255)) && (var_8)))))) >> (((((((1214126536U) + (3455255519U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_7 [i_1] [i_1] [i_1]))))))) - (374414759U)))));
                        }
                        arr_18 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)95), (((/* implicit */signed char) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_12)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_4 - 3]))) > (27ULL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            arr_21 [i_1] [i_6 - 2] = ((/* implicit */signed char) var_12);
            var_19 += ((/* implicit */signed char) var_7);
        }
    }
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
        {
            arr_26 [i_7] = ((/* implicit */signed char) var_2);
            arr_27 [i_7] [1] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)32768))))))), (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_2)), (arr_20 [i_7] [i_7] [i_7])))), (arr_23 [i_8 + 1])))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
            var_21 = ((/* implicit */short) ((var_2) ? ((~(((/* implicit */int) (signed char)-63)))) : ((+(((/* implicit */int) var_9))))));
        }
        for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max(((unsigned short)26056), ((unsigned short)52476)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9)))))) : (((((/* implicit */_Bool) 3455255519U)) ? (((/* implicit */long long int) 839711776U)) : (var_12))))), (((/* implicit */long long int) ((((/* implicit */int) (!(var_8)))) | (((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (signed char)0)))))))))))));
            var_23 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-36))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 0U)))), ((!(((/* implicit */_Bool) (signed char)-125)))))))));
            /* LoopNest 3 */
            for (short i_11 = 3; i_11 < 9; i_11 += 2) 
            {
                for (int i_12 = 2; i_12 < 11; i_12 += 1) 
                {
                    for (long long int i_13 = 3; i_13 < 11; i_13 += 1) 
                    {
                        {
                            arr_38 [i_7] [i_7] [i_10] [i_7] [8LL] [(unsigned char)6] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_36 [i_13] [i_13] [i_13 - 1] [i_13 + 2] [i_10]), (((/* implicit */unsigned short) (unsigned char)249)))))));
                            var_25 |= ((/* implicit */unsigned int) 809964878);
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) min((((/* implicit */short) var_8)), (var_4)))))));
                            arr_39 [i_7] [i_10] [i_10] [i_12] [i_13] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_9)))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) min(((signed char)-99), (((/* implicit */signed char) (_Bool)1))))))))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)490)), (var_10)))) ? (((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) arr_20 [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) arr_32 [i_7] [i_7] [i_7]))))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
    {
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_8 [i_14 - 1] [i_14 + 1] [i_14 - 1]))) | (((arr_32 [i_14] [i_14 - 1] [i_15]) ? ((~(((/* implicit */int) (unsigned char)73)))) : (((/* implicit */int) var_2))))));
                arr_47 [i_15] [7LL] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)10851)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_14] [i_14])) : (((/* implicit */int) var_3))))))));
                var_30 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_14]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22565)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))), (((((/* implicit */_Bool) (short)10851)) ? (-6644607762367910957LL) : (arr_43 [i_14 - 1] [i_14 - 1] [i_14 + 1])))));
            }
        } 
    } 
}
