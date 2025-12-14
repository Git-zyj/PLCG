/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208899
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = (~(((unsigned int) arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))) : (arr_0 [i_3])))))) ? (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) ^ (((((/* implicit */int) arr_4 [(signed char)5])) << (((((/* implicit */int) var_2)) - (12396))))))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0]))));
                        arr_12 [i_2] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(short)1] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) arr_11 [9U] [i_1] [9U] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 188974144U)) ? (arr_8 [i_2] [i_1] [i_1] [(unsigned char)0]) : (((/* implicit */int) (unsigned short)29557))))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1386613481U)) ? (4105993152U) : (4105993152U)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) max((var_12), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
        var_16 |= ((/* implicit */unsigned long long int) min((arr_14 [i_4] [i_4]), (((/* implicit */unsigned char) ((_Bool) ((188974144U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4])))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */short) max(((((_Bool)0) ? (((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_6] [i_5]))) : (var_6))) : (((((/* implicit */_Bool) (unsigned short)50662)) ? (((/* implicit */unsigned long long int) 926872625)) : (var_3))))), (((/* implicit */unsigned long long int) (+(4105993153U))))));
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 563560)), ((+(max((((/* implicit */long long int) arr_16 [i_6] [i_5])), (-3167619858911429967LL)))))));
                    var_18 = ((/* implicit */short) ((7718658333866248138LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))));
                    var_19 |= ((/* implicit */unsigned short) ((_Bool) arr_18 [i_7] [i_6]));
                }
            } 
        } 
        arr_24 [i_5] [i_5] = var_11;
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) var_12);
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (15621295005786449551ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_10)))))));
}
