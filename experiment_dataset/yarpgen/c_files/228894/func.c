/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228894
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
    var_13 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) (unsigned short)63460)) ? (15766384327382967655ULL) : (2680359746326583961ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_5))) / (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-46))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        arr_9 [i_1] [i_1 - 2] = ((/* implicit */signed char) ((long long int) min((min((((/* implicit */unsigned long long int) var_2)), (var_3))), (((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_1])))))));
        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (arr_7 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [4])) | (((/* implicit */int) var_2)))))))) / (min((((unsigned long long int) 2680359746326583930ULL)), (((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_1 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (((-((~(((/* implicit */int) arr_12 [i_2])))))) + (((/* implicit */int) ((((/* implicit */_Bool) ((15766384327382967655ULL) % (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_2])) | (((/* implicit */int) (unsigned short)16382))))))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (unsigned short)7049)) % (((/* implicit */int) (signed char)-18))))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_20 [i_3 - 1] [i_5 + 2])))))));
                    arr_22 [9LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 + 2]))))) ? (((((/* implicit */int) ((unsigned char) var_10))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : (((((/* implicit */int) arr_14 [i_3 + 1])) * (((/* implicit */int) arr_14 [i_3 - 2]))))));
                    var_17 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3530540246U)) && (((/* implicit */_Bool) (signed char)-18)))))) % (min((2680359746326583945ULL), (((/* implicit */unsigned long long int) arr_27 [(signed char)17] [i_6] [i_5 + 1] [i_4] [i_6] [i_3]))))))));
                                arr_30 [i_3] [i_4] [i_6] [i_6] [i_4] [i_4] [i_5 + 1] = ((/* implicit */unsigned short) min((max((arr_27 [i_7] [i_6] [i_6] [i_5 - 1] [i_6] [i_3 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) (unsigned short)65535))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (signed char)17)))))));
                            }
                        } 
                    } 
                }
                arr_31 [i_3] = ((/* implicit */unsigned int) var_10);
                arr_32 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (min((((/* implicit */unsigned long long int) var_9)), (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                arr_33 [i_3 + 1] [2ULL] [i_4] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
}
