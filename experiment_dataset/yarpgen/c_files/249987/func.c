/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249987
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) (short)15849);
                                arr_12 [i_0] [i_1 - 2] [i_2 + 1] [i_3] [i_4] = ((/* implicit */short) ((unsigned char) (-(479499550U))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1 - 2] [i_2 + 3] [i_0]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_4])))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(1073741823U)))) ? (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2 + 3] [10] [i_1] [i_0])) ? (min((((/* implicit */long long int) var_8)), (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2] [13] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((short) var_19)), (((/* implicit */short) var_18))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 = arr_0 [i_6];
                                var_23 = ((/* implicit */short) ((int) (~(((/* implicit */int) ((2821897492U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                arr_28 [13] [13] = ((/* implicit */short) (unsigned char)246);
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3221225472U)))))))) ? (min((var_7), (((/* implicit */unsigned int) (~(arr_0 [i_7])))))) : (arr_27 [i_7 - 1] [i_9 + 1])));
                            var_25 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(signed char)14] [i_8])) ? (((/* implicit */int) (unsigned char)254)) : (arr_0 [i_10])))))) ? ((-(((/* implicit */int) (unsigned char)6)))) : (((((/* implicit */int) (unsigned short)38664)) << (((((/* implicit */int) (unsigned char)244)) - (243)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((long long int) var_14)))));
                var_27 = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((var_9) | (((/* implicit */int) (unsigned char)210))))) & (((((/* implicit */long long int) 3059306540U)) | (var_1))))));
                arr_34 [6] [17U] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_16)) % (((/* implicit */int) arr_32 [i_7] [i_7 + 1])))))) : (((/* implicit */int) max((arr_33 [i_7 - 4] [i_8] [i_7 - 3] [i_7 - 1]), (arr_33 [i_7 - 4] [i_7] [4ULL] [i_7 - 2]))))));
            }
        } 
    } 
    var_28 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) (short)25771)))))))))));
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (-(9613577729123908957ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_18)))))));
    /* LoopSeq 3 */
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
    {
        arr_37 [i_11] = ((/* implicit */short) arr_5 [18U]);
        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((~(-7043533942858357704LL)))))) ? (((arr_29 [i_11] [i_11]) ? (2514673665U) : (((/* implicit */unsigned int) ((/* implicit */int) ((12177879662994887572ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11] [i_11]))))))))) : ((~((+(var_7))))));
    }
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
    {
        var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_22 [2U] [i_12])) % (arr_9 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(signed char)21])))) ? (((/* implicit */long long int) (-(var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_15) < (var_7))))) / (-7043533942858357703LL)))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 7; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                {
                    arr_47 [9U] [9U] = ((/* implicit */_Bool) max(((unsigned char)234), (((/* implicit */unsigned char) (signed char)84))));
                    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_29 [i_12] [i_12])), (((((/* implicit */_Bool) arr_21 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 1] [i_13])) ? (((/* implicit */int) arr_21 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 - 3])) : (((/* implicit */int) arr_17 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 1] [i_13 + 2] [(short)16]))))));
                }
            } 
        } 
        arr_48 [i_12] [i_12] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_43 [i_12] [i_12]))))));
    }
    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) min((((long long int) arr_51 [i_15] [i_15])), (max((7043533942858357719LL), (((/* implicit */long long int) (short)-6432))))));
                        var_34 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_19)))), ((-(((((/* implicit */_Bool) arr_24 [i_17])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_16 [(short)2] [i_16] [i_17 + 1] [i_18]))))))));
                    }
                } 
            } 
        } 
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15]))))) : (max((((/* implicit */int) (unsigned char)60)), (arr_0 [i_15])))))) ? (((/* implicit */long long int) ((unsigned int) arr_42 [i_15]))) : (min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (var_1))))));
    }
}
