/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30472
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-3425574296208718623LL) : (-3040715469953201793LL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_3] [10U] [i_3] [13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (arr_1 [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_3] [i_3 - 1] [i_3 - 2])))))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_3] [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18198898112147840257ULL), (((/* implicit */unsigned long long int) 7006226632780797422LL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)16] [i_4] [i_4] [i_4] [i_4] [1U] [12LL])) ? (((/* implicit */int) (unsigned short)17470)) : (((/* implicit */int) arr_2 [i_1] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (247845961561711359ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23417))) == (var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    arr_15 [8U] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((14147075406135357840ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42106))))))))) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((unsigned int) 18198898112147840269ULL))) : (((((/* implicit */_Bool) 13776729065666783464ULL)) ? (-118246548219765063LL) : (var_12))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_0 [i_2] [i_0]) : (((/* implicit */int) ((unsigned short) 9223372036854775799LL))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((unsigned int) var_9)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (unsigned int i_6 = 4; i_6 < 21; i_6 += 3) 
        {
            {
                var_16 &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -187157325))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))) : (var_12))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) 3098753496U))) >= (((((/* implicit */_Bool) (unsigned short)10924)) ? (18198898112147840245ULL) : (7146350422250672178ULL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            arr_28 [i_6] [20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_20 [(unsigned short)9]))) ? (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9 - 1] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17611))) : (3311384980U))))));
                            var_18 = arr_20 [6ULL];
                        }
                        var_19 = ((/* implicit */long long int) 2327438867U);
                    }
                    arr_29 [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) 16135686603046664017ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14362))) : (14412037262393610771ULL))), (((/* implicit */unsigned long long int) arr_24 [i_7 - 1] [(unsigned short)8] [(unsigned short)6] [i_6 - 3] [(unsigned short)1] [i_5]))))));
                }
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        arr_35 [i_5] [i_6] [i_10 - 1] [i_11] [i_6 + 3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)170)) || (((/* implicit */_Bool) 5577487480160583554LL)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6]))))))) : (((/* implicit */int) ((unsigned char) var_2)))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), ((-(2575331223U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        arr_38 [14U] [i_6] [i_12] = ((/* implicit */unsigned char) 69964974);
                        /* LoopSeq 3 */
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [21U])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10926))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1947878741)) ? (arr_39 [(unsigned char)16] [i_13] [i_10] [i_13] [18U]) : (var_12)))))))));
                            arr_42 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_10 + 2] [i_10] [i_6 - 4] [i_6 - 2] [i_6 - 3] [i_5])) ? (var_11) : (var_3)));
                        }
                        for (int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                        {
                            arr_46 [3U] [i_12] [i_6] [i_6] [i_5] = ((((/* implicit */_Bool) arr_33 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((unsigned long long int) (signed char)70)));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33336))) - (1506184078U))))));
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) >= (((long long int) 247845961561711334ULL))));
                        }
                        for (unsigned int i_15 = 3; i_15 < 23; i_15 += 1) 
                        {
                            var_24 += 0LL;
                            arr_49 [i_6] [i_10 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) <= (3180267822523606870LL)));
                        }
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_5] [0ULL])))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 18198898112147840268ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (16333530212634637708ULL)));
                    }
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((long long int) 13891245453546754025ULL)))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)33336))))))) : (max((((/* implicit */long long int) -2001502145)), (-8036963827964861220LL)))));
                        var_28 = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        arr_55 [21] [i_6] [i_10 - 1] [9ULL] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2558084421704023059LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (((unsigned short) var_10))))))));
                        arr_56 [(signed char)22] [4] [20U] [i_17] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_2) + (((/* implicit */unsigned long long int) var_4)))), ((~(var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_21 [20] [22ULL] [22ULL] [10LL]))))) ? (((/* implicit */int) arr_41 [(unsigned char)14])) : (-1947878742)))) : (max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) -1947878741))))), (min((((/* implicit */long long int) arr_45 [i_5] [i_5] [i_6] [i_10 + 1] [i_17])), (-8247049442052871700LL)))))));
                        var_29 = ((/* implicit */unsigned long long int) (unsigned short)19292);
                        var_30 ^= ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_17 [i_5]), (arr_53 [i_17] [6U] [i_6] [6U] [20LL])))) ? ((+(arr_34 [i_17] [i_10 + 1] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)47805), ((unsigned short)22755))))))) & ((~(var_4)))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_25 [i_6 - 1] [i_6] [i_6 - 2] [(unsigned short)11] [i_6] [i_10 - 1]) / (arr_43 [i_6 + 1]))))));
                    var_32 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -1490105080560060356LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_37 [i_10 - 1] [7ULL] [i_6 - 3] [i_5] [12U]))))));
                    arr_57 [i_10 + 2] [i_6] [i_6] [i_5] = ((/* implicit */signed char) 3575362349U);
                }
                var_33 = ((/* implicit */int) ((unsigned char) arr_36 [14ULL] [18LL] [i_6] [i_6 - 2] [i_6]));
            }
        } 
    } 
}
