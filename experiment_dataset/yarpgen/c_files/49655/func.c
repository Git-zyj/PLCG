/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49655
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
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)104))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_12 = ((/* implicit */long long int) (_Bool)1);
            var_13 = ((/* implicit */short) ((unsigned short) arr_1 [5]));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_14 = (~(((/* implicit */int) (_Bool)1)));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_6 [i_2] [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))) : (arr_6 [i_0 + 1] [i_0 - 1])));
            arr_7 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59884)) + (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_0 [i_0 + 1])) - (54518))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) arr_0 [i_0])));
                var_18 += ((/* implicit */signed char) ((arr_8 [i_0 - 2] [i_0] [2] [i_0 + 1]) < (arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 1])));
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                arr_13 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                arr_14 [i_2] = ((((/* implicit */_Bool) arr_4 [i_0 - 1])) || (((/* implicit */_Bool) arr_4 [i_0 - 2])));
                var_19 += ((/* implicit */unsigned short) (_Bool)1);
            }
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                arr_18 [i_0] [i_2] [i_0] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((-495233941) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                arr_19 [i_0] [i_0] [i_5 + 1] = ((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                var_20 = ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2)));
            }
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
        }
        var_22 = ((/* implicit */short) (!(((arr_17 [i_0] [i_0] [i_0 - 1] [i_0]) && (((/* implicit */_Bool) var_9))))));
        arr_20 [(unsigned short)17] = 3387412251438557472ULL;
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */signed char) (-(var_1)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_6 - 1] [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (arr_5 [(_Bool)0] [i_6] [(_Bool)0])));
        arr_24 [i_6] = ((/* implicit */long long int) (+(var_1)));
        arr_25 [i_6] [i_6] = 18446744073709551608ULL;
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */_Bool) ((unsigned int) var_1));
        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_17 [6] [i_8 - 2] [i_8] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_8 - 1]) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))) : ((((_Bool)1) ? (((unsigned long long int) arr_6 [i_8] [i_8])) : (((/* implicit */unsigned long long int) arr_27 [i_8]))))));
        var_29 = ((/* implicit */short) max((arr_15 [i_8]), (arr_1 [i_8])));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_32 [i_9])))) ? (max((((((/* implicit */_Bool) arr_33 [i_9] [7])) ? (((/* implicit */int) var_9)) : (-2034536432))), (((int) -8684101471107475512LL)))) : (arr_32 [20ULL])));
        var_30 += ((/* implicit */long long int) -1);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) var_4);
        var_32 = ((/* implicit */unsigned long long int) var_4);
    }
    /* LoopSeq 4 */
    for (unsigned short i_11 = 2; i_11 < 11; i_11 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((short) 1846477522U))))) >= ((((-(((/* implicit */int) arr_3 [i_11 - 2] [i_11 - 2] [i_11])))) & (((/* implicit */int) max(((_Bool)1), (arr_17 [i_11] [8LL] [i_11 + 1] [i_11 - 2]))))))));
        arr_39 [(signed char)1] = ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_11]))) ? (((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (-1LL)))) : (6224944750026540092ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_11] [i_11] [i_11] [i_11])))) ? (((((/* implicit */int) arr_4 [i_11 - 1])) - (((/* implicit */int) arr_0 [1U])))) : (((/* implicit */int) ((short) (unsigned short)1679)))))));
        var_34 = ((/* implicit */int) (((_Bool)1) ? (6938597507390197535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (long long int i_12 = 4; i_12 < 24; i_12 += 1) 
    {
        var_35 = ((/* implicit */short) (_Bool)1);
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_12 - 3])) ? (((((/* implicit */_Bool) arr_40 [i_12 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_12])))) : (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_37 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_40 [i_12 - 3])) ? (((/* implicit */int) arr_40 [i_12])) : (((/* implicit */int) var_6))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
        {
            arr_48 [i_14] [i_14] [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((unsigned long long int) arr_46 [i_13] [i_14])) : (((/* implicit */unsigned long long int) arr_41 [(signed char)18])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_40 [i_14])) ? (((/* implicit */int) (unsigned short)1677)) : (((/* implicit */int) (_Bool)1)))))))));
            var_38 = ((/* implicit */long long int) (_Bool)1);
            arr_49 [i_13] [i_13] [12] = ((/* implicit */_Bool) arr_44 [i_14]);
        }
        for (int i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
        {
            arr_53 [i_13] [i_15] [i_15] = ((/* implicit */signed char) arr_47 [i_13]);
            arr_54 [i_13] [i_13] = 18446744073709551615ULL;
            var_39 = ((/* implicit */signed char) arr_50 [i_13]);
            arr_55 [i_15] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4)))) : (((/* implicit */int) (unsigned short)0))))) ? (((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_50 [i_13])))) ^ ((+(((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63858)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)1687)) : (((((/* implicit */_Bool) arr_46 [i_13] [i_15])) ? (((/* implicit */int) arr_52 [i_13] [i_13])) : (((/* implicit */int) arr_52 [18ULL] [i_15]))))))));
        }
        arr_56 [i_13] [(signed char)18] = ((/* implicit */unsigned short) (+(((arr_51 [i_13] [i_13]) / (arr_51 [i_13] [i_13])))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        var_40 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_41 [i_16])) ? (arr_41 [i_16]) : (((/* implicit */int) (_Bool)1))))));
        arr_59 [i_16] = ((/* implicit */unsigned long long int) max(((-(arr_43 [i_16]))), (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
}
