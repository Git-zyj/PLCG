/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234673
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_5), (((max((var_12), (((/* implicit */unsigned long long int) -6602878414090560254LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_17)) | (((/* implicit */int) arr_0 [i_0])))) << (((((/* implicit */int) ((short) (unsigned char)88))) - (67)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 + 1])), (arr_6 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2]))))));
                        var_21 &= ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) arr_6 [10ULL] [(unsigned char)3] [i_1] [0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [(unsigned char)13] [i_1] [i_2] [(signed char)2])))), (((/* implicit */int) min((var_9), (arr_8 [i_0] [5ULL] [(short)10] [i_2] [i_3]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)12] [i_0] [i_2 - 2]))) : (((arr_7 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) >> (((/* implicit */int) min((arr_13 [i_2 + 2] [i_2 - 2] [i_4 + 1] [i_4 + 1]), (arr_5 [i_1] [i_2 + 1] [i_4 + 1] [i_4 + 1]))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 + 2] [i_2])) && (((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_4]))))) != (((((/* implicit */_Bool) arr_11 [(unsigned short)4] [i_1] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_11 [(unsigned char)6] [(short)8] [i_2 + 2] [i_4])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [(_Bool)1]))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2 + 1] [i_2 - 2] [i_2]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_13)) & (((/* implicit */int) var_1))))))) ? ((((((_Bool)1) && (((/* implicit */_Bool) var_13)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */unsigned char) ((var_7) || (((/* implicit */_Bool) 1850459499191804067ULL)))))))))));
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) ^ (var_18))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-22))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9))))))))))));
}
