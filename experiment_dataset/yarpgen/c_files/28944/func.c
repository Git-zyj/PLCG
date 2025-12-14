/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28944
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((~(max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (arr_1 [i_0]))))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47686))))) ? (((((/* implicit */_Bool) (~(-1982933118)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (var_6)))) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_0 [i_0])));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17858)) + (((((/* implicit */_Bool) max((var_14), (var_10)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) (unsigned short)47679)) | (((/* implicit */int) (unsigned short)47672))))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (signed char)-77)), (4937520563694392817ULL)))))) ? (((/* implicit */int) max((max((arr_4 [i_0]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) (unsigned char)2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (arr_0 [i_1])))) ? (((/* implicit */int) arr_5 [(unsigned char)12] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)3)))))))));
                    var_22 *= max((((/* implicit */unsigned short) ((unsigned char) max((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */short) arr_3 [i_0] [i_0])))))), (arr_4 [i_0]));
                    var_23 = ((/* implicit */short) max(((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))), (((/* implicit */int) min((arr_6 [i_0] [(unsigned char)7] [i_2]), (arr_6 [17] [i_1] [i_2]))))));
                }
                for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    arr_9 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((arr_1 [i_0]) == (arr_8 [i_0] [i_0] [i_0] [i_3]))))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) - (((/* implicit */int) (unsigned short)49866)))) : ((-((+(((/* implicit */int) (unsigned short)0))))))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) && (((/* implicit */_Bool) 18446744073709551615ULL))))), ((+(((/* implicit */int) (unsigned char)127))))))) ? (((/* implicit */int) max(((unsigned short)49866), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49866)) || (((/* implicit */_Bool) 7383332638394804389LL)))))))) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_3 [(unsigned char)14] [i_3])) << (((var_2) + (2978768023475115795LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [15])) || (((/* implicit */_Bool) var_12))))))));
                    }
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) (~(7383332638394804389LL)))) || (((/* implicit */_Bool) arr_4 [i_3 + 1]))))), (((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (unsigned short)17841)) : (((/* implicit */int) var_10)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_4)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_26 += ((/* implicit */unsigned char) ((var_4) - (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)49872)) * (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
        arr_15 [i_5] [i_5] = ((/* implicit */long long int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), ((((+(((/* implicit */int) arr_2 [i_5])))) ^ (((/* implicit */int) arr_13 [i_5]))))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (arr_1 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [(signed char)5] [i_5]))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_5] [i_5] [(unsigned short)16])) < (((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))))));
    }
    for (int i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)16])) ? (((var_7) ^ (((/* implicit */int) arr_2 [(unsigned short)20])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6])) && (((/* implicit */_Bool) arr_11 [i_6] [16ULL])))))))) ? (((/* implicit */int) ((unsigned short) (~(arr_0 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6 - 1])))))));
        arr_18 [i_6 - 1] = ((/* implicit */unsigned short) max(((+(max((((/* implicit */int) var_3)), (arr_0 [(signed char)6]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6] [(unsigned char)16])))))));
    }
}
