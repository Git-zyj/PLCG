/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198041
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned int) ((unsigned short) (((+(var_4))) % (((/* implicit */long long int) (~(var_0)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            var_11 += ((/* implicit */unsigned int) min((1451917442), (((/* implicit */int) ((unsigned short) (unsigned short)12316)))));
                            var_12 ^= ((/* implicit */unsigned char) max(((signed char)98), ((signed char)-46)));
                            arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) -20);
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_13 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_0] [(signed char)15] [i_0] [i_0])) <= (((((/* implicit */_Bool) arr_8 [6])) ? (((/* implicit */int) arr_5 [4U] [i_2] [i_2] [21LL])) : (((/* implicit */int) arr_5 [i_3] [i_2 + 1] [14U] [i_0]))))));
                            var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-5110611785621924341LL) : (-5110611785621924345LL))), (((/* implicit */long long int) var_9))));
                            arr_16 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [(signed char)10] [(signed char)10] [i_2 + 1] [i_2 + 3] [i_2])) ? (arr_11 [i_0] [i_2] [i_2 + 1] [i_2 + 3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (max((var_7), (((/* implicit */long long int) (-(arr_4 [i_0]))))))));
                            arr_17 [i_5] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_5)));
                            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((int) ((_Bool) var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_2)))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) max((var_8), (arr_8 [i_6]))))) ^ (arr_11 [3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_0])))));
                        var_17 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 3] [i_2 + 3] [i_2 + 1])) + (var_3))) + (((arr_14 [i_2 + 2] [i_6] [i_6] [i_6] [9]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_8] [i_8] = ((/* implicit */unsigned int) ((int) arr_14 [(_Bool)1] [i_1] [i_2] [i_7] [i_8]));
                            arr_26 [i_8] [i_7] [i_7] [i_2 + 2] [i_2 - 1] [i_0] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_8] [i_0] [i_8] [i_7])) ? (var_9) : (var_0))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_6))))));
                            var_18 = var_0;
                            var_19 = ((/* implicit */_Bool) var_8);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_20 += ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)255)), (7736060043649969275LL)));
                            arr_29 [(unsigned char)5] [i_7] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) + (max((((/* implicit */long long int) (_Bool)1)), (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)51137))))))) : (((/* implicit */int) max((((unsigned char) arr_18 [i_0] [i_1] [14] [i_2 + 1] [i_7] [14])), (((unsigned char) var_5)))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_8))));
                            var_22 += ((/* implicit */_Bool) var_7);
                            var_23 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_2])) % (((/* implicit */int) arr_30 [i_10 + 1] [i_10 + 1] [i_2 + 3] [i_7])))), (var_9)));
                        }
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            arr_35 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_2 + 3] [i_2] [i_2] [i_2 + 1])), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_19 [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 + 1]))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_27 [i_7]))) / (((((/* implicit */_Bool) var_3)) ? (4572552244068302338LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                            arr_36 [i_0] [i_1] [i_2] [i_7] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1])) ? (((/* implicit */long long int) 2010734350U)) : (var_7)))) && (((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned long long int) (-(var_0)))), (((arr_7 [i_0] [i_1] [i_2] [(unsigned char)14]) >> (((arr_28 [i_7]) - (4649002022223676253LL)))))))));
                        }
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_2 - 1])) ^ (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_31 [i_2 + 1] [20LL] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                    }
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_14 [i_12] [i_12] [i_2 + 2] [i_2 + 1] [(_Bool)1]))) | ((~(((/* implicit */int) arr_14 [i_12] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [i_12] [i_1] [i_0] [i_12])) : (((/* implicit */int) var_2)))))));
                            var_26 = ((/* implicit */int) min((var_26), (arr_4 [i_0])));
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_13] [i_13 - 1] [i_13 - 2] [i_2 + 2] [i_2 + 1])))))));
                            var_28 *= ((/* implicit */unsigned long long int) arr_27 [i_2]);
                        }
                        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_19 [(unsigned short)10] [i_2 + 2] [(signed char)5] [i_12]))))) ? (((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_2] [i_12])) : (((((/* implicit */int) arr_19 [i_12] [i_2 + 2] [i_12] [i_12])) + (-61427106)))));
                            arr_47 [(unsigned short)13] [5] [i_12] [(unsigned short)13] [(unsigned short)13] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_14] [(unsigned short)18] [i_2 + 2] [i_1] [i_0])) >> (((((/* implicit */int) arr_5 [i_14] [i_2] [i_1] [i_0])) - (51)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_33 [i_0] [i_0] [i_0] [22] [i_0])))) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) var_0)) : (var_6)));
                            arr_48 [i_0] [i_1] [i_2] [i_12] [21] = ((/* implicit */unsigned int) max((max((-4572552244068302338LL), (((/* implicit */long long int) (unsigned char)7)))), ((~(max((((/* implicit */long long int) arr_10 [(signed char)14] [(unsigned short)10] [i_1] [(signed char)14])), (var_7)))))));
                            var_30 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_7)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) / ((((_Bool)1) ? (948740200U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))))));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_51 [i_1] [i_0] = ((/* implicit */unsigned int) var_7);
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((var_6) - (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_33 [i_2 + 3] [i_2 + 2] [7U] [i_2 + 1] [i_2 + 3]), (arr_33 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 2])))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [(signed char)18] [i_2] [i_1] [i_0])))))));
                    }
                    arr_52 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) var_4)));
                    arr_53 [i_1] = ((/* implicit */unsigned short) var_0);
                    arr_54 [i_0] [6LL] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 2])) ? (arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 1]) : (arr_12 [i_2 + 3] [i_2 + 1] [i_2 + 3])))) ? (((/* implicit */long long int) ((unsigned int) arr_12 [i_2 + 3] [i_2 + 3] [i_2 - 1]))) : (-6233639339471333652LL));
                }
                var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) (~(((arr_28 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)28643)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((unsigned short) var_2)))))) : (((/* implicit */int) ((_Bool) arr_32 [i_1] [(unsigned short)12] [(unsigned short)12] [i_0] [i_0])))))));
                arr_55 [i_0] [i_0] [i_1] = (+(max((((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) ((var_9) < (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        var_35 += ((/* implicit */signed char) (((~(((-20) & (245760))))) < (var_0)));
        arr_59 [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_30 [i_16] [i_16] [i_16] [i_16])) : (arr_1 [i_16]))))));
    }
    var_36 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((388158393U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) 245745)) ^ (0U))))));
}
