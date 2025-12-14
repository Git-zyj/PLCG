/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51950
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [(_Bool)1] |= ((/* implicit */unsigned short) 1451490489828863470LL);
        var_14 = ((/* implicit */unsigned long long int) min((((unsigned int) min((1413470569), (1210295021)))), (min((max((2256297664U), (((/* implicit */unsigned int) (signed char)124)))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)15413)), (((((/* implicit */_Bool) 2038669615U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11078))) : (arr_3 [(signed char)3] [i_3])))) != (min((((/* implicit */unsigned long long int) (unsigned char)3)), (17808813265792212811ULL))))))) : ((-(min((11656646507321235535ULL), (17808813265792212837ULL)))))));
                        var_16 = ((/* implicit */unsigned long long int) (~(-1413470570)));
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)165))))), (max((((/* implicit */unsigned long long int) (short)32767)), (15063533884441892674ULL)))))) && (((/* implicit */_Bool) ((unsigned long long int) (+(var_6)))))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)2297)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)186))) != (var_11)))))) || (((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_5)))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned short) (signed char)127))))), (((18446744073709551602ULL) >> (((7357463917573720278LL) - (7357463917573720255LL)))))))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) / (((/* implicit */int) ((unsigned short) 2305843009213693951ULL)))));
                        arr_20 [i_1] [i_5] [i_6] [i_5] [i_7 + 1] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((25243687798531452ULL) >> (((1413470568) - (1413470553)))))) && (((/* implicit */_Bool) (unsigned char)8))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)15)) << (((1210295035) - (1210295009))))) >= (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5 - 2] [i_8 - 2] [i_5 - 2])) >= (var_5))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max(((~(max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (short)-32759)))))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_13)))))))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_27 [i_1] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */int) var_0);
                        var_23 ^= (+((-((~(((/* implicit */int) arr_16 [i_1] [i_1] [i_6])))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) var_7);
                    var_25 = ((/* implicit */short) ((unsigned long long int) min((var_1), (var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) -1413470571))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) var_4)), (9209426183067863647ULL))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-32740)) || (((/* implicit */_Bool) (short)127))))))))));
                                var_27 = ((/* implicit */unsigned char) min(((+(var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (arr_23 [i_10 - 2] [i_5 + 1]))))));
                                var_28 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)32758)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((unsigned long long int) 3205282297583717217LL))))));
                            }
                        } 
                    } 
                    var_29 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((((/* implicit */int) (short)29159)) != (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) ((721895943619057693ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15677))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        var_30 = ((13ULL) & ((-(var_6))));
        var_31 &= ((/* implicit */short) ((arr_32 [(unsigned char)9]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_9)))) == (((0LL) << (((-7572043868364094394LL) + (7572043868364094455LL)))))));
        arr_34 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9209426183067863634ULL)) ? (2709586056579101588LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 9954677494859094112ULL))))));
    }
    var_33 |= min((((/* implicit */unsigned long long int) ((((((int) 17724848130090493942ULL)) + (2147483647))) << (((((/* implicit */int) var_4)) - (41249)))))), (min((var_11), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) var_7))))))));
    var_34 ^= ((/* implicit */short) var_0);
    var_35 = ((/* implicit */unsigned long long int) (short)5894);
}
