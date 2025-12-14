/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207848
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_1] [(signed char)1]) : (arr_2 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) : (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))), (((/* implicit */unsigned long long int) var_9))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_1])))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) -310342255)) ? (1959240020) : (var_11))))), (((/* implicit */int) var_4))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_15 *= ((/* implicit */unsigned char) arr_1 [i_2]);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (unsigned short)34264))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2] [i_4])) ? (((/* implicit */int) ((_Bool) 1959240034))) : (((/* implicit */int) (short)29075))))) : (max((((/* implicit */unsigned long long int) var_13)), ((-(arr_3 [i_0] [i_2] [i_2])))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [(_Bool)1] [i_1] [i_2]);
                        var_18 *= ((((/* implicit */unsigned long long int) max((max((arr_1 [i_1]), (((/* implicit */int) (_Bool)1)))), (arr_0 [i_2] [i_2])))) & (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-89))))), ((+(var_8))))));
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [(short)9] [i_0] [i_5] [i_5] [11ULL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_1]))), (10804099670762547563ULL)));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (min((arr_16 [i_0]), (arr_0 [i_2] [i_2]))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_6]);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */unsigned long long int) arr_0 [i_1] [i_2])) ^ (min((6500324310626362687ULL), (((/* implicit */unsigned long long int) (signed char)40)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22359)) ? (((/* implicit */int) (short)1279)) : (((/* implicit */int) (unsigned short)22356))))))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_2] [(short)10] [8U] [i_6])))) / (max((arr_0 [i_0] [i_2]), (arr_0 [i_0] [i_2]))))))));
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1]))) : (((unsigned int) var_1))))) ? (((/* implicit */unsigned int) max((arr_6 [(unsigned char)5] [i_1] [0]), (arr_16 [4])))) : (((((/* implicit */_Bool) arr_19 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_5 [i_2] [i_1] [i_1] [i_1]))))))));
                    arr_20 [i_0] [3ULL] [i_1] [i_0] = ((/* implicit */unsigned char) 1959240043);
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((arr_3 [i_0] [10] [(short)7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_2])))))));
                }
            }
        } 
    } 
    var_25 += ((/* implicit */unsigned short) max((var_9), (var_10)));
}
