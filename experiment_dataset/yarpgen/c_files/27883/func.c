/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27883
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 -= ((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 3] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_2 [i_0 + 1] [i_0 + 1] [i_1 - 3])))))) ? (((/* implicit */long long int) arr_1 [i_0])) : ((~(((arr_3 [i_0 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1]))))))));
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_8 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (unsigned short)4);
            arr_9 [i_0 + 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_2]))) : (arr_7 [i_0 + 1] [i_2] [i_2]))))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                arr_12 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))));
                arr_13 [i_0 + 1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4745307319371934487LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26282))) : (-6572968840628535117LL))))));
                var_12 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_2] [i_3 - 1]));
            }
            /* vectorizable */
            for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
            {
                var_13 += ((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0 + 1] [i_2] [i_4 + 1]));
                var_14 = ((/* implicit */unsigned short) ((5259893859292886955ULL) & (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0 + 1] [i_4])))));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_2]));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0 + 1] [i_0] [i_0]);
                        arr_22 [i_0 + 1] [i_2] [i_4 + 2] [i_5] [i_6 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_4 + 1] [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        var_16 = ((/* implicit */long long int) (+(arr_19 [i_0 + 1] [i_2] [i_4 - 2] [i_5] [i_6 + 1] [i_6 - 1] [i_6])));
                    }
                    arr_23 [i_0] [i_0 + 1] [i_2] [i_4] [i_4 - 3] [i_5] = ((/* implicit */long long int) arr_11 [i_0] [i_2] [i_4 + 2] [i_5]);
                }
                for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    var_17 -= var_6;
                    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    arr_26 [i_0 + 1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_2]);
                }
                for (unsigned int i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((var_1) & (((/* implicit */long long int) arr_16 [i_0 + 1] [i_4 + 1] [i_8])))))))));
                    arr_31 [i_0] [i_2] [i_4 - 3] [i_8] [i_8 + 2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (arr_19 [i_0 + 1] [i_2] [i_4 - 1] [i_8 - 1] [i_4 - 3] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_2] [i_4 + 3] [i_0])))))));
                    arr_32 [i_0 + 1] [i_2] [i_0 + 1] [i_8 - 1] = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
                }
                for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    arr_36 [i_0] [i_9 + 1] [i_4 + 1] = ((long long int) ((((/* implicit */_Bool) 5259893859292886955ULL)) ? (((/* implicit */unsigned long long int) 2461666030921973476LL)) : (13186850214416664660ULL)));
                    arr_37 [i_0 + 1] [i_2] [i_4 - 3] [i_9 + 1] = ((((((/* implicit */long long int) arr_10 [i_0 + 1] [i_4 - 1])) % (arr_34 [i_0 + 1] [i_2] [i_2] [i_4] [i_9 + 1]))) % (((long long int) var_3)));
                    arr_38 [i_0] [i_2] [i_4 + 2] [i_9 + 1] [i_4 - 2] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_2] [i_4 + 2] [i_9 + 2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_9 + 2]))) : (((((/* implicit */long long int) arr_10 [i_0 + 1] [i_2])) & (-7614438408450053681LL)))));
                    arr_39 [i_0] [i_2] [i_4 + 3] [i_9] = ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [i_2] [i_4 - 2] [i_9 - 1] [i_9])) ? (((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])) ? (arr_33 [i_2] [i_4 + 1]) : (((/* implicit */long long int) arr_19 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_4] [i_4 - 2] [i_9 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)194)) : (arr_10 [i_4 - 1] [i_9])))));
                }
                var_20 = ((/* implicit */long long int) ((unsigned int) arr_30 [i_0 + 1] [i_2] [i_2] [i_0 + 1]));
                arr_40 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3615187848U)))) % (((((/* implicit */_Bool) var_5)) ? (arr_33 [i_0 + 1] [i_2]) : (arr_2 [i_0 + 1] [i_2] [i_4])))));
            }
            var_21 = ((/* implicit */unsigned int) arr_15 [i_0] [i_2] [i_2]);
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (var_8)));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0 + 1] [i_2] [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((~(arr_19 [i_0] [i_2] [i_10] [i_11] [i_2] [i_11] [i_11]))))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3306672472U)) ? (((/* implicit */unsigned long long int) (-(6168652422284213463LL)))) : (13186850214416664671ULL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                        arr_56 [i_0 + 1] [i_12] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))) % (arr_53 [i_12] [i_12] [i_13]))) & (((/* implicit */long long int) (~(((((/* implicit */int) arr_18 [i_0 + 1] [i_12] [i_12] [i_14])) & (((/* implicit */int) (short)-3122)))))))));
                        var_25 += (-(var_6));
                        arr_57 [i_0 + 1] [i_12] [i_13] [i_14] [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_30 [i_0 + 1] [i_12] [i_13] [i_14])))));
                        arr_58 [i_14] [i_12] [i_13] |= arr_53 [i_0] [i_12] [i_14];
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) (+(var_1)))));
    var_27 += ((/* implicit */long long int) 679779451U);
}
