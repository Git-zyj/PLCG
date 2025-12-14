/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248959
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) var_9)), (4398046380032ULL))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = min((((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 3] [i_1 + 2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (max((4398046380032ULL), (arr_1 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) - (4398046380032ULL))));
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) (((!(((/* implicit */_Bool) (short)9147)))) || (((/* implicit */_Bool) max((arr_4 [i_4] [i_2] [i_1]), (arr_5 [i_1] [i_1]))))))), (((int) min((((/* implicit */unsigned long long int) var_16)), (arr_2 [i_1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_5 [i_1] [i_0]))))) : (max((((/* implicit */unsigned long long int) (unsigned char)31)), (arr_8 [i_1] [i_1] [i_0]))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_7 [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_6 + 3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6 - 1]))))))));
                            arr_19 [i_0] [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446739675663171583ULL)))))) : (((((/* implicit */_Bool) (-(5227740015688391296LL)))) ? (max((1375590080209295447LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_0] [i_1 + 1] [i_5] [i_6] [i_5]), (var_15)))))))));
                            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_1] [1LL] [i_6]), (var_13)))) ? (((/* implicit */int) max(((unsigned char)241), (arr_4 [i_0] [i_0] [i_6])))) : (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_1] [i_0] [i_6])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_22 = (!(max(((_Bool)0), ((!(((/* implicit */_Bool) arr_24 [i_7] [i_8])))))));
                            var_23 = ((/* implicit */unsigned char) min((((0ULL) * (((/* implicit */unsigned long long int) -3779327516106137634LL)))), (((/* implicit */unsigned long long int) ((unsigned char) arr_28 [i_7] [i_8] [i_9] [i_10])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) (-((-(((int) var_6))))));
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)0))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        for (int i_13 = 2; i_13 < 15; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                {
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13] [i_13])) ? (max((((/* implicit */unsigned long long int) arr_28 [i_14] [i_13 - 1] [i_13] [i_12])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12017))) + (18446739675663171589ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (_Bool)0))))))));
                    arr_40 [i_12] [i_12] [i_12] [i_12] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (arr_30 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 1]));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_36 [i_13 + 1] [i_13 - 2]), (((/* implicit */unsigned long long int) 2277255768563206862LL))))) ? (min((arr_36 [i_13 + 1] [i_13 + 1]), (((/* implicit */unsigned long long int) (unsigned char)94)))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_36 [i_13 - 1] [i_13 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */short) var_12);
                        var_29 += ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) arr_31 [i_15] [i_15] [i_13 - 2] [i_13]))))));
                    }
                }
            } 
        } 
    } 
}
