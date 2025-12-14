/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33641
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
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(signed char)4] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)1))) <= (((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))));
        arr_3 [2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 2] [14])) - ((+(((/* implicit */int) arr_1 [i_0 + 2] [(_Bool)1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) -1301772535)) ? (((/* implicit */int) (short)21655)) : (((/* implicit */int) arr_0 [i_0])))) << (((((/* implicit */int) arr_0 [i_0])) >> (((1047233762368186587LL) - (1047233762368186578LL)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((var_8) || (((/* implicit */_Bool) 1047233762368186587LL))));
        arr_8 [5ULL] [5ULL] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_6 [i_1])))));
        arr_9 [i_1] = ((/* implicit */long long int) ((_Bool) var_0));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (-(((long long int) max((((/* implicit */long long int) (signed char)71)), (var_4))))));
        arr_13 [i_2] = ((/* implicit */int) arr_10 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_20 [i_2] = ((/* implicit */signed char) (+(((1047233762368186587LL) + (((/* implicit */long long int) 2147483646))))));
                    arr_21 [i_4] [(short)7] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((var_0) & (((((/* implicit */_Bool) max((4331163666451559040LL), (-1047233762368186594LL)))) ? (((((/* implicit */int) arr_14 [i_3] [i_2])) - (((/* implicit */int) arr_18 [i_2] [i_2] [i_2])))) : (((/* implicit */int) (_Bool)1))))));
                    arr_22 [i_4] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((signed char) -1047233762368186588LL))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_25 [i_5] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) -2147483647));
            arr_26 [i_2] [(unsigned short)13] = ((/* implicit */_Bool) ((min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_5] [i_2] [2LL]))) | (var_1))), ((-9223372036854775807LL - 1LL)))) - (max((var_4), (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) arr_10 [i_5])))))))));
            arr_27 [22LL] = ((/* implicit */long long int) var_9);
        }
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_32 [(unsigned short)18] [(unsigned short)18] = ((/* implicit */short) max((var_6), (((/* implicit */int) (((~(var_6))) != (var_6))))));
            arr_33 [i_2] [(signed char)8] = ((/* implicit */long long int) ((unsigned char) ((_Bool) -1999266452)));
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_36 [(unsigned short)22] &= ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)53)), (var_4)));
            arr_37 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2] [i_2] [i_7]))) ^ (7263630540181478080ULL)))) ? ((+(6305898550367924479LL))) : (((1047233762368186587LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34243)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_42 [i_8] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)16652)))), (((/* implicit */int) arr_24 [i_2] [i_8]))));
            arr_43 [i_2] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */long long int) max((((/* implicit */int) (short)16652)), (0)));
        }
    }
    var_11 = ((/* implicit */_Bool) (~((((~(((/* implicit */int) (short)-4)))) ^ (var_0)))));
    /* LoopSeq 3 */
    for (short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
    {
        arr_46 [i_9] [i_9] = ((/* implicit */int) ((var_6) == (((((/* implicit */int) arr_17 [i_9] [i_9] [i_9])) ^ (((/* implicit */int) arr_19 [i_9] [i_9] [(unsigned short)11] [i_9]))))));
        arr_47 [i_9] [i_9] = ((/* implicit */unsigned char) var_9);
        arr_48 [(unsigned short)1] = (+(((((/* implicit */int) (signed char)11)) & ((+(((/* implicit */int) (unsigned short)10964)))))));
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
    {
        arr_52 [(unsigned char)8] &= ((/* implicit */long long int) (((-(arr_23 [i_10]))) & (((((/* implicit */int) (unsigned char)195)) / (arr_23 [i_10])))));
        arr_53 [i_10] = ((/* implicit */long long int) max((((int) ((1109086412410628281LL) % (1111733944691847535LL)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))))));
        arr_54 [9] [9] = ((/* implicit */long long int) (+(((int) (signed char)-12))));
        arr_55 [9] [i_10] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_44 [i_10])))));
        arr_56 [1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((+(((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10]))))));
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        arr_59 [i_11] = ((/* implicit */unsigned short) ((((unsigned long long int) -5783263537234917162LL)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37105)) & (-2147483647))))));
        arr_60 [i_11] [(short)11] = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (long long int i_13 = 4; i_13 < 14; i_13 += 2) 
            {
                {
                    arr_67 [i_11] [i_12] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-40)), (var_7))))) : (arr_30 [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (((var_1) ^ (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))) : (var_1)))))));
                    arr_68 [(signed char)12] [i_13] = ((/* implicit */short) ((long long int) min((((/* implicit */short) var_8)), (var_7))));
                    arr_69 [i_13] [(short)4] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_13 - 3])) * ((+(((/* implicit */int) arr_41 [i_13 - 1]))))));
                    arr_70 [i_11] [(unsigned char)3] [i_12] = ((/* implicit */_Bool) 10701054860823742022ULL);
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) 24))))), (((int) (short)-16658))));
}
