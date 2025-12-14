/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215403
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
    var_15 = ((/* implicit */unsigned long long int) (signed char)15);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((unsigned short) 16769024);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) 298122731)), (var_8))))) & (max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_2] [8ULL] [i_0]))))), (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_8 [i_2]))))))));
                                arr_16 [i_0] [i_1] [i_2] [(unsigned short)12] = ((((/* implicit */_Bool) ((unsigned int) (signed char)-78))) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                                var_17 = ((/* implicit */unsigned int) max((arr_3 [i_0] [i_0]), (min(((~(arr_3 [i_0] [i_4]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33549))))))));
                                var_18 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_0 [1] [i_3])), ((+(1481859268)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((int) min((((/* implicit */long long int) min(((unsigned short)31990), (((/* implicit */unsigned short) var_11))))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (var_14) : ((-9223372036854775807LL - 1LL)))))));
                                var_20 += ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 254)), (((unsigned int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-82))))) : (16769001));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (signed char)-99);
    var_22 = ((/* implicit */signed char) max((((var_8) * (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)33560)), (2147483647)))))), (((/* implicit */unsigned long long int) min(((-(var_3))), (((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (unsigned short)31953)) : (((/* implicit */int) (_Bool)1)))))))));
}
