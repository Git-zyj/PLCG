/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207620
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [(unsigned short)9]);
        var_18 &= ((/* implicit */unsigned int) (unsigned short)4);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 += ((/* implicit */short) var_0);
        arr_5 [2ULL] = ((/* implicit */unsigned char) ((unsigned int) (-(arr_4 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_16 [14U] [(short)9] [i_2] [5U] [(unsigned char)1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (unsigned short)26)) ? (arr_14 [(unsigned char)0] [8U] [0ULL] [4U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4)))))))) ? (((((/* implicit */unsigned int) 688911504)) | (var_10))) : (((/* implicit */unsigned int) -688911515)));
                                var_20 = 468352931;
                                arr_17 [i_2] [(signed char)1] [(unsigned char)3] [11U] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_15 [3] [12U] [(signed char)2] [(_Bool)1])) * (((/* implicit */int) (signed char)-45)))), ((~(((/* implicit */int) arr_8 [4U] [(_Bool)1] [i_2]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)8] [(short)13] [i_2])) ? (arr_6 [i_4]) : (((/* implicit */int) arr_8 [(signed char)14] [i_3] [i_2])))))));
                                var_21 += ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_13 [9] [(unsigned char)10] [(signed char)3] [i_4] [13LL]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [6U]))))), (min((((/* implicit */long long int) 688911504)), (((((/* implicit */_Bool) var_10)) ? (arr_10 [(signed char)6] [(signed char)14] [(short)10] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [2U] [(unsigned short)14] [(short)2] [2U] [(unsigned short)2] [i_3])))))))));
                            }
                        } 
                    } 
                    arr_18 [(_Bool)1] [i_2] [(signed char)6] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) arr_7 [9U])), (3920278921U)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (min((arr_22 [(short)19] [(unsigned char)6]), (((/* implicit */long long int) var_9)))) : (min((((/* implicit */long long int) (short)-32752)), (arr_22 [(short)4] [(signed char)9])))))) ? (((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (var_11) : (((/* implicit */int) arr_20 [i_7])))) : (((/* implicit */int) min(((signed char)-45), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_2)))))))));
                var_23 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_19 [11U]))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)45), ((signed char)-45))))) & (((arr_25 [(signed char)5] [(short)2] [(signed char)6]) << (((688911512) - (688911498))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_26 [i_6] [(_Bool)1]))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [(unsigned char)17])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_25 [(signed char)16] [(short)13] [4LL])) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (_Bool)1)))))) <= (max((((/* implicit */int) arr_21 [7])), (arr_23 [(unsigned char)19] [(short)17])))));
                        }
                    } 
                } 
                var_26 += min((((((/* implicit */int) arr_21 [i_6])) / (((/* implicit */int) var_0)))), (((/* implicit */int) var_9)));
            }
        } 
    } 
}
