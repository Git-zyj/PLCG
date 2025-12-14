/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230681
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = arr_1 [(unsigned short)6];
                var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_5 [(short)11] [11LL])) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [(short)4] [i_1] [i_1])))))) | (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-52)) - (((/* implicit */int) arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_5 [i_0] [(short)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (signed char)-52))))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) != (((/* implicit */int) var_5))))))))));
                                arr_14 [i_2] [i_1] [i_1] [i_2] [i_1] = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-38)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [2ULL] [i_4])) && (((/* implicit */_Bool) arr_0 [4U])))))))) ? (((max((((/* implicit */unsigned int) var_12)), (arr_10 [11] [i_1]))) << (((max((arr_7 [i_4] [(signed char)11] [i_2] [i_2]), (((/* implicit */unsigned long long int) (signed char)52)))) - (6830364845527362623ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45)))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-38)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [2ULL] [i_4])) && (((/* implicit */_Bool) arr_0 [4U])))))))) ? (((max((((/* implicit */unsigned int) var_12)), (arr_10 [11] [i_1]))) << (((((max((arr_7 [i_4] [(signed char)11] [i_2] [i_2]), (((/* implicit */unsigned long long int) (signed char)52)))) - (6830364845527362623ULL))) - (8058341447958235079ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))))));
                                arr_15 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_0 + 2] = var_10;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)51)), (var_11))), (((((/* implicit */_Bool) (signed char)-51)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */int) (signed char)-25)) : (((((/* implicit */int) (unsigned char)46)) << (((var_2) + (350976074)))))));
}
