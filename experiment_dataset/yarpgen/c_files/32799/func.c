/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32799
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_12 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) == (1073741824U)));
                            var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50833)))))) ? (((/* implicit */int) arr_1 [i_2] [i_0 + 1])) : (((/* implicit */int) arr_12 [i_4]))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */short) arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_12 [i_1]);
                            arr_19 [i_1] [i_3] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)219))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [(signed char)8])) ? (arr_14 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))));
                            var_16 = ((/* implicit */_Bool) arr_12 [i_0 - 1]);
                            arr_22 [i_6] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10242811371009697865ULL)));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (unsigned char)250)))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)0)))));
                        }
                        arr_25 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_23 [i_1] [i_2] [i_2] [i_0] [i_1]) : (((/* implicit */unsigned long long int) -599243405955212469LL)))))));
                        var_19 = ((/* implicit */unsigned short) 7644933112582625641LL);
                    }
                    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) (~(9955231259419432214ULL)));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (arr_21 [i_1] [i_2] [i_1] [i_1])))));
                        arr_28 [(short)17] [i_1] [6ULL] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)255);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) / (837840908U)))) ? (((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (arr_8 [i_1]))))));
                        arr_29 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) var_5);
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)11370)))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    arr_33 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)11388)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)82))))));
                    arr_34 [i_1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned long long int) -1084258474654847538LL);
                    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_24 [i_1] [i_0 - 1] [14U] [i_0 - 1]))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])))))));
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_10] [i_1] [i_1] [(short)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2092074592U)) ? (max((arr_5 [i_1]), (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 9056278509396604068ULL)) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_10] [i_0 + 1]))) == (3217845292U))))))));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1077122004U)))) ? (min((((/* implicit */unsigned int) var_9)), (var_5))) : (((((/* implicit */_Bool) var_1)) ? (arr_10 [i_10]) : (3217845316U)))))) ? (min((((((/* implicit */_Bool) arr_17 [i_0] [i_10] [i_1] [i_1] [i_1] [i_0] [(unsigned short)14])) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_17 [(unsigned char)2] [i_10] [i_10] [i_1] [i_1] [16LL] [(signed char)3]))))))) : (((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_1] [i_0] [i_0])));
                    arr_38 [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_8 [i_10])));
                    arr_39 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1])) ? (((long long int) (unsigned char)98)) : (((/* implicit */long long int) -1405724482))))));
                }
            }
        } 
    } 
}
