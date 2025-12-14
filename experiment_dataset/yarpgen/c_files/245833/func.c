/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245833
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
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0 + 2]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-62)) % (((/* implicit */int) (signed char)62))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [11U]))) : (174514577U))))));
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_1 - 1]), (((/* implicit */long long int) (short)(-32767 - 1))))))));
            var_15 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))));
            var_16 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 4; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) != (arr_2 [i_0] [i_2 - 2])))) >> (((min((var_0), (((/* implicit */unsigned int) var_9)))) - (64987U)))))) > (max((((((/* implicit */_Bool) arr_1 [20ULL])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)67)))))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 - 3])) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
            var_17 = ((/* implicit */unsigned int) ((min((arr_0 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned long long int) var_4)))) % (((((/* implicit */_Bool) (unsigned short)1045)) ? (((((/* implicit */_Bool) (signed char)87)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)6]))))) : (arr_1 [i_2 - 2])))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(var_10)))))) || (((/* implicit */_Bool) max((arr_1 [i_0 - 2]), (((((/* implicit */_Bool) 2608924367016502597LL)) ? (arr_0 [i_0] [i_0]) : (arr_1 [10LL]))))))));
        var_18 += ((/* implicit */unsigned long long int) (signed char)3);
        arr_11 [(short)3] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 3]))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-62)) & (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_4] [i_5]))));
                    var_20 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_13 [(unsigned char)9] [i_3])))), (((/* implicit */int) ((arr_19 [1U]) == (((/* implicit */long long int) 1353813793U)))))))), (var_10)));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_25 [22ULL] [21LL] [i_5] [0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-4)), (0U))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~((-(13980445457524406808ULL))))))));
                                var_22 = ((/* implicit */unsigned long long int) arr_4 [i_3]);
                            }
                        } 
                    } 
                    arr_26 [(_Bool)1] [i_4] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] [i_5]) < (((/* implicit */long long int) max((((/* implicit */unsigned int) 67108864)), (var_4)))))))) <= ((~(((0ULL) ^ (((/* implicit */unsigned long long int) var_8))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_19 [i_3]);
                        arr_30 [i_4] [i_8] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) arr_29 [i_3] [5U] [i_3] [i_3])) + (((/* implicit */int) arr_7 [i_5] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_8]) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_21 [i_3] [i_8] [12ULL] [(_Bool)1] [i_3])), (var_0)))))))) : (min((arr_6 [i_4] [i_5]), (arr_6 [i_4] [i_8])))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                {
                    var_24 ^= ((/* implicit */long long int) (-(4ULL)));
                    arr_34 [i_4] |= ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))))), (min((((/* implicit */int) arr_7 [i_4] [8])), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_29 [i_3] [i_3] [12] [i_3])) : (var_2)))))));
                    arr_35 [i_3] [i_9] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)508))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                {
                    arr_39 [i_10] = ((/* implicit */long long int) (signed char)90);
                    var_25 = ((/* implicit */signed char) (((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_10]))) + (arr_14 [i_3]))))) - (((((/* implicit */_Bool) min(((unsigned short)25761), (((/* implicit */unsigned short) (unsigned char)71))))) ? (((/* implicit */unsigned int) arr_16 [i_4] [i_10])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4]))) + (arr_14 [i_4])))))));
                    var_26 = ((/* implicit */long long int) var_8);
                    arr_40 [(unsigned short)8] [(unsigned short)8] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((long long int) arr_20 [i_4]))) ? (((unsigned long long int) arr_28 [i_3] [i_4] [i_10])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)513)) ? (arr_19 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8192))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            arr_46 [i_10] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((7686262650828091291LL) > (((/* implicit */long long int) arr_37 [i_12] [i_4])))))))) : (arr_24 [i_3] [i_3] [i_11 - 1] [i_12 + 3] [i_3] [i_12] [i_3])));
                            arr_47 [i_10] [i_4] [i_10] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (0ULL)))) : (((/* implicit */int) var_9))))));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_4] [i_10] [(signed char)22] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-117)) ? (((((/* implicit */_Bool) min((1265981448U), (((/* implicit */unsigned int) arr_16 [18] [18]))))) ? (((/* implicit */long long int) var_7)) : (arr_2 [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65028)))));
                            var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)9717)), (((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))) ? (max((((/* implicit */unsigned long long int) arr_31 [i_3] [8U] [i_3] [i_11])), (((((/* implicit */_Bool) (unsigned short)65056)) ? (9939823265384599962ULL) : (17734568652953577212ULL))))) : (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */int) arr_23 [(short)22] [(short)22] [i_10] [i_10] [i_11 - 1])))))));
                        }
                        arr_51 [i_3] [19] [i_10] [i_11] [i_11] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)507))) % (-1LL))), (((/* implicit */long long int) ((arr_15 [i_11 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11 + 2]))) : (var_4))))));
                    }
                }
                arr_52 [i_4] = ((/* implicit */unsigned long long int) ((short) ((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51589))))) >> (((((var_4) ^ (((/* implicit */unsigned int) 754026073)))) - (1286385267U))))));
            }
        } 
    } 
    var_28 |= ((/* implicit */long long int) (~(min(((+(var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
}
