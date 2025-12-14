/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216077
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 1] [15LL] = ((/* implicit */signed char) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [3LL])))))))) & ((-(((/* implicit */int) var_7))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                            var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21)) ^ (((/* implicit */int) arr_9 [i_3]))))) ? (((1718207277U) << (((((((/* implicit */_Bool) arr_10 [i_0] [2LL] [4ULL] [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (arr_6 [i_0] [i_1] [(short)2] [i_3]))) - (23U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_14 += ((((/* implicit */_Bool) min((min((arr_7 [19U] [(unsigned short)9] [i_1] [(short)19]), (((/* implicit */long long int) (unsigned char)39)))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_3)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [14U])))) << ((((+(arr_1 [i_0] [i_1]))) + (9158733467108398599LL)))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_16 [(signed char)2] [(signed char)11] [i_1] [i_0]), (((/* implicit */unsigned int) arr_4 [17U] [i_4] [i_4]))))) ? (arr_8 [i_5] [i_4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) 4074546901056739520ULL)))) || (((/* implicit */_Bool) (unsigned char)217))))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (max((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (arr_6 [(unsigned char)14] [(unsigned char)14] [11LL] [11LL]))))))), (min((((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (arr_1 [i_0] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [12U])) & (((/* implicit */int) arr_9 [i_5])))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) -1245456708);
                                var_17 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (var_0))) * (((/* implicit */long long int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) (+((+(-717362246601646336LL)))));
                                arr_36 [(_Bool)1] [(_Bool)1] [15] [(short)1] [(_Bool)1] = ((/* implicit */short) (unsigned char)199);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) arr_32 [i_8] [i_0] [i_1] [i_0] [i_0]);
                }
                for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (arr_31 [4U] [i_11] [i_11 + 1] [i_11 + 1])))) ? (((/* implicit */unsigned int) (-((-(-239549864)))))) : (((var_9) | (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)112)))))))));
                    var_21 -= ((/* implicit */unsigned char) ((arr_32 [i_0] [14] [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [(_Bool)0] [(signed char)15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [(signed char)0] [0U]))))) ? ((-(((/* implicit */int) arr_3 [(unsigned char)11] [(unsigned char)11])))) : (((((/* implicit */int) (unsigned short)42418)) << (((((/* implicit */int) (unsigned char)217)) - (203))))))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) (unsigned char)37)) : (((((/* implicit */_Bool) (short)10943)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned short)16128))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_22 -= ((/* implicit */unsigned short) 900873096);
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_9 [i_1])))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) arr_9 [i_0]))))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        var_24 = ((/* implicit */short) min((var_24), (arr_41 [14])));
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_13])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (signed char)-115)))) << (((((/* implicit */int) (signed char)-35)) + (45)))));
        arr_45 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_13])) < (((/* implicit */int) (signed char)119))))) > (((/* implicit */int) arr_17 [i_13] [(unsigned short)16] [i_13] [i_13]))))) * (((((/* implicit */_Bool) ((4294967290U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (arr_2 [14])))) : ((-(((/* implicit */int) var_5))))))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(min((arr_23 [(short)12]), (((/* implicit */long long int) var_12)))))))));
    }
    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        arr_48 [(signed char)4] [8] = (signed char)97;
        arr_49 [(unsigned short)12] [(short)6] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(signed char)2] [i_14] [(short)7] [(signed char)2] [(signed char)2] [(signed char)2]))) >= (((((/* implicit */_Bool) arr_30 [(_Bool)1] [4LL] [i_14] [(unsigned short)12] [(unsigned char)1])) ? (((/* implicit */unsigned int) arr_47 [2ULL])) : (arr_16 [i_14] [i_14] [i_14] [i_14]))))) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned short)35653))))))) : (2076306780447066410ULL)));
        arr_50 [15LL] [13LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_14] [i_14] [i_14] [(signed char)18]) * (arr_16 [i_14] [13] [13] [i_14])))) ? (((((/* implicit */_Bool) 7636490550751227047ULL)) ? (arr_46 [i_14]) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)127))))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)69))))) | (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) 1390343239U)) : (arr_29 [i_14] [i_14] [8] [i_14])))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 1) 
        {
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                {
                    arr_59 [(_Bool)1] [i_16] [(_Bool)1] = ((/* implicit */short) arr_34 [i_15] [18U] [i_15] [(_Bool)1] [(unsigned char)11] [i_16 + 1] [9LL]);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (signed char)-44))));
                    arr_60 [i_15] [(short)18] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
                    arr_61 [0] [(_Bool)1] [i_15] = (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)48)) / (((/* implicit */int) var_12))))), (((arr_51 [(unsigned short)19] [6]) + (((/* implicit */unsigned int) 1022)))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((var_12) ? (0ULL) : (((/* implicit */unsigned long long int) -3230481313667893783LL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)41187))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
}
