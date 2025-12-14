/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235288
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1))))))) << (((((((var_1) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0)))))))) - (32844LL)))));
    var_13 *= ((((/* implicit */int) ((((/* implicit */int) ((var_7) < (var_2)))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)49918)) > (((/* implicit */int) var_10)))))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4))))) < (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (7471788766594027978LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) * (((/* implicit */int) var_5))))))) / (((((var_11) / (((/* implicit */long long int) 1344998109U)))) / (((5131713811215495964LL) / (var_11)))))));
                                var_15 ^= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63916)) && (((/* implicit */_Bool) var_0))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)0)))))) & (((/* implicit */int) ((((arr_13 [i_0] [i_2] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (var_2))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) 0U)) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36010))) + (0LL))))) * (((/* implicit */long long int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [(unsigned short)0])))) * (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)60477))))))))));
                        var_16 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_6))) * (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) << (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) & (((/* implicit */long long int) ((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1])) + (((/* implicit */int) arr_2 [i_1] [i_1] [i_2]))))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [11LL] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2] [i_6])) && (((/* implicit */_Bool) arr_8 [i_0] [12U] [12U] [i_1]))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_2] [(unsigned short)4] [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0]))))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_9 [i_0] [8U] [(_Bool)1] [i_6])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1))))))))));
                        arr_21 [i_0] [(unsigned short)6] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65535))))) != (((((/* implicit */long long int) var_2)) / (-7706077918425114326LL))))) && (((/* implicit */_Bool) ((((((var_6) / (((/* implicit */long long int) arr_8 [i_1] [i_0] [i_1] [i_1])))) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_5)) & (((/* implicit */int) var_0)))) - (8421))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_8))))))) - (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)60471)) + (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9)))))))));
}
