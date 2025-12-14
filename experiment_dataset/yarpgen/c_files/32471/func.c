/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32471
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [(unsigned char)16] [(unsigned short)1] [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)56550)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned short)8960))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)8986), ((unsigned short)8986))))) ^ (arr_4 [i_2] [12ULL])));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11))))) % (((/* implicit */int) (unsigned char)11))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_3] [i_0] [5LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_4]))));
                                var_14 = ((/* implicit */unsigned char) arr_1 [i_4 + 2]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)8973)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])) ? (arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */unsigned int) var_11)), (arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))) : (min((arr_23 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_23 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7])))));
                            /* LoopSeq 2 */
                            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                            {
                                var_17 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */int) (signed char)-123)), (arr_15 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [(_Bool)1] [i_7 + 1])))));
                                var_18 += (signed char)108;
                                var_19 = ((((/* implicit */_Bool) arr_10 [i_7 - 1])) ? ((~(((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) max((arr_10 [i_7 + 1]), (arr_10 [i_7 - 1])))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_28 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((2861326089U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) * (((/* implicit */int) var_1))))) ? (arr_22 [i_9] [i_9] [i_9] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6])))))));
                                var_20 -= min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (-8718165713196064922LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) (!(var_2)))))))), ((unsigned char)0));
                            }
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))) : ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) != (max((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)49)), ((unsigned short)9006)))), ((+(3778071506150670958LL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_22 = ((/* implicit */signed char) (-(((var_2) ? (arr_29 [i_10] [i_10]) : (((/* implicit */int) (signed char)94))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min(((unsigned char)76), (((unsigned char) (signed char)90))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned char) (signed char)-123)), ((unsigned char)153))));
                                var_25 = ((((/* implicit */_Bool) (~(arr_29 [i_10] [i_11])))) ? ((~(((/* implicit */int) ((unsigned char) arr_40 [i_10] [i_11] [(_Bool)1] [i_13] [i_14]))))) : ((~((((_Bool)1) ? (-1480729324) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_10] [i_10] = ((/* implicit */int) ((signed char) (+((+(((/* implicit */int) (signed char)82)))))));
        var_26 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)204))))) != ((((_Bool)1) ? (17353558136195515777ULL) : (0ULL)))));
    }
}
