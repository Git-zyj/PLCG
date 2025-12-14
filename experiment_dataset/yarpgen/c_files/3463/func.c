/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3463
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
    var_16 = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned int) ((unsigned short) (short)-22077)))));
    var_17 = ((/* implicit */short) var_15);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((((((/* implicit */long long int) 2305550661U)) | (var_11))) + (5531243740062029313LL)))))), (max((min((1489124188U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned int) ((var_9) - (((/* implicit */int) arr_1 [i_0])))))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)-90)))) > (((/* implicit */int) arr_1 [(short)8]))))) >= (((/* implicit */int) ((unsigned char) arr_1 [(_Bool)1])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((1898858416) / (((/* implicit */int) (_Bool)1)))));
            arr_8 [(unsigned short)12] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(signed char)4])) < (((/* implicit */int) (signed char)6))))) ^ (((/* implicit */int) arr_0 [i_0] [i_1]))))) < (arr_4 [i_0] [(unsigned short)10])));
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) max(((signed char)-115), (arr_0 [i_0] [i_0])))), (((((((/* implicit */int) (signed char)-9)) + (2147483647))) << (((5262914651253956917ULL) - (5262914651253956917ULL)))))));
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) (((+(arr_6 [i_0]))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)833)))))));
            arr_11 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))) : (4235259322U)))) && (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 637643906U))))), (((((/* implicit */int) arr_0 [i_2] [i_0])) | (((/* implicit */int) (signed char)-112)))))))));
            var_21 = ((/* implicit */unsigned int) var_11);
            arr_12 [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0]);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                for (int i_5 = 4; i_5 < 14; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_6] [i_0] [i_0] [i_5 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24285)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58621))) : (var_4)))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_5 - 4]))));
                            arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_19 [i_3])))) ? (((/* implicit */int) var_14)) : ((-(var_10)))));
                            var_22 = ((/* implicit */int) ((signed char) arr_21 [i_0] [i_5 - 3] [i_5] [i_5 - 4] [i_0]));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
        }
        var_24 = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */_Bool) var_11);
        var_25 = ((/* implicit */signed char) (-(var_9)));
        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_26 [i_7] [i_7])));
        /* LoopSeq 4 */
        for (int i_8 = 2; i_8 < 16; i_8 += 4) 
        {
            var_27 = ((/* implicit */signed char) arr_29 [i_7] [(unsigned short)0]);
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [7]))) / (281474976710655ULL))));
        }
        for (unsigned char i_9 = 3; i_9 < 17; i_9 += 2) /* same iter space */
        {
            arr_34 [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_7] [i_7])) * (((/* implicit */int) (unsigned short)58621))))) ? (((var_10) / (((/* implicit */int) var_12)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned char)134))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(var_13)))) > (((((/* implicit */_Bool) arr_27 [i_9 - 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_26 [i_7] [i_9])))));
            var_29 = ((/* implicit */unsigned char) (unsigned short)50626);
        }
        for (unsigned char i_10 = 3; i_10 < 17; i_10 += 2) /* same iter space */
        {
            arr_37 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_33 [i_10]) >= (((/* implicit */unsigned long long int) arr_30 [5ULL] [i_7])))))));
            var_30 = ((/* implicit */short) (((_Bool)1) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            var_31 = ((/* implicit */unsigned char) arr_29 [i_7] [i_7]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_7] [i_7]))) < (var_11))))));
            arr_41 [i_7] [i_7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (1758691021U)));
        }
    }
    for (int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
    {
        var_33 ^= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned short)61324)) ? (arr_33 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_12] [i_12]))))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)64713)))))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2)))))) / (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    }
    for (int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
    {
        arr_46 [i_13] [i_13] &= ((/* implicit */signed char) (unsigned short)13146);
        arr_47 [i_13] = ((/* implicit */unsigned long long int) max((arr_30 [i_13] [i_13]), (((/* implicit */unsigned int) min((arr_25 [i_13]), (arr_25 [i_13]))))));
    }
    var_35 = ((/* implicit */unsigned int) (_Bool)1);
}
