/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39893
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
    var_17 += ((/* implicit */int) ((unsigned short) (signed char)69));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 2434944290U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */int) (signed char)-116)))))))) : (var_13)));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2417685237U))))), ((-(var_16)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1860022980U)) ? (var_10) : (arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned int) arr_0 [i_0]))))) == (((unsigned long long int) var_4)))) ? (((unsigned int) ((((/* implicit */_Bool) 1860022999U)) ? (2491747145U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_7))))) * (((((/* implicit */_Bool) (signed char)116)) ? ((-(((/* implicit */int) arr_4 [i_2] [i_1])))) : (((/* implicit */int) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned char) var_5)))))))));
            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) 2434944266U)) ? (max((4294967295U), (((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2 + 1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (arr_5 [i_2 - 2] [i_2 - 1]))))));
        }
        var_23 = ((((/* implicit */int) ((((2417685236U) >= (2491747139U))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-13)))))))) ^ ((-(var_13))));
    }
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_24 = ((/* implicit */int) max((min((((/* implicit */unsigned int) var_13)), (max((var_8), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2417685232U)) ? (((/* implicit */int) arr_8 [i_3 + 1])) : (((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)-2)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_11 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (min((arr_10 [i_4] [i_3 - 1] [i_3]), (((/* implicit */long long int) 4294967280U))))))) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_8 [i_4])), (var_2)))))) : (max((((/* implicit */unsigned int) arr_8 [i_3 + 4])), (2491747124U)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
            {
                var_25 = (!(((/* implicit */_Bool) arr_8 [i_5])));
                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))));
                arr_15 [i_3] [6U] [19ULL] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                var_27 = ((signed char) arr_14 [i_5 - 2] [i_4] [i_5] [i_4]);
            }
            for (int i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((4294967288U), (((/* implicit */unsigned int) 1551626227)))))));
                arr_20 [i_3] [i_3] [(unsigned short)17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned long long int) var_15)) : (max((arr_13 [i_3 + 3] [i_3 + 2] [i_4] [i_6]), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_6 - 1] [i_4] [i_3]))))));
            }
            for (int i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
            {
                var_29 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (var_15));
                arr_23 [i_3] [i_3] [5U] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_4] [i_7 - 2] [i_4]))) != (min((max((4294967278U), (((/* implicit */unsigned int) var_0)))), (((var_16) << (((((/* implicit */int) arr_8 [i_7 + 1])) - (54107)))))))));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_30 = ((/* implicit */signed char) arr_22 [i_8] [(short)16] [(short)16]);
                    var_31 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (unsigned short)37334)), (1877282050U)))));
                    var_32 = var_8;
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((long long int) var_2)) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 4] [(_Bool)1] [9] [i_9])) ? (((/* implicit */int) var_11)) : (var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1877282048U)) && (((/* implicit */_Bool) (signed char)-24))))))) : (max((((((/* implicit */_Bool) arr_24 [20U] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_10 [i_3] [7] [i_9]))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (var_2)))))))))));
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) var_15)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_14 [i_10] [(short)22] [(signed char)1] [i_3 + 4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) : (max((((/* implicit */unsigned long long int) arr_9 [i_10] [i_10 + 1] [(_Bool)1])), (137438953471ULL)))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3 - 1] [i_10] [i_10]))) : (var_8))))) : (4294967286U)));
            arr_30 [10] [i_10] [18ULL] &= ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) 134217664U)) && (((/* implicit */_Bool) arr_7 [i_3] [i_3])))))) && (((/* implicit */_Bool) ((signed char) (short)-1)))));
            var_36 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_10 + 3] [i_3 - 1])) >= (((/* implicit */int) arr_7 [i_10 - 1] [i_3 + 4])))))));
        }
    }
    var_37 = ((/* implicit */int) var_15);
}
