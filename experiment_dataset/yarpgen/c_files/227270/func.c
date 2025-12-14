/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227270
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        var_19 = max((min((((/* implicit */long long int) ((signed char) (unsigned char)98))), (((((/* implicit */_Bool) (signed char)-32)) ? (-3942983392622200334LL) : (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) var_18)));
                        var_20 = min((var_9), (((unsigned short) max((((/* implicit */unsigned short) var_17)), (arr_9 [(unsigned char)15] [i_0 - 3] [i_2])))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_8 [i_0 + 1] [i_1] [i_1] [i_4] [i_0]);
                        arr_13 [i_4] [i_0] [i_0] [i_0 - 2] = ((/* implicit */short) var_11);
                        var_22 = ((/* implicit */signed char) max((min((max((var_4), (((/* implicit */unsigned long long int) arr_5 [i_4])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0] [i_1 + 1] [(_Bool)1] [i_4] [(_Bool)1] [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned short) var_10)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 3])), (arr_9 [i_0] [i_0 - 2] [i_1 - 4])))), (((((/* implicit */_Bool) -3942983392622200358LL)) ? (((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_10 [(_Bool)1] [(short)13] [(short)13] [i_5] [i_1] [i_6]), (arr_10 [(signed char)3] [i_1 + 1] [(signed char)3] [i_5] [(signed char)16] [(signed char)3])))) - (((/* implicit */int) min((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]), (((/* implicit */unsigned short) arr_0 [i_0])))))))) ? ((~(3942983392622200347LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_1] [(unsigned short)0] [(unsigned short)0] [i_5] [(signed char)11] [i_5])))))));
                                var_25 = ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                }
                var_26 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(unsigned short)6] [i_1 - 1] [i_1 - 3] [(short)11] [i_1 - 3] [i_1] [i_1 - 4])) ? (((/* implicit */int) var_10)) : (arr_7 [i_0] [i_0]))) << (((((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [i_1 + 2]))) - (35)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)215)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1 + 1] [(unsigned char)5] [5ULL] [(_Bool)1])) & (((/* implicit */int) var_17))))) : (min((((/* implicit */long long int) arr_0 [i_1 - 3])), (-3942983392622200327LL)))))))) : (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(unsigned short)6] [i_1 - 1] [i_1 - 3] [(short)11] [i_1 - 3] [i_1] [i_1 - 4])) ? (((/* implicit */int) var_10)) : (arr_7 [i_0] [i_0]))) << (((((((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [i_1 + 2]))) - (35))) + (79)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)215)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1 + 1] [(unsigned char)5] [5ULL] [(_Bool)1])) & (((/* implicit */int) var_17))))) : (min((((/* implicit */long long int) arr_0 [i_1 - 3])), (-3942983392622200327LL))))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_8 [i_0 + 1] [(unsigned short)19] [(unsigned short)3] [i_1 + 2] [i_0])), (arr_5 [i_1])))), (arr_2 [i_0 + 1] [i_1 - 1])))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_11 [i_0 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 += ((unsigned short) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (arr_10 [i_7] [i_7] [i_7] [4] [i_7] [i_7]))))));
        arr_20 [i_7] = ((/* implicit */unsigned short) min((arr_18 [i_7] [i_7]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_7] [i_7])) > (((/* implicit */int) arr_18 [i_7] [i_7])))))));
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((-7960304576329203789LL), (3942983392622200333LL)))), (var_4)));
        arr_24 [i_8] [i_8] = ((((/* implicit */int) ((_Bool) min((var_6), (arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [11ULL]))))) ^ (((/* implicit */int) (_Bool)0)));
    }
    var_30 = ((/* implicit */unsigned short) var_7);
}
