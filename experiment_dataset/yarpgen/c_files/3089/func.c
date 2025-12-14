/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3089
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -213516024)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) max((var_1), (-138568488)))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_0 [i_0])))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (-138568511))), (max((((/* implicit */int) var_9)), (-929116950))))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (138568472) : (((/* implicit */int) (signed char)55))))));
                    var_11 = ((/* implicit */signed char) max((max((arr_0 [i_2]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((signed char) arr_3 [i_0 - 3] [i_0 + 1])))));
                }
            } 
        } 
        arr_9 [0] |= ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 2363806085U)) ? (var_7) : (((((/* implicit */int) var_0)) | (2073977516))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_21 [i_0] [i_3] [i_4] [i_5] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)37822), (((/* implicit */unsigned short) arr_18 [i_0 + 1] [16] [i_4] [(short)12]))))) - (((/* implicit */int) ((((/* implicit */int) var_3)) != (arr_6 [i_0] [i_0 - 1] [i_0]))))))) ? (((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) ((arr_0 [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_5])))))) - (1))))) : (((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_4] [i_5 - 1]))));
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) -138568472)), (((((/* implicit */_Bool) var_4)) ? (3233960170388522266LL) : (((/* implicit */long long int) var_1)))))) < (((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_5 + 1] [i_3] [i_6] [i_3 + 1])), ((+(var_1))))))));
                            arr_24 [7ULL] [i_3] [i_4] [i_3] [i_0 - 2] = ((/* implicit */short) max(((unsigned char)181), ((unsigned char)53)));
                            arr_25 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2363806088U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (2215245948018916817LL)));
                        }
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)106)))) ? (arr_2 [i_0 - 3] [i_3]) : (min((((/* implicit */int) var_2)), (329158529)))))) ? ((((~(((/* implicit */int) var_3)))) & (((/* implicit */int) arr_18 [i_4] [i_4] [16] [(signed char)0])))) : (((/* implicit */int) var_3)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_29 [i_3] [i_3 + 2] [i_7] [i_0 - 4] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (var_5)));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_3] [i_0] [i_3 - 1] [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 4] [i_3 - 1]))) : (((((/* implicit */long long int) -471514736)) ^ (1950383323004611499LL)))))) && (((/* implicit */_Bool) ((signed char) var_0)))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4453639949568116065LL)) ? (-1295122503) : (-1295122503)));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_9))));
                            arr_30 [i_7] [i_3] [i_4] [i_3] [i_0 - 4] = ((/* implicit */short) ((unsigned char) max((arr_17 [i_0 - 3] [i_0] [i_0 - 3] [i_0]), (((/* implicit */short) var_9)))));
                        }
                        for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            arr_34 [i_3] [i_3] [i_4] [i_4] [i_5] [i_8 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13699582307730504825ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (arr_0 [i_8 + 1]))))));
                            var_18 = min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (5355708368209812011LL)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6586)) ? (arr_12 [i_8] [i_4] [i_3]) : (var_7)))) ^ (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_16 [i_0] [i_3 - 1] [i_4] [i_8]))))));
                            arr_35 [i_0 + 1] [(signed char)5] [i_4] [i_0 + 1] [i_3] = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_22 [i_3] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            arr_39 [i_0 + 1] [i_0] [i_3] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_9 + 1] [i_3 + 2])) >> (((var_10) - (13417376913296344257ULL))))), (min((-329158521), (((/* implicit */int) arr_3 [i_9 + 1] [i_3 + 1]))))));
                            arr_40 [i_9] [i_5] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-138568467) : (arr_27 [i_0] [i_3] [i_0] [i_0 - 3] [i_0 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)22255)) / (-1251596745)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0 - 2] [i_0])) : (arr_15 [i_0 + 1] [i_0 - 3] [i_9]))) : (((/* implicit */int) arr_36 [i_0 - 4] [i_4] [i_3 - 1] [i_4] [i_9 + 1] [i_0 - 1]))));
                            arr_41 [i_0 - 2] [i_3] [i_3] [i_5] [i_5] = ((max((((int) arr_3 [15] [i_4])), (((/* implicit */int) arr_26 [i_0 - 3] [i_3] [i_4] [i_5 + 1] [i_9 + 1])))) << (((min((var_5), (((/* implicit */unsigned long long int) var_0)))) - (9672327550527579630ULL))));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_10 = 4; i_10 < 17; i_10 += 4) 
    {
        var_19 |= (signed char)91;
        arr_44 [i_10 + 1] [(signed char)14] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_36 [i_10 - 1] [i_10] [i_10 - 1] [i_10 + 1] [i_10] [i_10 + 1])) >> (((((/* implicit */int) arr_36 [i_10 - 4] [i_10 - 4] [i_10 + 1] [i_10 - 1] [i_10 - 4] [i_10 - 1])) - (5192))))));
        arr_45 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_26 [i_10] [i_10] [i_10] [i_10] [i_10]), (var_3))))))) ? (((/* implicit */int) ((short) arr_12 [i_10] [i_10] [i_10 - 1]))) : (((int) var_3))));
        /* LoopNest 2 */
        for (short i_11 = 3; i_11 < 14; i_11 += 4) 
        {
            for (signed char i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) (signed char)-16))), (((((/* implicit */int) ((signed char) (unsigned short)25019))) / (((/* implicit */int) var_8))))));
                    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned short)17603)) : (-138568475)));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_53 [i_10 - 3] = ((/* implicit */int) var_4);
                        arr_54 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_38 [i_10 - 1] [i_11 - 3] [i_12] [i_13] [i_10]), (arr_38 [i_10 - 1] [i_11 + 3] [i_13] [i_13] [i_10])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_13] [i_10 - 2] [i_12 + 1])) + (2147483647))) << (((arr_28 [i_12 - 1] [i_10] [i_12] [i_12] [i_12]) - (2024395540U)))))) : ((~(((((/* implicit */_Bool) arr_7 [i_13] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12350299265137676410ULL)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((signed char) var_3)))) ? (((((/* implicit */_Bool) arr_31 [i_10] [17] [i_13])) ? (((/* implicit */int) var_2)) : (arr_12 [i_10 - 3] [(signed char)1] [i_10 - 1]))) : (((((((var_6) + (2147483647))) >> (((var_6) + (510712613))))) & ((-(((/* implicit */int) (short)-27047))))))));
                        arr_55 [i_10] [i_11] [i_13] [i_13] = ((/* implicit */int) var_10);
                    }
                }
            } 
        } 
        arr_56 [i_10 - 1] [i_10] = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_10] [i_10] [i_10 - 1] [i_10 + 1])) - (var_7)))) % (arr_28 [i_10 + 1] [i_10] [i_10 + 1] [i_10] [i_10]))));
    }
    for (int i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        arr_60 [i_14] [i_14] = ((/* implicit */signed char) ((unsigned char) ((short) arr_59 [i_14])));
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) min(((short)22404), (((/* implicit */short) (unsigned char)229)))))));
        arr_61 [11LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 1024775159786264312ULL))) ? (((/* implicit */long long int) ((int) 213516036))) : (arr_19 [i_14])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)94))))) ^ (-4305880865066547769LL)));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) + (max((min((var_10), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_3)))))))));
}
