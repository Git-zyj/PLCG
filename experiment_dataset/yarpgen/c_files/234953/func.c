/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234953
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((1160549682U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0])))));
        var_11 = ((/* implicit */signed char) (~(((1160549682U) % (((/* implicit */unsigned int) -1822021471))))));
    }
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (unsigned short)26148);
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) arr_4 [i_1] [i_1]))) & (((198284628) >> ((((((-2147483647 - 1)) - (-2147483637))) + (32))))))) <= (((/* implicit */int) (signed char)-65))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((3288755630U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) -182769875))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1]))))) | (((((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4] [i_5] [i_4] [i_5])) / (((/* implicit */int) (short)9048)))))))));
                            arr_14 [i_1] [i_1] [i_1] [i_1 - 4] [i_1 - 1] [i_1] = ((unsigned int) ((809527761U) | (1724513292U)));
                            arr_15 [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_3 [i_1])) >> (((arr_9 [(short)15] [(signed char)6] [(short)11] [(short)15] [(signed char)6] [(short)15]) - (787495255U))))));
                            arr_16 [i_5] [i_4] [i_5] &= ((/* implicit */unsigned short) (-2147483647 - 1));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 198284628))));
                        }
                        for (short i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_12 [i_1] [i_1] [(short)6] [i_1] [i_1 - 1] [(signed char)10] [(_Bool)1]))));
                            var_19 = ((/* implicit */unsigned short) arr_9 [1U] [(signed char)14] [i_2] [1U] [i_2] [i_1]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((809527772U) ^ (((/* implicit */unsigned int) -17))))))))));
                            arr_23 [(unsigned short)18] [i_1] [(unsigned short)18] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_4] [i_7 + 1])) / (arr_22 [16U] [i_4] [i_2] [i_1])));
                        }
                        var_21 = ((/* implicit */unsigned short) (-((((-(((/* implicit */int) (signed char)81)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_2 - 1] [i_3] [i_4])) && (((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_4])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */int) (((~(2318635693U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1] [(short)6]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            arr_31 [i_9] [i_8] [i_1] [16U] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (+(arr_22 [i_1] [i_2] [i_2] [i_1])));
                            arr_32 [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */short) ((unsigned short) ((arr_20 [i_1] [i_1] [15] [i_1] [i_1]) ^ (arr_21 [i_1] [i_2]))));
                            arr_33 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) - (((((/* implicit */int) arr_4 [i_8] [i_3])) - (((/* implicit */int) (unsigned char)69))))));
                        }
                    }
                    for (short i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) <= (((2570454004U) * (594633855U))))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_13 [i_1 - 4] [(short)18] [(short)18] [i_1 - 4] [i_1 - 4] [(short)18] [(short)18]))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (~(1549676919U))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)18)) & (((/* implicit */int) (short)13537)))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -888596687)) & (((((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) | (9010920031652292849LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)96))))))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13519))) + (arr_40 [(unsigned short)19] [i_11])))))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 23; i_13 += 4) 
            {
                for (unsigned short i_14 = 2; i_14 < 22; i_14 += 1) 
                {
                    {
                        var_29 = arr_37 [i_12] [i_11];
                        var_30 = (+((~(((/* implicit */int) arr_44 [7U])))));
                        var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_37 [i_11] [i_12])) * (((/* implicit */int) arr_43 [i_11] [i_12])))) <= (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
                    }
                } 
            } 
            arr_49 [i_12] = ((/* implicit */short) arr_37 [i_11] [i_11]);
        }
    }
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((long long int) var_8))) && (((((/* implicit */int) var_3)) >= (-1592177111)))))))));
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (unsigned char)95))));
    var_34 = ((/* implicit */unsigned char) -9010920031652292832LL);
    var_35 = var_1;
}
