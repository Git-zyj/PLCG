/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208311
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)31)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)48829);
        var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            arr_12 [i_2] [i_1] [(unsigned char)18] = ((/* implicit */short) 5522038287920583677LL);
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((5522038287920583677LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52880)))))));
                var_14 ^= ((/* implicit */unsigned short) (_Bool)1);
                arr_15 [(short)7] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (unsigned char)150);
                arr_16 [i_2] [i_2] [i_3] [2ULL] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                arr_17 [i_1 + 1] [i_3] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)63)) >> (((-5522038287920583682LL) + (5522038287920583703LL)))));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)168));
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-9371))));
            }
            /* vectorizable */
            for (short i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) (short)11170))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)168)) << (((((/* implicit */int) (unsigned char)148)) - (126)))));
                var_18 = ((/* implicit */unsigned long long int) (short)-10476);
            }
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            arr_31 [i_6] = (-(((/* implicit */int) (unsigned short)3)));
                            arr_32 [i_6] [i_2] [i_6] [i_6] [i_2] [(unsigned char)17] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        }
                        arr_33 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)64307))));
                        arr_34 [i_6] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65532))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_19 = ((long long int) (unsigned short)1229);
                        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                        var_21 = ((/* implicit */unsigned int) -5522038287920583678LL);
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)231))));
        arr_41 [i_1] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-23365)) == (((/* implicit */int) (unsigned short)12529))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 2; i_12 < 19; i_12 += 2) 
            {
                var_23 = ((short) (unsigned char)127);
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    arr_49 [i_13] [i_12] [i_11] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)127))));
                    arr_50 [i_1] [i_1] [i_1] [(unsigned short)11] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)124))));
                    arr_51 [(short)14] [(short)14] [i_11] [(short)14] [i_13] [i_13] = ((/* implicit */short) -4380975322527388261LL);
                    arr_52 [i_1] [i_11] [i_12] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)53007))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                    {
                        arr_55 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)55))));
                        arr_56 [i_11] = ((/* implicit */signed char) (-(3298412162974862245ULL)));
                        arr_57 [i_1] [i_11] [i_12] [12] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)11180))))) & (((unsigned int) (unsigned short)65522))));
                    }
                    for (signed char i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        arr_61 [i_15] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)17))));
                        arr_62 [i_1] [i_1] [i_1] [18U] [18U] [18U] [i_15] = ((/* implicit */long long int) (!((_Bool)0)));
                        arr_63 [i_1 - 1] [i_11] [i_1 - 1] [i_15] [i_15 + 1] [i_1] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)95))));
                    }
                }
                for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    arr_66 [i_1] [i_11] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372034707292160LL)) && (((/* implicit */_Bool) (short)-11171))));
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65530))));
                }
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    arr_71 [i_17] [i_1] [i_11] [i_1] = ((/* implicit */signed char) ((unsigned char) (unsigned char)95));
                    arr_72 [(short)13] [(unsigned short)9] [(unsigned short)9] &= ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 4; i_18 < 18; i_18 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) (+(64512ULL)));
                        arr_77 [i_1] [i_17] [i_18] [i_17] [i_18] [i_12] [i_18] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    arr_78 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33))));
                    /* LoopSeq 2 */
                    for (short i_19 = 1; i_19 < 19; i_19 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65532))));
                        arr_83 [i_17] [i_17] [i_12 + 1] [i_11] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)2))));
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-15171))));
                    }
                    for (short i_20 = 1; i_20 < 19; i_20 += 4) /* same iter space */
                    {
                        arr_86 [i_1] [i_1] [(unsigned char)4] [i_1] [i_20] = ((/* implicit */signed char) (+(-213389479051828587LL)));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)53007))));
                        arr_87 [i_20] [i_11] [i_20] [i_20] [19ULL] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95))));
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)127));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_21 = 2; i_21 < 18; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)95)) != (((/* implicit */int) (unsigned char)150))));
                            arr_94 [i_11] [i_21] [i_12] [i_11] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65532))));
                            arr_95 [2LL] [(short)17] [(signed char)18] [i_12] = ((/* implicit */signed char) (short)11175);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    for (unsigned int i_24 = 3; i_24 < 16; i_24 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (signed char)-71))));
                            arr_100 [i_23] [i_11] [i_12] [7LL] [(unsigned short)13] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)12))));
                            arr_101 [i_24] [i_23] [(short)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)128))));
                        }
                    } 
                } 
                var_33 = (~((-(-1421761446))));
            }
            for (long long int i_25 = 2; i_25 < 17; i_25 += 2) 
            {
                arr_105 [i_1 + 1] [i_11] [i_1 + 1] = (short)-15908;
                var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)13847))));
            }
            arr_106 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)108)) == ((-(((/* implicit */int) (unsigned char)238))))));
        }
        for (unsigned short i_26 = 3; i_26 < 17; i_26 += 1) 
        {
            arr_110 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (short)11639)) < (((/* implicit */int) (short)-6231))));
            arr_111 [i_1] = ((/* implicit */signed char) (unsigned char)251);
        }
    }
}
