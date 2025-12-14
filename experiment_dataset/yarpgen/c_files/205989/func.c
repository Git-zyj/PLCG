/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205989
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min((var_12), (arr_2 [i_0])))), (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))))));
        var_14 ^= ((/* implicit */long long int) var_11);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0]))))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) 18446744073709551589ULL))) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_1] [i_0] [i_0])), ((short)-32756)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))))));
        }
        for (int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_10 [3LL] [i_2] [i_2 - 1] |= ((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_2 - 1] [i_2 - 1]))), (max((arr_0 [i_2 + 1] [i_2 - 1]), ((unsigned short)28672)))));
            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
            var_18 = ((/* implicit */short) max((((((/* implicit */int) arr_8 [i_2 + 1])) - (((/* implicit */int) arr_8 [i_2 + 2])))), (((/* implicit */int) (short)29056))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] [i_3] [i_4] [i_4] [(signed char)13] [(short)20] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (-9156555517977982712LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_2 + 3] [i_2] [i_4])) : (((/* implicit */int) var_13))))))));
                        var_19 = ((/* implicit */unsigned int) arr_7 [i_4]);
                        var_20 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_13)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) / (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_5 [i_2] [i_2] [i_2 + 1]))))));
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_0 [i_2] [i_2]))), (var_0))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)17))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((arr_1 [i_5]) << ((((+(var_11))) - (11092908988045234953ULL))))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6 - 1] = ((/* implicit */unsigned char) min((arr_16 [i_6 - 1] [(unsigned short)0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647)))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_26 [i_7] = ((/* implicit */int) ((((var_8) + (9223372036854775807LL))) << (((((max((arr_1 [(unsigned char)13]), (((/* implicit */unsigned long long int) arr_24 [i_6 - 1])))) << (((/* implicit */int) arr_2 [i_6 - 1])))) - (3573873768802716193ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_6 - 1] [(unsigned short)5] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)64476))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_6 - 1])) ? (((/* implicit */int) arr_11 [i_6 - 1])) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_4)))))));
                        arr_35 [i_6] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_18 [i_6])))))))) ? ((+(arr_1 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_9] [i_6 - 1] [i_8]), (((/* implicit */short) var_9))))))));
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_0 [i_6 - 1] [i_6 - 1]), (arr_0 [i_6 - 1] [i_6 - 1])))), (max((((((/* implicit */_Bool) arr_30 [i_9] [i_8] [i_9] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_6]))), (((/* implicit */unsigned long long int) max((-1011727595), (((/* implicit */int) arr_19 [i_6])))))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_12 [i_6 - 1] [i_6] [(unsigned char)13] [i_6 - 1]))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_9])) << (((((/* implicit */int) var_10)) - (11813)))))) & (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                    }
                } 
            } 
            arr_36 [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((max((var_4), (((/* implicit */short) var_12)))), (((/* implicit */short) (_Bool)1)))))));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    {
                        arr_44 [i_11] [0LL] [i_6 - 1] = ((/* implicit */int) min((((/* implicit */long long int) ((int) ((25300377) - (((/* implicit */int) var_3)))))), (var_8)));
                        arr_45 [(_Bool)1] [i_10] [i_7] [(short)10] = ((/* implicit */_Bool) arr_12 [i_6 - 1] [i_6 - 1] [2ULL] [19]);
                    }
                } 
            } 
            var_27 = ((max((min((var_8), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 294167754U))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [12] [i_6 - 1])) ? (((/* implicit */int) arr_21 [i_6 - 1])) : (((/* implicit */int) (short)32751))))));
        }
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 14; i_13 += 1) 
            {
                {
                    arr_50 [i_12] [i_12] [i_13] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_13 - 3] [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_30 [i_13 - 3] [i_13 - 3] [i_13] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) (unsigned char)247))))), (((13882972644693187471ULL) + (((/* implicit */unsigned long long int) (+(var_1))))))));
                    arr_51 [i_6] [i_6] [i_13] [(unsigned short)10] = ((/* implicit */signed char) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_6])), (arr_24 [i_12])))) << (((/* implicit */int) arr_41 [i_13] [i_13 - 3] [i_6 - 1] [i_6 - 1])))) >> (((((((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_4))))) * (max((((/* implicit */unsigned int) var_3)), (var_5))))) - (566472594U)))));
                    arr_52 [i_13] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6]))) : (4353931191134081293LL))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((+(((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_4)) - (7227))))))))))));
    var_29 |= ((/* implicit */signed char) ((var_12) ? ((+(((/* implicit */int) min(((_Bool)1), (var_12)))))) : (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))));
    var_30 = ((/* implicit */unsigned char) var_10);
}
