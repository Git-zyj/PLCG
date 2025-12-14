/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230708
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
    var_10 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_3] = ((/* implicit */int) (signed char)103);
                        arr_10 [i_2] &= ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */long long int) var_9))))), (arr_8 [i_0] [i_1])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_11 += ((/* implicit */int) min(((signed char)-111), ((signed char)64)));
                        var_12 = ((/* implicit */_Bool) ((2148132487U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_1 [(signed char)11])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1]))))), ((~(2146834811U))))), (max((((((/* implicit */_Bool) var_2)) ? (2393065902U) : (((/* implicit */unsigned int) var_2)))), (((4032985622U) % (((/* implicit */unsigned int) 1816520884))))))));
                                arr_20 [i_6] [i_6] [16ULL] [i_6] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_2] [i_1] [i_0])) ? (((min((4745769732037459682ULL), (((/* implicit */unsigned long long int) (unsigned char)119)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5] [i_2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_2] [i_2] [(unsigned char)20] [i_2] [i_2] [(unsigned char)20])), (2148132487U))))))))));
                                var_14 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2587717691U)) ? (9197535065652332587LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1] [(unsigned short)9] [11LL]))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_13 [i_0] [(unsigned char)15] [i_2] [i_5] [i_0] [(unsigned char)15])) : (var_5))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_4 [i_0] [i_0] [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))))) ? (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_1])) : (arr_1 [i_0]))), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
    } 
}
