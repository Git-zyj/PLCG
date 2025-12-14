/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26145
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 2] = ((/* implicit */unsigned long long int) ((short) min((((unsigned long long int) var_17)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)21092)) / (((/* implicit */int) var_11))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) ((signed char) arr_7 [i_0] [i_0] [i_0 - 3] [i_0 + 1]));
                    var_19 = 5815711587402879779LL;
                    arr_9 [i_0] [i_0] [(signed char)12] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)31518)) > (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                }
                for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3 + 1] [i_3 - 2] [i_0 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_7 [i_0] [i_1] [i_3] [i_3])))))) : (((/* implicit */int) ((short) max((arr_12 [i_0] [i_1] [i_3]), (arr_8 [i_4] [i_3] [i_1])))))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_0] &= ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                        arr_18 [(_Bool)1] [(_Bool)1] [i_3] [i_3 + 2] [i_5] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned long long int) (short)3337)), (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [i_5]), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))))))) ? (arr_12 [i_3 + 1] [i_3] [i_5 - 1]) : (((arr_8 [i_3 + 4] [i_3 + 4] [i_3 - 3]) / (arr_8 [i_3 + 4] [i_3 + 4] [i_3 - 3])))));
                        arr_19 [i_0] [3ULL] [i_3] [i_5] = ((/* implicit */unsigned char) ((((max((arr_8 [i_0 - 3] [i_0 - 3] [(signed char)13]), (arr_8 [i_0 - 3] [i_0 - 3] [i_5]))) + (2147483647))) << (((var_6) - (3881840733U)))));
                        var_21 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */short) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_9))))), (arr_3 [i_3] [i_1]))));
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) arr_10 [i_3] [i_3] [i_3] [i_3]);
                        var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_7] [i_0] [i_7] = (-(((/* implicit */int) ((signed char) (_Bool)1))));
                        var_23 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_3 + 4] [i_0 + 1]);
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) min((arr_25 [i_8]), (((unsigned int) 17091720889617616594ULL))));
                    arr_31 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (short)-27764);
                    arr_32 [i_0 - 1] [i_0 - 1] [i_8] = ((/* implicit */unsigned char) (((~(arr_8 [i_0] [i_1] [i_8]))) < (arr_7 [i_0 - 1] [i_1] [i_8] [i_8])));
                }
                arr_33 [(unsigned short)11] [(signed char)0] |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) var_16)) <= (((unsigned long long int) (short)-4345)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_12);
}
