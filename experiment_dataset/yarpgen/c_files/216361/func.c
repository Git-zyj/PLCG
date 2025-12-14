/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216361
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) (-(((-220086794) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        var_18 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 1079508636U)), (arr_1 [i_0]))) - (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)32767))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */unsigned int) (unsigned char)77))))) - (max((((((/* implicit */_Bool) (signed char)101)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)178))))))));
        var_20 = ((/* implicit */unsigned short) -1126234117);
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) arr_9 [i_2])))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3794987203U), (((/* implicit */unsigned int) (signed char)-2))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)188)), (arr_6 [i_3 + 2]))) : (((/* implicit */unsigned long long int) ((724360335614187461LL) ^ (3366900496646136674LL))))));
            var_23 *= arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 2];
            var_24 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)0))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_25 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_2]))));
            arr_17 [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [(unsigned char)20])) ? (((/* implicit */int) arr_4 [i_2] [i_4])) : (((/* implicit */int) (_Bool)1))));
        }
        arr_18 [i_2] = min((min((1255513204), (((/* implicit */int) (signed char)18)))), (((/* implicit */int) ((unsigned short) ((short) arr_11 [i_2] [i_2] [i_2])))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(arr_8 [i_5])))), (min((arr_6 [i_5]), (10184086035464204574ULL)))));
        arr_24 [i_5] [i_5] = arr_7 [i_5];
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    arr_32 [i_7] [i_7] [i_8] [i_6] = ((int) (-(((/* implicit */int) (unsigned char)179))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_26 = ((((/* implicit */_Bool) arr_28 [i_8])) && (var_11));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_8] [i_6]))) : (1703349622U)))));
                        arr_35 [i_6] [i_7] [i_8] [(_Bool)1] [i_9] = ((/* implicit */_Bool) arr_26 [i_8]);
                    }
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_28 |= ((/* implicit */unsigned char) arr_31 [i_10] [i_8]);
                        var_29 -= ((/* implicit */unsigned long long int) (((_Bool)1) || ((_Bool)1)));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) ((unsigned int) 1235343268U));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned short) arr_36 [i_6] [i_7] [i_11]))))) ^ (arr_25 [i_11] [i_6]))))));
                    arr_42 [i_6] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned int) arr_40 [i_11] [i_11] [i_11] [i_7]));
                    arr_43 [(_Bool)0] [i_11] [i_11] [(short)24] = ((/* implicit */signed char) arr_29 [i_6] [i_6] [(_Bool)1] [i_11]);
                }
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_46 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_34 [i_12] [i_7])) != ((-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_31 [i_7] [i_6]), (((/* implicit */unsigned short) arr_36 [i_6] [i_7] [i_12]))))) >= (((((/* implicit */int) arr_28 [20U])) - (-790002105)))))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-54))))));
                    var_32 = ((/* implicit */_Bool) var_0);
                }
                arr_47 [i_6] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) 71867117U)), (arr_33 [i_6] [i_6] [i_6] [i_6]))), (arr_33 [i_6] [5] [i_7] [i_7])));
                /* LoopNest 3 */
                for (unsigned int i_13 = 1; i_13 < 22; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) (signed char)63);
                                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((arr_33 [i_13 - 1] [4ULL] [i_13 - 1] [i_13 + 3]) | (arr_33 [i_13 + 1] [i_13] [i_13] [i_13 + 2]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_40 [22ULL] [i_13 + 1] [i_13] [i_13 + 3])))))))));
                                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) max((((((/* implicit */int) arr_28 [i_13 + 1])) + (((/* implicit */int) arr_28 [i_13 - 1])))), (((/* implicit */int) arr_49 [i_13 - 1])))))));
                                var_36 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_53 [i_15] [i_14] [i_13 + 2] [(unsigned short)20])))) ^ (((/* implicit */int) (short)-2053))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
