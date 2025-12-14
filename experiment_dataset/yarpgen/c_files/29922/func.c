/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29922
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_0 - 2])) ? (arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_2 + 1])))));
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [18LL] [i_2 + 3] [i_0 - 1] [i_3]))) ^ (var_6)));
                        var_12 -= ((((/* implicit */unsigned long long int) arr_4 [i_0 - 1])) | (arr_2 [i_0 - 1]));
                        var_13 |= ((((/* implicit */_Bool) arr_6 [(unsigned char)7] [i_0] [(short)18] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)17] [i_0])) : (((/* implicit */int) arr_8 [i_2] [8ULL] [i_2 - 3] [i_2] [i_2 + 3])));
                        arr_10 [i_2 + 2] [i_2] [i_2 + 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((arr_1 [i_2 + 3]) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 + 3]))));
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0 - 2])) ? (arr_3 [i_0]) : (arr_4 [i_0 - 1])))) ? (((/* implicit */int) ((arr_3 [20U]) <= (((/* implicit */long long int) 3565342557U))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) (signed char)30)))))));
        }
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_15 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_16 = ((/* implicit */unsigned short) ((arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1] [i_5 - 1]) - (arr_7 [i_5 + 2] [i_4] [i_0 - 2] [i_6])));
                            var_17 = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_6 + 1] [i_5 + 2]));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1]))) != (arr_17 [i_6 + 1] [i_0 - 1] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            arr_20 [i_4] &= ((/* implicit */short) ((arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) > (((/* implicit */unsigned long long int) arr_4 [i_4]))));
        }
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            arr_23 [i_0] = ((/* implicit */unsigned short) ((arr_19 [i_8 + 2]) ? (arr_4 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8 - 1])))));
            arr_24 [(unsigned short)15] = ((/* implicit */_Bool) (unsigned short)8191);
            var_19 &= ((/* implicit */signed char) arr_13 [(unsigned char)9] [(unsigned char)9] [i_8]);
        }
        var_20 = ((/* implicit */_Bool) (unsigned char)255);
    }
    var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_2)))) << ((((-(((/* implicit */int) var_7)))) + (14211)))))) ? (((var_4) << (((/* implicit */int) ((unsigned char) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_2))))) : (var_4)))));
    var_23 = ((/* implicit */short) min((var_1), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)17)))))))));
}
