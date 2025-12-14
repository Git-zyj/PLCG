/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19745
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((arr_1 [7ULL]) >> (((((/* implicit */int) arr_0 [i_0])) - (10528))))) != (8578464944457560376ULL)))), ((unsigned char)161)));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-29040))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43491))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1])))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_4 [10U])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [20U] [i_3] [(unsigned short)19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)0] [i_2] [12LL] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11684))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) : (arr_6 [i_1] [i_1]))))))));
                    arr_12 [(_Bool)1] [(unsigned char)4] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2]);
                    arr_13 [(signed char)13] [(unsigned char)10] [(signed char)20] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_1])), (((arr_3 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))))))) && (((/* implicit */_Bool) ((arr_3 [i_1]) + (arr_3 [i_3]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(signed char)10])) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [i_4])));
        var_21 = ((/* implicit */signed char) 12072248603220601380ULL);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        arr_18 [(unsigned char)0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [4U])))) ? (((/* implicit */int) (short)-21226)) : (((/* implicit */int) arr_14 [i_5]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            var_22 ^= ((arr_30 [i_9 - 1] [i_6] [i_7] [i_8] [7U]) << (((/* implicit */int) (!(((/* implicit */_Bool) 10575177626716599566ULL))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [5U])) | (((/* implicit */int) arr_20 [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9 + 2] [i_8] [(signed char)6]))) == (3845570802U))))) : (11342454999502034430ULL)));
                            arr_32 [i_8] [(_Bool)1] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_30 [(_Bool)1] [i_9 - 1] [(unsigned char)4] [(unsigned short)11] [i_9 + 1]);
                        }
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            arr_36 [(short)3] [i_10] [i_7] [i_8] = ((/* implicit */unsigned char) (-(arr_31 [2ULL] [(unsigned char)8] [i_10 - 1] [i_7] [i_6])));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) arr_19 [i_5] [i_10 + 1]))));
                            var_25 ^= ((/* implicit */long long int) arr_5 [i_5] [i_6]);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_9 [i_5] [i_6] [i_10 + 4] [i_8]))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_3 [i_6]))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_7] [i_6]))))))))));
                            arr_39 [i_11 + 3] [i_11] [(_Bool)1] [i_11] [i_5] = ((/* implicit */unsigned char) arr_31 [(unsigned char)17] [(unsigned short)10] [i_11 + 2] [i_8] [(_Bool)1]);
                            arr_40 [i_11 - 1] [i_11] [i_8] [(signed char)8] [i_11] [i_5] = arr_35 [i_11 + 1] [i_8] [i_5];
                        }
                        arr_41 [(unsigned short)11] [(unsigned char)14] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_5] [i_8] [i_6] [i_8] [i_5]))));
                        var_29 = ((((((/* implicit */_Bool) (unsigned short)59299)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_37 [(short)12]))) < (((long long int) arr_33 [i_6])));
                    }
                } 
            } 
        } 
        arr_42 [i_5] = ((/* implicit */unsigned short) var_13);
        arr_43 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (arr_6 [i_5] [i_5]) : (arr_6 [i_5] [i_5])));
    }
    var_30 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_8)), (var_5)));
    var_31 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60900))) - (926960989U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-57)), (var_10))))) : ((-(var_11))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (((((/* implicit */int) (unsigned char)33)) | (((/* implicit */int) var_10)))))))));
}
