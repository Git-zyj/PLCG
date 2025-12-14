/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234968
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31492)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_3 - 1] [i_1 - 1] [i_2]))))) : (((/* implicit */int) arr_0 [2ULL] [i_3 - 1]))));
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_1 + 2] [(unsigned short)1] [i_3 - 1] [i_3 - 1])) ? (arr_9 [i_1 - 2] [i_1] [i_3 - 1] [i_3 - 1]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_3 - 1] [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_23 ^= min((var_4), (((short) arr_15 [i_1] [i_1] [i_1])));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((arr_14 [i_5 - 1] [i_5] [i_5 + 2] [i_5]) > (arr_14 [i_5 + 2] [i_5] [11] [i_4]))) ? (var_6) : (((((/* implicit */_Bool) (-(0U)))) ? (max((arr_9 [i_1 - 1] [i_1 - 1] [i_4] [0]), (((/* implicit */unsigned long long int) var_14)))) : (var_2)))))));
                            arr_16 [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)31493)) && (((/* implicit */_Bool) 1853251136))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (-542131945) : (((/* implicit */int) var_11)))))), (((/* implicit */int) (short)-32757))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (var_13) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))))) ^ (((((unsigned int) var_17)) & (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-31493), (((/* implicit */short) var_5)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 4; i_6 < 10; i_6 += 2) 
    {
        for (int i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_26 = (+(1746431279));
                    var_27 *= (+(((((/* implicit */_Bool) max((arr_6 [i_6] [i_6] [8] [i_6]), (((/* implicit */unsigned int) var_8))))) ? (((int) arr_1 [i_6] [i_7 - 1])) : ((+(((/* implicit */int) arr_8 [(short)4] [i_7] [i_8 - 1] [4LL] [i_6 - 4])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        for (int i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) (-(((unsigned long long int) (+(((/* implicit */int) arr_28 [3ULL] [3ULL] [i_8 - 1] [i_6] [i_6 - 2] [i_6])))))));
                                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [5U] [5U] [i_9] [i_10]), (arr_2 [i_6 + 2] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) 650024447)))))) : (min((((/* implicit */long long int) arr_20 [i_8])), (arr_18 [i_9])))))) ? (min((650024447), (1992807907))) : (((/* implicit */int) var_15))));
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 - 4])) ? (arr_20 [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31492)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) + (3020812371U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_7 - 1] [i_10 - 1])))))) ? (((/* implicit */unsigned long long int) ((int) arr_28 [3U] [i_7 + 4] [i_7 + 4] [3U] [i_10] [i_7 - 1]))) : (arr_11 [(unsigned short)15]))))));
                                var_31 = ((/* implicit */unsigned char) (unsigned short)53774);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [4U] [i_8 - 1] [11U]);
                                var_33 ^= (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_6] [i_7])), (var_13))))));
                                var_34 ^= ((/* implicit */unsigned long long int) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_8] [i_11] [i_12 - 1]))) + (arr_24 [i_6 + 2] [i_7 - 1]))), (min((var_0), (((/* implicit */unsigned int) arr_22 [(unsigned short)2] [i_8] [i_7])))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11762)) | (((/* implicit */int) var_14)))))));
                                var_35 *= ((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) arr_17 [i_11])) : (arr_33 [i_6] [i_6] [i_6 - 4] [i_6 - 4] [i_6] [i_6])));
                                var_36 = ((/* implicit */unsigned long long int) arr_27 [i_6] [(_Bool)1] [i_8] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
