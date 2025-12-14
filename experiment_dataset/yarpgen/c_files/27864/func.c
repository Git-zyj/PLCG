/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27864
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
    for (signed char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) min((((((_Bool) -8348681863061449250LL)) ? (((/* implicit */int) arr_1 [i_0 - 4])) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))), (((/* implicit */int) (unsigned short)65535))));
                /* LoopSeq 3 */
                for (short i_2 = 4; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [(_Bool)1] [i_0] |= ((/* implicit */short) ((((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (arr_4 [0U] [i_2] [0U]))))))) <= ((~(((/* implicit */int) var_8))))));
                        var_10 ^= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [(unsigned short)16] [i_2])) ? (((/* implicit */int) (short)-15795)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) arr_1 [i_0]))))) >> ((((~(((/* implicit */int) (unsigned char)55)))) + (74)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            var_11 = ((/* implicit */unsigned char) (_Bool)0);
                            arr_14 [2U] [i_1] [14] [14] [i_1] |= ((/* implicit */long long int) (!(((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)-4))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_17 [(unsigned char)16] [i_5 - 1] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)38)))) ? (((/* implicit */int) (short)-22823)) : ((((_Bool)1) ? (((/* implicit */int) (short)23998)) : (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (short)15208)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_12 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30158))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [(signed char)10] [i_1] [16U])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5476026118377881347LL)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_0 [(unsigned char)6] [(unsigned char)6]))))) : (((arr_8 [(short)3] [(short)3] [i_2] [i_2] [(short)3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [4U]))))))) : (((((/* implicit */_Bool) arr_4 [16U] [i_3] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [2LL]))) : (((var_3) ? (arr_4 [(short)4] [10] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] = ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) ((max((var_4), (var_1))) && (((/* implicit */_Bool) (signed char)28)))))));
                            arr_21 [(_Bool)1] [i_1] [i_0] [i_3 - 1] [i_6] [i_2] = ((/* implicit */long long int) arr_18 [(unsigned short)5] [i_0] [i_1] [i_2] [i_3] [i_0]);
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_3))));
                            arr_22 [i_0] [i_0] [i_2] [i_6] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)58016))))))));
                            var_14 = ((/* implicit */short) (((-(arr_19 [i_0]))) % (((((unsigned int) var_7)) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            arr_26 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_3] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_3] [i_7])) >= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22633)) - (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) (unsigned short)31206)) : (((/* implicit */int) var_6))))));
                            arr_27 [i_0] = ((/* implicit */unsigned int) arr_0 [(short)14] [i_0]);
                            var_15 = -1884440943;
                        }
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(arr_6 [i_3] [i_2] [i_1] [i_0]))))));
                    }
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        arr_31 [i_8 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((((min((var_5), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_8 - 3] [i_0])))) >> (((((/* implicit */int) (short)4068)) - (4021))))) <= (((/* implicit */unsigned long long int) var_9)));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 3; i_9 < 15; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)0);
                            var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)7414)) <= (-429018028))))));
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_9 + 1] [i_2] [i_2] [i_1] [(unsigned char)11])) ? (((/* implicit */int) var_4)) : (arr_15 [i_8])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0 - 4] [i_9]))))) + (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_9]))) : (arr_4 [10U] [i_8] [i_9]))))) : ((~(min((arr_4 [(short)0] [i_1] [i_2 - 1]), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [12U] [i_8] [i_9] [i_8]))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((arr_13 [i_0 + 2] [i_2 + 1] [i_8 - 1] [(unsigned short)16]) || (arr_13 [i_0 + 2] [i_2 - 1] [i_8 - 2] [14U]))))));
                            arr_39 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(arr_2 [i_0] [i_2 - 1])));
                            arr_40 [i_0] [i_1] [i_2] [i_0] [(_Bool)1] [i_0] [(unsigned short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_2 - 1] [i_0 - 2] [i_10 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_10] [i_0 - 4] [i_2 - 3])) : (((/* implicit */int) ((arr_33 [i_0] [i_1] [8U] [i_2] [i_8] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 - 4] [i_0] [i_0]))))))));
                            arr_41 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_1] [i_2] [i_8 + 1] [i_8 + 1])) == (2020234812)));
                        }
                        arr_42 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = (-(((/* implicit */int) ((signed char) 1429661935U))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((var_3) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_2 - 2] [i_2])) : (((/* implicit */int) min((arr_1 [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))))) : (1271235596)));
                }
                /* vectorizable */
                for (short i_11 = 4; i_11 < 17; i_11 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) arr_45 [i_0] [i_0]);
                    arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                    arr_47 [i_0] [i_0] [(_Bool)1] [i_11] |= ((/* implicit */long long int) arr_0 [(_Bool)0] [(_Bool)0]);
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_12] [i_11] [(_Bool)1] [i_12]))))) ? (((/* implicit */int) ((short) var_1))) : (((arr_44 [i_12] [i_12]) ? (-173304295) : (((/* implicit */int) var_8))))))));
                                var_23 |= ((/* implicit */unsigned long long int) ((((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_11] [i_13]))))) ? (((((/* implicit */_Bool) arr_45 [i_12] [i_11])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_12] [i_12] [i_12] [i_13])))) : (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1] [i_11] [i_13] [i_12] [i_1])))));
                                arr_54 [i_0] [i_0] [i_11] [i_0] [i_11 - 4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6495311074148867509LL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((_Bool) var_6)))));
                            }
                        } 
                    } 
                }
                for (short i_14 = 4; i_14 < 17; i_14 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) arr_16 [i_0] [i_0 - 4] [i_14] [(short)8])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) <= (arr_4 [0] [i_1] [0]))))));
                    arr_57 [i_0] [i_14] = ((/* implicit */long long int) ((_Bool) arr_29 [i_0] [i_1] [i_1] [i_14 - 3] [i_14]));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30230))) : (var_9)))))) ? (((/* implicit */int) (signed char)-1)) : (555398111)));
}
