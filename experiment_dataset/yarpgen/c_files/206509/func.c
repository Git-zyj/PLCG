/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206509
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((arr_3 [i_2]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_1])))) : ((-(var_18))))) : ((+((-(((/* implicit */int) (short)32764)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
                                arr_13 [11ULL] [i_0] [i_2] [6ULL] [i_4] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_9 [i_0] [9LL] [7U])) ? (8544217518210622328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */int) arr_0 [i_0]))))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [(unsigned short)6] [(signed char)11] [i_2] [i_3] [i_0])))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [(unsigned char)7] [i_1])))) ? (((((4210135416466380215ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) << (((((((/* implicit */int) var_15)) * (((/* implicit */int) arr_7 [i_2] [(signed char)8] [(signed char)8] [(signed char)2])))) - (206))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [(unsigned short)13] [(_Bool)1] [(unsigned short)13] [i_0])) ? (arr_10 [i_0] [11ULL] [i_0] [i_0] [i_0] [(signed char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_14);
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_9))));
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)231)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8544217518210622328ULL)) ? ((-2147483647 - 1)) : (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (var_5))))) : (min((var_0), (((/* implicit */long long int) var_2))))))));
}
