/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214519
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((1847070325118966184ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1])))))) > (((int) arr_5 [i_0] [i_0] [i_2 + 1] [i_2 + 1]))));
                    var_17 = ((/* implicit */unsigned char) ((short) ((_Bool) min(((_Bool)0), ((_Bool)1)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_1 + 1] [i_2] [0U] [i_3 + 1] &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)133)) << (((/* implicit */int) (signed char)18)))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) 2492763305020208996ULL));
                        var_18 = ((/* implicit */unsigned long long int) (((+((~(var_5))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64020)) >> (((((/* implicit */int) arr_8 [i_3] [i_2 + 1] [i_0] [i_0])) - (39)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16342741927025695332ULL)) || ((_Bool)1))))) : (max((6600272995586616768LL), (((/* implicit */long long int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned char) var_5));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5] [i_5] [i_5 + 2] [i_5 + 2]);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_1] [i_5 - 1])) ^ (((/* implicit */int) arr_18 [i_1] [i_5 + 3]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_16 [i_2 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1 + 1]));
                            arr_24 [i_6] [i_1] [i_4] [i_4] [i_1] [i_1] [i_0] = var_8;
                        }
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (short)631)) - (((/* implicit */int) arr_2 [(signed char)0] [i_2 - 1] [(signed char)0])))))));
                            arr_29 [i_0] [i_4] [(signed char)6] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_0])) == (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1] [i_1 + 1]))));
                        }
                        for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_1))) ^ (((/* implicit */int) ((short) (_Bool)1)))));
                            var_24 = ((/* implicit */signed char) (-(arr_28 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_8])));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_25 = max((var_7), (((/* implicit */short) ((signed char) var_2))));
                            arr_37 [i_0] [6U] [i_0] [6U] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (((1806657194120127278ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61395)))))));
                        }
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) max((max(((short)-21439), ((short)-21451))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)133)))))))) * (((/* implicit */int) max(((short)-12852), (((/* implicit */short) arr_32 [6ULL] [i_0] [i_0] [i_1 + 1] [i_2 - 1] [i_2 - 1]))))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */int) var_15)) & (((/* implicit */int) arr_25 [i_1] [i_9] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_25 [i_1] [i_1] [i_9] [i_1 + 1] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_25 [i_1] [i_2 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned short) min(((signed char)26), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_40 [(signed char)4] [i_0] [i_1 + 1] [(signed char)4])) : (((/* implicit */int) (_Bool)1))))) == (3076251360696146749LL))))));
                        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)104)))) > ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))) - (((((((/* implicit */int) arr_35 [i_11] [i_2 - 1] [i_2 + 1] [i_1] [i_1 - 1])) + (2147483647))) << (((((/* implicit */int) (unsigned short)21897)) - (21897)))))));
                        arr_41 [i_1] [i_1] = ((/* implicit */unsigned int) max((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (var_12))), (((/* implicit */unsigned long long int) arr_6 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3330023256U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (min((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1)))))))));
                        arr_42 [i_11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-24377);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 9; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_30 [i_13 + 2] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_0])) || (((/* implicit */_Bool) 5904593724266559540ULL)))));
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)40955))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)48834))))) ^ (var_2))))))));
                                arr_48 [i_0] [i_1] [i_1] [i_1] [i_12] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)151)) ? (max((((/* implicit */unsigned long long int) arr_22 [i_2 - 1] [i_2 + 1] [i_1 + 1])), (var_2))) : (((((/* implicit */_Bool) (unsigned short)62489)) ? (11797223580576252501ULL) : (((/* implicit */unsigned long long int) var_1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-98)), (14638327169635537384ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) : (var_10))));
        arr_49 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [(short)10] [i_0] [i_0] [i_0])))))));
    }
    var_33 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((5478674583607751722LL), (((/* implicit */long long int) (_Bool)1))))) * (var_5)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (min((((/* implicit */unsigned long long int) var_7)), (3808416904074014231ULL))))))));
}
