/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200142
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(signed char)12] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) (-(((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)198)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(short)11] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_4 [i_0] [i_0] [(short)11])))))));
                    var_11 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [7LL] [i_2]);
                    arr_10 [i_2] [i_2] [2LL] = ((/* implicit */int) ((((((/* implicit */_Bool) ((long long int) arr_5 [2U] [i_2]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_1]))) : (max((((/* implicit */unsigned long long int) 1916789973U)), (var_9))))) & (arr_6 [i_2] [i_1] [i_0])));
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [(short)3]))));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (4294967263U)))), ((~(arr_1 [i_3 + 2])))))));
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_1 [(short)11]) : (arr_1 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3])))))) : (((arr_1 [i_3]) / (var_1)))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) (~(3529013437U)));
        var_16 += ((/* implicit */unsigned char) (+(((arr_0 [13LL]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))))));
        var_17 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7686692950501691569ULL))))) : ((~(((/* implicit */int) arr_5 [i_4] [i_4]))))))), (arr_4 [i_4] [i_4] [i_4]));
        var_18 |= arr_6 [i_4] [(signed char)5] [(_Bool)1];
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned char) min((3529013437U), (((/* implicit */unsigned int) (unsigned char)241))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            arr_20 [i_6] [(short)5] = ((/* implicit */unsigned char) arr_0 [i_5]);
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                arr_23 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((arr_19 [(signed char)1]) ? (arr_18 [i_5] [i_6] [i_7]) : (((/* implicit */long long int) arr_21 [(_Bool)1] [i_7])))))))));
                arr_24 [(unsigned char)8] [i_6] [i_5] = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) >= (2785389814893238496ULL))))))));
                arr_25 [i_5] [i_5] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
            }
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_6])))))))))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            arr_29 [i_8] [i_8] [i_5] = ((/* implicit */signed char) 18446744073709551615ULL);
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [0U]))) & (var_3)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 2; i_10 < 13; i_10 += 2) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((arr_1 [i_5]) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (min((((/* implicit */unsigned long long int) 5465122707394553490LL)), (18446744073709551608ULL))))))))));
                var_23 ^= ((/* implicit */signed char) (((~(((/* implicit */int) arr_33 [i_5] [i_9] [i_10])))) & (((/* implicit */int) arr_33 [i_5] [(unsigned short)13] [i_10]))));
                arr_35 [i_5] [i_5] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (10760051123207860063ULL))))));
            }
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(unsigned char)5] [i_9])) && (((/* implicit */_Bool) (-(-8165009674258894557LL))))));
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [(signed char)13]))) : (arr_0 [i_9])))) ? (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */unsigned long long int) arr_1 [i_5]))))) ? (((((/* implicit */_Bool) max((arr_22 [i_5] [i_9] [i_5]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) arr_15 [i_5] [(unsigned char)8])) : (((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned long long int) -3669498315687807132LL)) : (10760051123207860062ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_21 [i_5] [i_9]))), ((-(arr_3 [i_5] [i_5] [(unsigned char)12])))))));
            arr_36 [i_5] [i_9] = ((/* implicit */unsigned long long int) ((_Bool) 2281335511U));
        }
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_10))));
}
