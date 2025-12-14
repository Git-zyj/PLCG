/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54811
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
    var_18 = (-(((unsigned int) max((var_12), (((/* implicit */long long int) 4129337640U))))));
    var_19 = (unsigned short)1920;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 16226108745920927314ULL)) || (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) arr_3 [i_1])))));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_2] [i_4] = ((unsigned int) (signed char)96);
                                arr_16 [i_2] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) var_17)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_3))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_5])) || (((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_2] [i_1] [i_0])))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((var_12), (((/* implicit */long long int) -67108864))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)233)), (var_12)))) ? (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64596))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned short) var_17);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)79), ((signed char)95)))) ? (max((1179886458), (arr_14 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (max((arr_14 [i_7] [i_7 - 1] [i_7] [4] [i_7 - 1]), (arr_14 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))));
                                var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))), (((long long int) (~(arr_20 [i_0] [i_0] [i_2]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) var_14);
                }
                var_27 = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0] [2U] [i_0] [i_0]);
            }
        } 
    } 
}
