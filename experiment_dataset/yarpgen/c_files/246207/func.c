/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246207
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
    var_19 = ((unsigned int) (!(((/* implicit */_Bool) (+(7608298598065178120LL))))));
    var_20 = ((/* implicit */unsigned char) var_17);
    var_21 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_8 [i_3])) ? (4172068940U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
                        arr_12 [9LL] [9LL] [i_2] [i_3] = ((/* implicit */_Bool) arr_8 [i_3]);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_10))));
                        var_23 = ((/* implicit */signed char) ((4172068929U) & (917434253U)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_3 [7] [i_2]))));
                        var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 13367568506548078976ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3377533028U)))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_26 = ((((/* implicit */_Bool) (+(-7608298598065178114LL)))) ? (((/* implicit */int) (short)5343)) : (((((arr_4 [i_0 + 3] [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)4277)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [(short)0])))) ^ (((/* implicit */int) (_Bool)1)))));
                        var_27 -= ((/* implicit */long long int) (-(((917434280U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)164)))))))));
                        var_28 |= ((/* implicit */int) arr_8 [i_2]);
                        arr_19 [i_0 + 3] [i_1] [i_2] [(unsigned char)12] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1 + 2] [i_1] [(unsigned char)10])), (min((((/* implicit */long long int) (short)5322)), (6528507739257741701LL)))))), (14136984108875580118ULL)));
                    }
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1] [i_1] [i_1 - 1] [i_0 + 3]))))) : (min((1192312277U), (((/* implicit */unsigned int) 1073741824))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            var_30 = ((((((/* implicit */_Bool) 2780897490U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_6] [i_7 - 1])) & (((/* implicit */int) (signed char)-108))))) : ((~(var_14))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [(unsigned short)11]))))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_13 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1])))) ? (min((((/* implicit */unsigned long long int) (+(arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (arr_7 [20] [i_6 + 2]))) : (min((arr_17 [i_1 + 2] [(unsigned char)9] [(unsigned char)9] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_15 [i_2] [6ULL] [6ULL] [i_7]))))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (~(1233183948U)))), (arr_7 [i_0] [i_1]))) >> ((((-(((((/* implicit */_Bool) 5445945047479587211ULL)) ? (((/* implicit */long long int) 1828120728U)) : (-7515585418494462280LL))))) + (1828120760LL))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_6 + 1] [i_7] = ((/* implicit */unsigned long long int) ((long long int) 4294967295U));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27709))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2]))) : (min((arr_13 [i_1] [i_1] [i_1] [i_1 + 1]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1 - 1])))))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [9LL] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_8 - 1] [i_6 - 1] [i_2] [i_6 - 1]))), (min((arr_17 [i_8 - 2] [i_6 + 3] [i_8 - 2] [i_6 - 1]), (arr_17 [i_8 + 2] [i_6 - 1] [i_8 - 1] [i_6 - 1])))));
                            arr_31 [i_0] [(_Bool)1] [10U] [i_0 + 3] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 917434253U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2742926375U)), (7680110921761632037LL)))) ? (((/* implicit */unsigned long long int) (~(var_12)))) : (arr_6 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0 + 4])))) ? (((unsigned int) -1487294163316177452LL)) : (arr_24 [i_9] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))));
                            arr_35 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_2] [i_2] [i_6 + 3] [i_2] [i_0]);
                        }
                    }
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((int) (-(7913670241880848511LL)))))));
                    arr_36 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1442118285)) / ((+(2725335704U)))));
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5445945047479587208ULL)) ? (((/* implicit */unsigned int) -260476179)) : (86513320U)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (3273735650U) : (((/* implicit */unsigned int) -1442118311)))) : (((((/* implicit */_Bool) 1676192431486534404LL)) ? (1021231645U) : (917434263U)))))) ? (1487294163316177454LL) : (((/* implicit */long long int) ((3377533024U) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((1458605688U) - (1458605670U))))))))))))));
                }
            } 
        } 
    } 
}
