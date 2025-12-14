/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224026
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) < (398263416U)))), ((~(var_4)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)38380))))))) : (min((((unsigned int) var_9)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27152)) ? (((/* implicit */int) (unsigned short)27171)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) var_6);
                        arr_12 [(short)8] [(short)8] [i_2 + 1] = ((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 + 1] [i_2 - 1] [i_3 + 1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_18 [i_5] [11] [i_5] [i_5] = ((/* implicit */unsigned short) max((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [(unsigned short)7] [i_4]))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27182))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_5 - 1])) ? (((/* implicit */int) arr_4 [i_5] [i_4] [i_0] [i_0])) : (((/* implicit */int) var_0))))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_5] [i_4] [i_0]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) min(((unsigned short)38380), ((unsigned short)16463)))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_14 [i_0] [i_0]) : (arr_0 [i_5])))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49070)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)0))))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)12])) ? (min((var_5), (((/* implicit */long long int) (short)10247)))) : (((/* implicit */long long int) (~(arr_14 [i_0] [i_0]))))))));
        var_17 = ((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
    }
}
