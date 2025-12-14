/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226606
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 111072007452987101ULL))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-121)), (((((/* implicit */_Bool) max(((signed char)64), ((signed char)117)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1])))))) : (arr_7 [i_2] [i_3 + 3] [i_3] [i_3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_6)))) | (((/* implicit */int) min(((signed char)121), (var_8))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))))))) : (((/* implicit */int) ((unsigned char) ((var_2) & (((/* implicit */unsigned long long int) arr_3 [i_5]))))))));
                                arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((arr_9 [i_0] [i_0] [i_2] [i_2] [i_6] [i_5 - 1]), (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
                                arr_18 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) * (max((((/* implicit */long long int) (~(arr_15 [i_2] [(unsigned short)9] [i_1] [i_2])))), (((((/* implicit */long long int) var_11)) / (var_7)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) var_4);
                    var_14 = ((/* implicit */unsigned int) 651307194054893341ULL);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            {
                                arr_26 [(unsigned short)14] [7LL] [i_2] [i_2] [i_2] [(unsigned short)14] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_2] [i_7 + 1] [i_7 + 1] [i_7 + 3]) >> (((((/* implicit */int) (signed char)120)) - (116)))))) || (((/* implicit */_Bool) min((arr_15 [i_2] [i_7 + 2] [i_7 + 2] [i_7 + 4]), (arr_15 [i_2] [i_7 + 2] [i_7 + 2] [i_7 + 1]))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_15 [i_2] [i_7 + 1] [i_7 + 1] [i_7 + 3]) + (2147483647))) >> (((((/* implicit */int) (signed char)120)) - (116)))))) || (((/* implicit */_Bool) min((arr_15 [i_2] [i_7 + 2] [i_7 + 2] [i_7 + 4]), (arr_15 [i_2] [i_7 + 2] [i_7 + 2] [i_7 + 1])))))));
                                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = ((/* implicit */int) min((var_10), (((/* implicit */unsigned int) (((((~(((/* implicit */int) (signed char)78)))) + (2147483647))) >> (((((((((/* implicit */int) (signed char)-121)) + (2147483647))) << (((var_2) - (12928851994971876959ULL))))) - (2147483508))))))));
}
