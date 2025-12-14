/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194971
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
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)119);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned short)35228))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((((/* implicit */int) (unsigned char)79)) * (((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))) : (((/* implicit */int) max((arr_2 [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_2])))))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_7))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : ((-(((((/* implicit */int) arr_2 [i_0] [i_1])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((int) ((unsigned int) (~(var_2)))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_10)) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_17))))) * (((/* implicit */long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */int) max((((/* implicit */short) (unsigned char)110)), (arr_4 [i_4] [i_4] [i_4]))))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))));
                    var_25 |= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13564))) : (arr_9 [i_0] [i_4] [(unsigned char)9]))) >> (((arr_0 [i_3]) - (13599566102183496993ULL))))), (((/* implicit */long long int) (unsigned short)65522))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])) <= (((((/* implicit */unsigned long long int) 9223372036787666944LL)) | (arr_5 [i_0] [i_0] [i_0])))))), (1678598174)));
        arr_15 [i_0] [i_0] = ((/* implicit */short) var_19);
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_27 |= ((/* implicit */signed char) var_9);
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 7891249318795205636ULL))));
    }
}
