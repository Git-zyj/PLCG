/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209771
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (~((-(arr_1 [i_0 + 2])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0 + 1] [(_Bool)1] [i_1] [(short)4] [i_4 - 2] [i_4] = ((/* implicit */short) var_5);
                            var_20 += ((/* implicit */long long int) (!((_Bool)1)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
            {
                arr_17 [i_1] [i_1] [i_5] = ((/* implicit */long long int) 3599263102622063545ULL);
                var_21 = ((/* implicit */_Bool) 3068207680186925675LL);
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3599263102622063551ULL)) ? (14847480971087488071ULL) : (3599263102622063551ULL)))) ? (((((/* implicit */_Bool) (unsigned short)12728)) ? (arr_6 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1358959908))))))));
                arr_18 [(signed char)9] [i_1] [i_5] [i_1] = 528246648716931465ULL;
                arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
            }
        }
        for (int i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            var_23 = ((/* implicit */short) 1143914305352105984LL);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_2 [i_0]))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (72048797944905728LL)))))) ? (((/* implicit */int) (signed char)103)) : (((((/* implicit */_Bool) (short)7680)) ? (2109703915) : (((/* implicit */int) (signed char)-36)))))))));
            var_25 ^= ((/* implicit */long long int) arr_15 [i_0] [i_6] [i_6]);
            var_26 += ((/* implicit */int) (_Bool)0);
        }
        for (signed char i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                var_27 *= ((/* implicit */_Bool) 140737488355327LL);
                var_28 = ((/* implicit */signed char) min((max((((/* implicit */long long int) (unsigned short)47542)), (-140737488355327LL))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_0]))))) ? ((~(1598430391221312258LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)18), (((/* implicit */unsigned short) (_Bool)1))))))))));
            }
            arr_28 [i_0] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (arr_1 [i_7 - 3])))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_7 + 3]), (32766)))) : ((+(18446744073709551584ULL)))));
        }
        for (signed char i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            arr_31 [i_0 - 1] [i_9 + 4] = ((/* implicit */short) ((unsigned short) (-(36028797017915392LL))));
            var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_30 = ((/* implicit */signed char) (unsigned short)127);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        arr_36 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 - 2] [i_10]))))) ? (max((((/* implicit */int) arr_11 [i_0] [i_10])), (536869888))) : (((((/* implicit */_Bool) 1110291398)) ? (((/* implicit */int) arr_11 [i_0] [i_10])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_10]))))));
                        arr_37 [i_0 - 1] [i_10] [i_10] [i_11] = ((/* implicit */signed char) (_Bool)0);
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */signed char) ((var_3) >> (((18014123631575040ULL) - (18014123631575035ULL)))));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 711301918))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 1; i_12 < 18; i_12 += 2) 
        {
            var_33 |= ((/* implicit */long long int) (_Bool)0);
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((4095ULL), (((/* implicit */unsigned long long int) (unsigned char)93))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((9223372036854775808ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        }
    }
    var_35 &= 18446744073709547520ULL;
}
