/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51258
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (~(((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), ((unsigned char)205)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_20 *= ((/* implicit */short) ((int) 6683966109328098969LL));
            arr_6 [(_Bool)1] [(_Bool)1] = var_17;
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned char)3))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_7))))))), (max((arr_1 [i_2]), (var_7)))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_23 *= ((/* implicit */short) max((min((var_1), (((/* implicit */long long int) (unsigned char)249)))), (var_5)));
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((-(arr_7 [(signed char)3]))))))));
                arr_13 [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))) ? (((((/* implicit */_Bool) ((4294967295U) - (0U)))) ? (((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)-127))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
            }
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) != (((/* implicit */int) arr_11 [i_0]))))) << (((((/* implicit */int) (unsigned char)249)) - (243)))));
                var_26 = ((/* implicit */unsigned char) ((var_16) ? (var_1) : (((/* implicit */long long int) min((1052033761U), (((/* implicit */unsigned int) (unsigned char)220)))))));
                arr_17 [i_4] [i_4] [i_2] [i_4 + 1] = ((/* implicit */int) 0U);
                var_27 ^= ((/* implicit */unsigned short) (~(var_1)));
            }
            arr_18 [i_2] [i_2] = ((/* implicit */long long int) var_15);
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_2 [11] [11]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) arr_11 [2U]))))))) : (((/* implicit */unsigned long long int) (-(var_1))))));
            var_29 = ((/* implicit */short) (~((-(9007199254675456ULL)))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_30 *= ((/* implicit */unsigned char) (((+(arr_21 [14U]))) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (short)-32762))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] &= (signed char)-1;
        var_32 = ((/* implicit */_Bool) arr_22 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)76))));
        arr_29 [i_7] = ((/* implicit */signed char) ((min((arr_25 [i_7] [i_7]), (arr_25 [i_7] [i_7]))) > (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (arr_25 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))));
        var_33 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((1U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7])))))), (min((4294967276U), (((/* implicit */unsigned int) (unsigned char)198)))))), (((/* implicit */unsigned int) max(((_Bool)0), (arr_23 [i_7]))))));
    }
    var_34 = (unsigned char)124;
    /* LoopSeq 2 */
    for (int i_8 = 1; i_8 < 23; i_8 += 1) 
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) arr_20 [i_8]))))), (arr_31 [(_Bool)1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_36 = ((/* implicit */unsigned char) ((int) ((arr_31 [i_8]) - (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_8]))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        arr_42 [i_8] [i_8] = ((/* implicit */int) arr_40 [i_11] [i_10] [i_9] [i_8]);
                        var_37 = ((/* implicit */_Bool) arr_36 [i_10] [i_10 - 1]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (arr_21 [i_12])));
        var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_12] [i_12])) - (((/* implicit */int) var_15))));
    }
}
