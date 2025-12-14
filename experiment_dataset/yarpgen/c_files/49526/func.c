/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49526
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
    var_14 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) var_3);
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_11)));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_16 = ((((/* implicit */_Bool) var_2)) ? (var_3) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1333242329U)) ? (arr_0 [i_0 - 1]) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0LL)))) : (var_8))));
                    arr_9 [i_2] [i_0] [i_0 - 3] [i_0] = ((/* implicit */long long int) ((169877144155837022LL) == (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12))) <= (max((((/* implicit */unsigned long long int) var_4)), (17462122972939329953ULL)))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5256473305680013289LL)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) - (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) >= (var_3))))))) : (((/* implicit */unsigned long long int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_18 [(unsigned char)3] [i_2] [i_2 + 1] [i_2] [i_2] [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)137)) >> (((7505301128542732401LL) - (7505301128542732396LL)))));
                                arr_19 [i_2] [i_1] = ((/* implicit */unsigned int) arr_17 [i_4] [i_3] [i_2 + 1] [i_1] [i_0 - 3]);
                                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) < (-2097152LL)));
                                arr_20 [i_2] [(unsigned char)18] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(var_4)));
                }
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]))), (arr_3 [i_0 - 1] [i_0 - 3] [i_0 + 1])));
                arr_23 [i_1] = ((/* implicit */unsigned char) ((long long int) max((563808172396827364LL), (((/* implicit */long long int) ((var_1) - (4294967290U)))))));
            }
        } 
    } 
}
