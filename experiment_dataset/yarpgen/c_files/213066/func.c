/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213066
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
    var_10 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(-1686691436)))), (var_8)));
    var_11 = ((/* implicit */unsigned int) min((min((((var_1) + (var_8))), (((/* implicit */unsigned long long int) (signed char)-70)))), (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_12 = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) var_7)))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 9223372036854775807LL))))))));
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_4 [4LL] = ((/* implicit */long long int) arr_1 [(short)17] [i_0 + 1]);
        arr_5 [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) arr_0 [i_0 + 1])))))) % (((7969138894630291806ULL) / (7969138894630291806ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)13544)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23607))) : (var_4)))))) & (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_8 [i_1]))), (arr_8 [6ULL])))));
        arr_10 [i_1] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_7 [i_1]))))), (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (10477605179079259796ULL))))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned int) 7969138894630291806ULL))))));
        var_15 = ((/* implicit */short) max(((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1])), (var_6)))))), (((/* implicit */int) arr_6 [i_1]))));
        arr_11 [i_1] = ((/* implicit */signed char) (unsigned char)237);
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        arr_14 [i_2 - 1] = ((/* implicit */_Bool) (unsigned char)148);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_2 - 1] [i_3] [i_2 - 1]))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_13 [i_2 - 1] [i_3]))))) ? (arr_17 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4139308422779976312LL))))));
            arr_18 [i_3] [(short)14] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [17ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))) : (var_7))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3])) || (((/* implicit */_Bool) arr_13 [i_2] [i_3]))))))));
            var_18 = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2 - 1] [i_4 - 1] [(_Bool)1] [i_4] [i_4]))));
                            arr_27 [i_6] [14] [i_3] [i_6] [i_6] [i_6] = ((((/* implicit */int) arr_22 [i_2 - 1] [i_3] [i_4 - 1])) + (((/* implicit */int) ((unsigned char) arr_21 [i_2 - 1] [i_3] [i_3] [i_5]))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [(_Bool)1] [i_2] [(signed char)21] [i_2] [i_2] [(unsigned char)10] [i_7])) << (((var_9) - (4651204490844998360ULL)))));
            var_21 = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned char)0)))));
            var_22 = ((/* implicit */unsigned short) (~(2906526428U)));
        }
    }
}
