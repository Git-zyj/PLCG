/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212948
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_3 + 1]))) ? (((((/* implicit */int) arr_2 [i_0 + 2])) ^ (((/* implicit */int) (signed char)6)))) : (((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((((/* implicit */int) (signed char)-10)) + (23)))))));
                            arr_12 [(signed char)6] [(signed char)6] [i_3] [(signed char)6] [i_1] [i_1] = ((/* implicit */long long int) ((short) (+((~(((/* implicit */int) (signed char)-104)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_8);
                                arr_22 [i_4] [i_1] [i_4] = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))) ? (arr_1 [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_8 [11] [i_0] [i_4] [i_0 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_39 [i_7] [i_7 - 2] [i_8] [i_8] [i_7] [i_11] = ((/* implicit */unsigned long long int) arr_29 [i_7 + 2] [i_7 + 2] [i_7] [i_7 - 2]);
                                var_18 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 2])) || (((/* implicit */_Bool) arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 3] [i_7 - 3])))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_1)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_31 [i_7] [i_8] [i_7] [i_7])))))))) | (18446744073709551602ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (signed char)-6);
                                arr_46 [i_7] = ((/* implicit */signed char) (short)-25092);
                                arr_47 [i_7] [i_8] [i_7] [16] [i_13] = ((/* implicit */short) ((arr_25 [i_13] [i_8]) + (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1)))))));
                                var_21 = ((/* implicit */unsigned short) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned short) arr_44 [i_15] [i_15 - 1] [i_15 - 1] [i_15] [i_14]));
                                arr_52 [i_7] [(short)0] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7 + 1] [i_7] [(short)11] [i_7] [i_7 + 2] [i_15 - 2])) ? (min((517279585), (arr_41 [i_7] [i_7] [i_7] [i_7 + 2] [i_7 - 3] [i_7 - 1]))) : (min((((/* implicit */int) (unsigned short)28623)), (arr_37 [i_7])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (arr_51 [i_7 + 2])))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)0))))) : (arr_42 [i_15 + 2] [i_7] [14ULL] [i_7] [i_7] [i_7])))) : (var_13)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 14; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(var_15))), (((/* implicit */unsigned long long int) 2080374784U))))) ? (((((/* implicit */_Bool) -4389133827457587552LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6)))) : ((~(((/* implicit */int) min((arr_43 [i_7] [i_7]), (((/* implicit */short) (_Bool)1)))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)16088)))))))));
                                arr_57 [i_7] [i_16 + 1] [i_16] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)3)) && (((/* implicit */_Bool) (unsigned short)37164))))) : (((int) max((var_1), (((/* implicit */unsigned char) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (long long int i_21 = 1; i_21 < 23; i_21 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */short) ((67108608LL) == (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37163))) : (8083124044958890493LL)))))), (min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_10)) <= (var_7)))), ((short)-24595))))))));
                            var_26 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((12170563163121809738ULL), (((/* implicit */unsigned long long int) arr_59 [i_19])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) >= (var_4));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    for (short i_23 = 2; i_23 < 22; i_23 += 4) 
                    {
                        for (int i_24 = 4; i_24 < 24; i_24 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) (~(arr_76 [i_23] [i_23] [i_23] [i_23] [i_23 + 3] [i_23] [i_23])));
                                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6))))))) < (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) ^ (arr_65 [i_22])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
