/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234270
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) (unsigned char)7)) ? (var_4) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((((+(((/* implicit */int) (unsigned char)249)))) - (arr_4 [i_1]))) : (((/* implicit */int) (unsigned short)0))));
            var_22 = ((/* implicit */unsigned char) 1928915123U);
            var_23 ^= ((/* implicit */unsigned char) arr_3 [i_0] [(unsigned char)6] [i_0]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)0)))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29))))), (((int) 0U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (min((((/* implicit */unsigned int) arr_4 [(_Bool)1])), (arr_0 [i_1]))) : (arr_2 [(_Bool)1] [4U] [i_2])))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), ((+(arr_3 [i_0] [i_1] [i_2])))))));
                var_26 = var_6;
            }
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (unsigned char)189))));
                        var_28 = ((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_4] [i_5]);
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5 + 2])) && (((/* implicit */_Bool) arr_7 [i_5 - 1])))))));
                    }
                } 
            } 
            arr_16 [i_0] [i_3] = ((/* implicit */unsigned short) var_3);
        }
        for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)236)), (0U)));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    arr_27 [i_7] [i_6] [i_7] [i_8] [9LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 139051212))) ^ (((/* implicit */int) arr_8 [i_6 + 3]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [i_8] [4U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)66))));
                        arr_32 [i_0] [3U] [i_7] [i_0] [i_9] = ((/* implicit */unsigned int) arr_12 [i_0] [i_6] [i_7] [i_6]);
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]), ((~(((/* implicit */int) (unsigned short)32227))))));
                        var_33 = ((/* implicit */long long int) var_3);
                    }
                    for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) 
                    {
                        arr_38 [i_0] [i_8] [i_11] = ((/* implicit */unsigned int) ((10091560310634084882ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37975)))));
                        arr_39 [i_0] [1ULL] [3ULL] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) arr_13 [(unsigned char)5] [i_6] [(_Bool)1]);
                        var_34 = ((/* implicit */_Bool) arr_3 [i_0] [i_6 + 2] [i_7]);
                    }
                    var_35 = ((/* implicit */unsigned short) 1866251165U);
                    arr_40 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */signed char) arr_14 [i_6 - 2] [i_6 + 3]);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 3; i_12 < 11; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) arr_10 [i_8] [i_8] [i_8] [i_8])), (arr_2 [i_12 + 1] [i_6 + 3] [i_0]))));
                        arr_43 [i_0] [i_7] [i_0] [i_8] [i_12 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2109010864U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(_Bool)1] [(_Bool)1] [i_6 - 1] [i_6 + 2] [i_6]))) : (arr_24 [i_6 - 2] [(unsigned short)0] [i_6 - 1] [i_6 + 2])))) ? (((/* implicit */int) (unsigned short)3088)) : (((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_6 - 2] [i_8] [i_12 - 3])) ? (((/* implicit */long long int) arr_0 [i_6])) : (-3241557232116231502LL))))))));
                    }
                }
                var_37 ^= ((arr_7 [i_6 + 3]) + (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))));
            }
            for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65013))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_13]) >= (922293939U))))) : (min((((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_13] [i_13] [i_13] [i_6] [(unsigned short)12])), (arr_23 [i_0] [i_0] [i_0])))));
                arr_47 [i_6] = ((/* implicit */unsigned short) arr_14 [i_0] [i_6 - 2]);
                arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            var_39 = ((/* implicit */long long int) arr_25 [i_6 - 1] [i_6 + 3] [i_6 + 3] [i_6 - 1]);
        }
        var_40 = ((/* implicit */_Bool) ((unsigned char) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)11] [i_0]));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
    {
        var_41 = ((/* implicit */_Bool) arr_49 [i_14]);
        var_42 = ((/* implicit */unsigned long long int) ((unsigned short) arr_49 [i_14]));
        var_43 = ((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_14])) / (arr_49 [i_14])));
    }
    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        var_44 ^= ((/* implicit */unsigned short) -2923769601649910418LL);
        arr_53 [i_15] [i_15] = ((unsigned short) (-(((/* implicit */int) arr_52 [i_15]))));
        var_45 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_51 [i_15] [i_15])), ((short)0)))) ? ((~(((/* implicit */int) arr_52 [(_Bool)1])))) : (((/* implicit */int) arr_51 [i_15] [22ULL])))), (((/* implicit */int) arr_51 [i_15] [(_Bool)1]))));
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_46 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_52 [i_16]))), (((((/* implicit */_Bool) arr_52 [i_16 + 1])) ? (((/* implicit */int) arr_52 [i_16])) : (((/* implicit */int) arr_52 [i_16 + 1]))))));
        var_47 = ((/* implicit */unsigned int) arr_55 [i_16 + 1]);
        arr_56 [i_16] [i_16 + 1] = ((/* implicit */short) arr_55 [i_16]);
        var_48 = ((/* implicit */signed char) (_Bool)1);
        var_49 = ((/* implicit */_Bool) arr_54 [i_16 + 1]);
    }
    var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), (var_5))))));
}
