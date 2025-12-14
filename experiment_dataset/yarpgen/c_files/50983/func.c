/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50983
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
    var_10 ^= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (((((-10) + (2147483647))) << (((((/* implicit */int) var_2)) - (26730)))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) 1998577232)) : (-7674724947472006011LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 5U))) ? (((((/* implicit */_Bool) (short)-10554)) ? ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) 809205805U)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)65523)) + (((/* implicit */int) (_Bool)0)))))) ? (((arr_4 [i_1]) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_0)))) : (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (short)224)))))) : (((/* implicit */int) min((arr_8 [i_3 - 2] [i_0] [i_2 - 3]), (arr_8 [i_3 + 1] [i_3] [i_2 - 1]))))));
                            var_13 *= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3 + 2] [(unsigned char)1])) * (((/* implicit */int) (unsigned short)15032)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            arr_17 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
            arr_18 [i_0] = ((/* implicit */short) ((unsigned char) max((7028111545712432665LL), (((/* implicit */long long int) (unsigned short)50511)))));
            arr_19 [(unsigned char)9] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)117))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_15 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_10 [(unsigned char)14])) / (((/* implicit */int) arr_12 [i_0] [i_0] [2U] [i_0] [i_6] [i_6]))))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 3; i_7 < 18; i_7 += 4) 
            {
                arr_25 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4475857331597793339LL)) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_7 - 2])) : (((/* implicit */int) (short)21019)))))));
                var_16 *= ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_12 [i_7 - 3] [(signed char)8] [4U] [i_7 + 2] [i_7 + 2] [i_7])) << (((16777215) - (16777215))))));
                arr_26 [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_6] [i_0]))) / (var_5))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)17)) + (((/* implicit */int) (_Bool)1))));
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4229026512663442071ULL)) ? (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 2059429911)) ? (((/* implicit */int) (unsigned short)21151)) : (((/* implicit */int) arr_5 [8LL] [8LL])))))) : (((/* implicit */int) (_Bool)0))));
                            arr_35 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((3914549867U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)23661)))))) >> (max((((((/* implicit */int) arr_9 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_8 [i_0] [i_6] [13U]))))));
                            arr_36 [i_0] [i_6] [i_8] [(_Bool)1] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 255U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)126))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)22861)))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((8328838435885043442ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_10 - 1] [i_8] [i_6]))))))))));
                        }
                    } 
                } 
                arr_37 [i_0] [(unsigned char)0] |= arr_24 [i_0] [i_6] [i_0] [i_8];
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_20 [i_6] [(short)4])))) * (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_20 [i_0] [i_8])))))))));
            }
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) (((+(max((12744657594854160005ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) % (((/* implicit */unsigned long long int) max((max((arr_14 [i_0] [2U] [i_0]), (((/* implicit */long long int) arr_34 [i_0] [i_0] [i_11] [i_11] [i_0] [i_11])))), (((/* implicit */long long int) ((unsigned char) 17862811481818034404ULL))))))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (_Bool)1))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_7)))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_52 [i_0] [i_13] [i_15] [i_0] = ((/* implicit */unsigned long long int) (short)-16265);
                                arr_53 [i_16] [i_15] [i_16] [i_16] [(short)12] [i_0] |= ((/* implicit */short) var_0);
                                arr_54 [(unsigned char)10] [i_0] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-32764)))), ((+(((((/* implicit */int) (unsigned short)40689)) % (((/* implicit */int) arr_8 [i_16] [7U] [i_14]))))))));
                                var_24 += ((/* implicit */signed char) arr_15 [i_13] [i_13] [i_16]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15032)) && ((_Bool)1)))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [8U] [i_13])) ? (5519417811516258017LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50510)))))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((max((((/* implicit */long long int) (unsigned short)38458)), (-7936567079827564517LL))) >= (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_14] [i_18]), (((/* implicit */short) arr_8 [i_17] [i_13] [i_0]))))))))));
                                arr_62 [i_0] [i_13] [i_14] [i_17] [i_18] [i_18] [i_18] |= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)49229))) ? (((/* implicit */int) max(((unsigned short)50502), (((/* implicit */unsigned short) (short)32753))))) : (((/* implicit */int) arr_43 [i_0] [i_13] [i_0]))))) : ((((_Bool)1) ? (3851471025U) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)0))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 18; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 20; i_20 += 2) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned char) ((long long int) ((max((((/* implicit */long long int) (_Bool)1)), (-256699660723700504LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_13] [i_13])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_70 [i_20] [i_13] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)30182))));
                                var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) 15767746243730040382ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30182))) : (0LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = max(((unsigned short)53451), ((unsigned short)4));
    }
    /* vectorizable */
    for (short i_21 = 4; i_21 < 22; i_21 += 4) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((_Bool) arr_72 [i_21 - 4] [i_21 - 4])))));
        var_31 = ((/* implicit */_Bool) ((unsigned long long int) arr_72 [i_21 - 1] [i_21 - 4]));
        arr_73 [i_21] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)7)) >= (arr_71 [i_21] [i_21]))));
    }
}
