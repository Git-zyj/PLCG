/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42294
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
    var_11 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) 0U)))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) != (max((((/* implicit */unsigned long long int) (unsigned char)78)), (17250990821412206211ULL)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = (!(((/* implicit */_Bool) (~(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) ((1195753252297345404ULL) | (((/* implicit */unsigned long long int) 872070669U))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) min((872070669U), (((/* implicit */unsigned int) (unsigned short)7560)))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)92)) % (((/* implicit */int) (short)-1889))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44562))))) ? (((/* implicit */int) min(((short)-1), (min((((/* implicit */short) var_4)), (var_9)))))) : (((/* implicit */int) var_3)))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_15 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((min((arr_9 [i_3 + 1] [i_2] [i_3]), (arr_9 [i_3 + 1] [i_2] [i_3 + 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((_Bool) (((_Bool)0) && (((/* implicit */_Bool) 872070669U))))) ? ((~((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            arr_16 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) 3761243130U)) : (arr_9 [i_1] [i_2] [i_2])))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-14752)) && (((/* implicit */_Bool) arr_6 [i_1] [i_2])))))))));
            var_16 -= ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)61161)) - (61159))))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_5] [i_2])) != (((/* implicit */int) arr_21 [i_7])))))))));
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((3136855918U) != (3422896627U))))))));
                            arr_26 [i_1] [i_2] [i_5] [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_7]))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [(short)5] [(short)5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : (((var_0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            arr_31 [i_1] [i_2] [i_6] [i_8] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_5] [i_6] [i_1] [i_8]))) | (16U))) < (((unsigned int) (_Bool)1)));
                            var_19 -= ((/* implicit */unsigned char) arr_13 [i_8] [i_8]);
                            arr_32 [i_8 + 2] [i_6] [i_5] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (short)3193)) - (3185)))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-16451)))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_37 [i_9] [i_6] [i_5] [i_5] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)3176)))), ((~((-(var_7)))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
        {
            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)128);
            /* LoopNest 3 */
            for (unsigned char i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            arr_47 [i_12] [i_12] [i_11] [i_11] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                            arr_48 [(_Bool)1] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) (_Bool)0);
                        }
                    } 
                } 
            } 
            arr_49 [i_10] = ((/* implicit */short) (+(2879735808U)));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_27 [i_14] [i_14])), (min((((/* implicit */short) (_Bool)1)), (arr_24 [i_14] [i_14] [i_14] [i_14] [i_14])))))) ? (max((((((((/* implicit */int) (short)-16023)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */int) arr_14 [i_14] [i_14] [i_14] [i_14])))) : ((~(((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    arr_57 [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_5 [i_14] [i_15] [i_16]);
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) (short)3977)) && (((/* implicit */_Bool) 7965712248450955841ULL))))), ((-(((/* implicit */int) var_5))))));
                }
            } 
        } 
        arr_58 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (2459577856U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))))) ? (((unsigned int) arr_0 [i_14] [i_14])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))))))));
    }
}
