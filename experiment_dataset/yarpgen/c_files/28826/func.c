/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28826
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_0)))))) ^ (((unsigned int) var_13)));
        var_17 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [17]));
        var_18 = ((/* implicit */int) var_7);
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32967)) ^ (((/* implicit */int) (signed char)-32))))) : (((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])) | (arr_3 [i_1] [i_1])))))) ? (arr_2 [i_1 - 2]) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))), (var_3))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    var_19 = ((/* implicit */signed char) ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_10))))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_21 [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1])) ? (arr_11 [i_2] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2 - 1]))))));
                        arr_22 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_11 [i_2] [i_2]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7))))))), (var_14)));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_30 [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_6] [(unsigned char)10])) ? (max((((/* implicit */int) var_0)), (arr_2 [i_2 - 1]))) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [12] [i_2]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (arr_15 [i_2] [i_6] [(unsigned char)6])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (arr_25 [i_7] [i_6]))))) : (arr_25 [i_2 - 1] [i_6])))));
                    var_21 = ((/* implicit */int) ((unsigned long long int) var_15));
                    arr_31 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */int) ((unsigned char) 1203125263U));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_11)) << (((arr_19 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) - (11803417719713576909ULL))))));
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_23 &= ((/* implicit */_Bool) var_5);
        var_24 = ((/* implicit */int) ((signed char) (unsigned char)31));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_8])) == (((/* implicit */int) var_14)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (arr_12 [i_8] [i_8] [i_8])))) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_14))))), (var_3))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8])) != (((/* implicit */int) arr_27 [i_8] [(signed char)4] [i_8]))))), (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8])))))))));
        arr_34 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_20 [i_8] [i_8] [i_8] [i_8]) : (arr_20 [i_8] [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((1097205804U) ^ (1203125263U)))) : (((unsigned long long int) arr_20 [i_8] [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_37 [i_10] [i_9]))));
            arr_40 [i_9] = ((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9]);
            arr_41 [10ULL] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_9] [i_10])) || (((/* implicit */_Bool) var_14))));
            var_27 = ((/* implicit */signed char) ((_Bool) ((arr_38 [i_9] [i_9] [i_10]) != (((/* implicit */unsigned int) arr_36 [i_9])))));
        }
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            arr_44 [i_9] [i_11] = ((/* implicit */unsigned int) arr_36 [i_9]);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) 
            {
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_38 [i_12 - 1] [i_12 + 1] [i_12 - 1]))))));
                var_29 = ((/* implicit */short) var_8);
            }
            arr_47 [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-32)) ? (0LL) : (((/* implicit */long long int) 57344U)))) << (((/* implicit */int) (unsigned char)31))));
        }
        var_30 = ((arr_1 [i_9] [i_9]) / (arr_1 [i_9] [i_9]));
        var_31 = ((/* implicit */signed char) ((unsigned char) arr_37 [i_9] [i_9]));
        var_32 = ((/* implicit */_Bool) ((int) arr_45 [i_9]));
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((unsigned int) arr_43 [i_9])))));
    }
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_34 = ((/* implicit */int) min((var_34), (max((((((/* implicit */_Bool) 3629338657026399440ULL)) ? (((/* implicit */int) (unsigned short)38400)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_11))))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_14] [(unsigned char)5]))) : (arr_38 [i_14] [i_13] [i_13]))), (((/* implicit */unsigned int) max((((/* implicit */short) var_9)), (var_3))))))) ? (((unsigned int) arr_45 [i_13])) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_50 [i_13]) != (((/* implicit */long long int) arr_46 [i_13] [i_14]))))))));
        }
        arr_53 [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_45 [i_13]);
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)21))))));
    }
}
