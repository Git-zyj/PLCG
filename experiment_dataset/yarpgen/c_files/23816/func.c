/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23816
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
    for (int i_0 = 2; i_0 < 7; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [8]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_1])), ((+(((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_15)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
            var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(var_15)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_11)))) ? (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [(unsigned char)3] [(unsigned char)3])), (((unsigned long long int) var_13))))) ? (7254928536680218429ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) var_2)) - (32235)))))));
            arr_7 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-82))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2])))))) : (((long long int) 7254928536680218433ULL)))), (((/* implicit */long long int) 192432529))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                arr_12 [i_4] [i_3] [i_4] = ((/* implicit */short) max((max((arr_11 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((int) 7254928536680218442ULL)))));
                var_20 |= ((/* implicit */short) max((min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */int) arr_2 [2LL])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))), (((/* implicit */int) ((signed char) max((((/* implicit */int) var_14)), (var_10)))))));
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_0])) ? (arr_1 [i_5]) : (((/* implicit */int) arr_6 [i_0 + 4] [i_0 + 4]))))) ? (min((arr_3 [i_5]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [2ULL] [2ULL]))) == (arr_11 [i_0] [i_3] [i_0]))))))));
                var_22 &= ((/* implicit */unsigned long long int) var_7);
                var_23 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_13)))));
            }
            var_24 = ((/* implicit */short) 11191815537029333180ULL);
            var_25 = ((/* implicit */short) ((int) max(((short)32767), ((short)32368))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_26 &= ((/* implicit */long long int) arr_0 [i_6] [i_0 + 3]);
            arr_21 [i_6] = ((/* implicit */long long int) arr_19 [i_6] [i_6]);
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-32368)) : (506791970)));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_3 [i_7]))));
        }
    }
    for (int i_8 = 2; i_8 < 7; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) var_8);
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_29 += ((/* implicit */_Bool) arr_29 [i_9] [i_11]);
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_40 [i_8] [i_10] [i_11] [i_8] = ((/* implicit */unsigned long long int) ((long long int) 7254928536680218424ULL));
                        arr_41 [i_8] [i_9] [i_10 + 1] [i_10] [i_12] [i_9] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_10] [(unsigned char)2] [i_10])) ? (13035915993474916372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9] [i_12])))))) ? (((arr_26 [i_12] [i_9]) >> (((((/* implicit */int) arr_24 [i_8 + 4] [i_9] [i_10])) + (11034))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_39 [i_12] [i_10] [i_10])) < (7254928536680218404ULL)))))));
                        var_30 = ((/* implicit */unsigned long long int) ((long long int) arr_14 [i_8 + 4]));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -433664919)) ? (5410828080234635253ULL) : (((/* implicit */unsigned long long int) 433664919))));
                    }
                }
                arr_42 [i_8 + 4] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5410828080234635243ULL)) ? (((/* implicit */unsigned long long int) 4200880754U)) : (7254928536680218443ULL)));
            }
            /* vectorizable */
            for (unsigned char i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                arr_47 [i_8] [i_8] [i_13] [i_13] = ((/* implicit */unsigned short) arr_44 [i_8]);
                var_32 *= ((/* implicit */short) ((unsigned short) arr_30 [i_8 - 1] [i_8 - 1]));
                var_33 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_9] [i_13])) ? (arr_43 [i_8]) : (((/* implicit */int) (unsigned short)55999))))));
            }
        }
        arr_48 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)253)), ((short)23064))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (-9223372036854775802LL)))))));
        arr_49 [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) var_7))), (arr_38 [i_8 + 1] [i_8 + 4])));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23064))) ^ (arr_32 [i_8])))))) * (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) || (((/* implicit */_Bool) arr_0 [i_8] [i_8])))))) : ((+(arr_26 [i_8] [i_8]))))))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
    {
        arr_52 [i_14] = ((/* implicit */int) (short)-1);
        var_35 ^= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13194)) ? (((/* implicit */int) (short)-7784)) : (((/* implicit */int) (unsigned char)255))))) ? ((+(arr_50 [i_14]))) : (min((((/* implicit */unsigned int) (unsigned char)204)), (var_9)))));
    }
    var_36 = ((/* implicit */int) ((unsigned long long int) (+((+(((/* implicit */int) (short)-2061)))))));
}
