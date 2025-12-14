/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227743
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
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)46395))) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2])))))));
                var_15 *= ((/* implicit */signed char) (unsigned short)19140);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-123)) ? (-8882916902642610227LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))), (((/* implicit */long long int) arr_1 [i_2]))));
                            arr_11 [i_0] [i_3] [i_2] [i_3 - 1] [i_0] [i_3] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46395))) : (-1LL))), (((/* implicit */long long int) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned char) var_8)))))))));
                            arr_12 [i_0] [i_3] [i_3] = ((/* implicit */signed char) arr_0 [i_2]);
                            var_17 = ((/* implicit */_Bool) (unsigned short)0);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_18 += ((/* implicit */unsigned long long int) min(((unsigned short)19140), (((/* implicit */unsigned short) (_Bool)0))));
                                arr_16 [i_0 + 3] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) (unsigned short)19140))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46395)))))) : (min((3871319300U), (((/* implicit */unsigned int) (short)2865)))))), (((/* implicit */unsigned int) (-(var_12))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 8; i_7 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~((-(3172175951460229419LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 + 3] [i_0 + 3]))))))))));
                                var_20 = ((/* implicit */unsigned short) ((1889028908) & (((/* implicit */int) (unsigned char)93))));
                                var_21 += max(((+(((/* implicit */int) arr_3 [i_1 - 1] [i_0 - 2])))), (arr_22 [i_0 - 2]));
                                var_22 = min((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_6] [i_7 + 2])) + (8996)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_1);
}
