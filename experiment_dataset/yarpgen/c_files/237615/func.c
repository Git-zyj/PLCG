/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237615
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_15))));
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */signed char) arr_1 [i_0]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (12553897427307755509ULL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_21 += ((/* implicit */unsigned long long int) ((var_2) ? (((var_13) | (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2])))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2]))))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_2 [i_2]))))) ? ((+((~(((/* implicit */int) arr_2 [i_2])))))) : (((/* implicit */int) arr_3 [i_2]))));
            arr_7 [i_1] = ((/* implicit */int) arr_0 [i_1]);
        }
        arr_8 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (-2216866951291708586LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1])))))) ? (((((/* implicit */_Bool) (short)-10337)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) (short)-21935)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) var_10))))))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_23 = ((/* implicit */long long int) ((unsigned char) arr_3 [i_3]));
            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_3]), (var_1))))) : (max((3114644615691037251ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                arr_15 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_11 [i_4] [i_5 - 1])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_4 - 1] [i_5] [i_4 - 1])), (var_0)))) : (((((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1])) - (arr_11 [i_4] [i_5 - 1])))));
                var_25 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_5]))))) ^ (((unsigned int) (short)0)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)8237)), (arr_12 [i_1] [i_1] [i_4])))))))));
            }
            for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_26 -= ((/* implicit */int) (short)21929);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    var_27 += ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)2294))))));
                    var_28 = ((((/* implicit */_Bool) arr_19 [i_7 - 1] [14LL] [(signed char)10] [i_7])) || (((/* implicit */_Bool) ((int) arr_19 [i_1] [i_4] [18ULL] [i_7]))));
                    arr_22 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4 - 2]))));
                    arr_23 [i_4] [i_4] [i_4] [i_7] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_3))) + (((/* implicit */int) arr_18 [i_4]))));
                }
            }
            var_29 = (i_4 % 2 == zero) ? (((unsigned char) ((((/* implicit */int) (_Bool)0)) >> (((arr_12 [(short)15] [i_4 - 2] [i_4]) - (2519966389878140605LL)))))) : (((unsigned char) ((((/* implicit */int) (_Bool)0)) >> (((((arr_12 [(short)15] [i_4 - 2] [i_4]) - (2519966389878140605LL))) - (4666182490244566301LL))))));
        }
        var_30 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)226))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [13U] [i_1] [i_1]))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            arr_29 [i_8] [i_9] = ((/* implicit */short) (((((+(((/* implicit */int) arr_1 [i_8])))) + (2147483647))) >> (((4294967293U) - (4294967292U)))));
            arr_30 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_20 [i_8] [i_8] [i_9]))) != ((~((~(((/* implicit */int) arr_19 [i_8] [i_8] [(signed char)7] [(short)8]))))))));
        }
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) (unsigned short)63241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_14 [i_8])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned char)2])) ? (arr_20 [(short)5] [i_8] [i_8]) : (arr_20 [i_8] [(short)8] [i_8]))))));
        var_32 = min((((((/* implicit */_Bool) min(((unsigned char)2), (((/* implicit */unsigned char) arr_9 [i_8] [(unsigned short)7] [i_8]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-8237)), (var_15)))) : (arr_13 [18ULL] [(unsigned char)8] [18ULL]))), (((/* implicit */long long int) min((((((/* implicit */int) var_16)) / (((/* implicit */int) arr_10 [i_8])))), ((-(((/* implicit */int) (unsigned char)0))))))));
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        var_33 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_12)) * (((/* implicit */int) ((signed char) arr_17 [8LL] [i_10] [(unsigned short)12])))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) (signed char)115))))))) ? (((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_12 [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_31 [i_10]))))));
    }
    var_35 = ((/* implicit */unsigned long long int) var_6);
}
