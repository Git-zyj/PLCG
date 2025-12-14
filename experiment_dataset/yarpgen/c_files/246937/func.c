/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246937
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
    var_11 -= ((/* implicit */unsigned char) max((max((((/* implicit */int) var_5)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_10)))))), (((/* implicit */int) ((short) (~(((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(unsigned char)11] [22U] [i_3] [15ULL] [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_0])) : (((/* implicit */int) var_4))))))))));
                                var_12 = ((/* implicit */_Bool) (unsigned char)109);
                                var_13 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_19 [i_5] [i_5] [i_2] [i_5] [i_6] = ((/* implicit */long long int) arr_8 [i_0] [i_5 + 2] [i_5 + 2] [i_1]);
                                arr_20 [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_11 [(short)10] [i_6] [i_2] [i_6] [i_6 - 1] [(unsigned short)14] [i_6 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) || (((/* implicit */_Bool) (unsigned char)120))))) : (((/* implicit */int) ((-7570402348121180292LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))))))))), ((+(min((8744644899805702996ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_5] [i_6]))))))));
                                arr_21 [i_6] [i_5 + 1] [i_2] [(unsigned short)8] [i_6] &= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */int) var_6))))) * (arr_10 [i_6] [i_1] [i_2] [i_1] [i_0]))) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) (unsigned char)7)))))));
                                arr_22 [i_5] = ((/* implicit */signed char) max((max((((0ULL) >> (((arr_6 [i_1] [20ULL]) + (832493935852392337LL))))), (((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_5] [i_2] [i_1] [i_1] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30357)))))))), (min(((-(arr_5 [i_1] [i_2] [i_6 - 2]))), (((/* implicit */unsigned long long int) arr_7 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_6 + 2]))))));
                                arr_23 [i_0] [i_5] = ((/* implicit */int) (unsigned char)219);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
