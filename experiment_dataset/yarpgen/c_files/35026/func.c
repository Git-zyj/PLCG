/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35026
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) arr_1 [6LL]))))), (var_1))));
        var_12 -= ((/* implicit */unsigned int) min((((_Bool) var_0)), (((((arr_1 [(short)10]) ? (var_6) : (var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(signed char)9] [(unsigned char)15]))))) ^ (var_5)));
                arr_8 [(signed char)4] [(signed char)2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)199))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((unsigned int) var_9)))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((arr_11 [i_3 + 1] [(signed char)8] [(_Bool)1] [8LL] [(signed char)15] [(_Bool)1]) ^ (arr_11 [i_3 + 1] [(signed char)3] [13U] [(_Bool)1] [6LL] [11LL])));
                            var_16 = ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_17 *= ((/* implicit */unsigned long long int) 54430500U);
                var_18 = ((/* implicit */long long int) ((unsigned int) ((signed char) ((unsigned int) arr_5 [(unsigned char)10] [(unsigned char)2] [2U]))));
                arr_17 [7U] [i_5] [1LL] [(unsigned char)11] = ((/* implicit */unsigned int) arr_7 [13LL] [4LL]);
            }
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)78)) ^ (((/* implicit */int) var_0))))))) ^ (((var_7) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [(signed char)15])))))))))));
                        var_20 = ((/* implicit */unsigned char) ((((long long int) arr_22 [(unsigned char)0] [4ULL] [(unsigned char)5] [(signed char)1] [0ULL] [i_7])) * (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                        var_21 -= ((/* implicit */signed char) (+(4294967293U)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        arr_32 [(_Bool)1] [i_8] [(signed char)5] [3U] [15U] = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)181)), ((short)-27470)))) - (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_9)) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)73), (((/* implicit */signed char) arr_24 [(unsigned char)9] [6U] [(signed char)12] [12U]))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 15; i_10 += 4) 
                        {
                            arr_36 [(signed char)11] [5U] [(short)3] [i_8] = ((((((/* implicit */_Bool) (short)-26)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))) ^ (((/* implicit */unsigned long long int) arr_18 [(signed char)5] [(unsigned char)1] [(short)9] [(signed char)3])));
                            var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_13 [4ULL] [5U] [8U] [(signed char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(short)11]))) : (var_6))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27470)) * (((/* implicit */int) (short)32767)))))));
                            arr_37 [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_10 + 1]))));
                            var_24 = ((/* implicit */unsigned char) ((signed char) 2187665809U));
                        }
                        for (unsigned int i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) arr_20 [(unsigned char)1] [3LL]);
                            var_26 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_9)), (((unsigned int) 2349534704U))))));
                            arr_41 [(signed char)4] [(signed char)3] [(unsigned char)8] [i_8] = ((/* implicit */long long int) (~(((arr_25 [9ULL] [14U] [11U] [(short)1]) ? (((/* implicit */int) arr_40 [(unsigned char)15] [(unsigned char)4] [1U] [3LL] [i_8] [i_11 - 2])) : (((/* implicit */int) ((short) arr_27 [(unsigned char)4] [14ULL] [7LL] [(unsigned char)14])))))));
                        }
                        var_27 -= ((/* implicit */unsigned long long int) var_8);
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned char)10] [9LL] [i_8] [(short)4] [(signed char)6]))) > (((unsigned long long int) arr_40 [0U] [(signed char)8] [2U] [(unsigned char)0] [i_9] [(signed char)10]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) max((var_0), ((short)23395))))));
            arr_42 [7U] [15LL] = ((/* implicit */unsigned char) ((long long int) var_2));
        }
    }
    var_30 = min((max((((/* implicit */unsigned int) var_9)), (2985281102U))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)65)) > (((/* implicit */int) var_0)))))));
    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) ^ (13536842824122234456ULL))) : (((/* implicit */unsigned long long int) 2107301507U)))) : (((/* implicit */unsigned long long int) min((var_7), (((((/* implicit */long long int) var_6)) & (var_7)))))))))));
}
