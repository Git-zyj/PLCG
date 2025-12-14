/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30722
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (-(-8922858207147629552LL)))) : (max((arr_3 [6U] [i_1]), (((/* implicit */unsigned long long int) var_5)))))));
                var_10 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_11 [i_2] = ((/* implicit */short) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1] [7]))))) ^ (((((/* implicit */_Bool) 1421012050U)) ? (((/* implicit */long long int) 3422379834U)) : (-1798076146511983220LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [6U] [i_2] [i_3] [i_3]))))))));
                                var_11 += ((/* implicit */short) (~(((/* implicit */int) var_4))));
                                var_12 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_1] [(signed char)3] [i_2] [i_1] [(unsigned char)17])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)20] [(unsigned char)20]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_8 [13ULL] [i_2] [i_2] [i_2] [i_2])))))) / (min((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_0] [i_4] [i_2])) != (arr_8 [8] [i_1 + 1] [i_1] [8] [i_1])))), ((~(((/* implicit */int) (unsigned short)65535))))))));
                                var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])) ? (((unsigned int) arr_3 [i_3] [i_2])) : (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) | (var_8))))), ((~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [5ULL])))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */short) ((max((((((/* implicit */_Bool) 5504003867524017282LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [8U]))) : (arr_7 [i_0] [i_0] [i_0] [i_0] [(short)12]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1] [i_1 - 1]))))))) <= ((+(((((/* implicit */unsigned int) 385179179)) * (1421012045U)))))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */int) var_8);
}
