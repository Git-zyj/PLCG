/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235852
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [(unsigned char)15] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((max((arr_8 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) << (((((/* implicit */int) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (signed char)120)))))))) + (157)))));
                                arr_15 [i_4] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) (short)19200);
                                var_18 = ((/* implicit */short) ((((586987386U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)19200)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1]))))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0] [4U]))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [0ULL] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [1ULL] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (((((/* implicit */_Bool) 138506475U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3074)))))))) ? (((/* implicit */long long int) (((-(var_12))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (min((min((((/* implicit */long long int) (signed char)123)), (72057594037927935LL))), (((/* implicit */long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]) ? (((/* implicit */int) (short)-19200)) : (((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1] [i_2 - 2] [i_1]))))))))))));
                    var_21 = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3325892854295636390LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (arr_6 [i_1] [i_1]))))))));
                    var_22 = ((/* implicit */unsigned int) arr_2 [i_2]);
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_0)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) var_8)) & (((/* implicit */int) var_10))))))) : (var_12));
    /* LoopNest 2 */
    for (unsigned short i_5 = 4; i_5 < 13; i_5 += 3) 
    {
        for (int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                var_24 &= ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) ((arr_0 [i_5]) ? (((/* implicit */int) arr_11 [i_5] [(short)16] [i_5] [(short)16] [i_6] [12ULL])) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_5 - 4] [i_6 + 2] [i_5 - 4] [i_5]))))), (arr_3 [i_5] [i_6 - 1]))), (((/* implicit */unsigned int) arr_16 [i_5] [i_6 + 3]))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(signed char)11])) && (((/* implicit */_Bool) (-(((/* implicit */int) min((var_1), (((/* implicit */short) arr_24 [i_5]))))))))));
                                arr_28 [i_9 + 2] [i_8] [i_5] [i_8] [i_5] [i_6 + 4] [i_5] = ((/* implicit */_Bool) arr_27 [i_5 + 4] [i_6 + 1] [i_5] [i_9 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) != (var_0));
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_32 [1ULL] [i_10] = ((/* implicit */_Bool) min((((var_0) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(_Bool)1])) ? (((/* implicit */int) arr_29 [i_10])) : (((/* implicit */int) (short)19200))))))), (((/* implicit */unsigned long long int) var_10))));
        arr_33 [i_10] = ((/* implicit */unsigned short) arr_29 [i_10]);
    }
}
