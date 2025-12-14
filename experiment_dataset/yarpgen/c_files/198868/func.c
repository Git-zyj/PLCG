/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198868
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
    var_12 = ((2147483641) / (1163263185));
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) var_9))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4914649206267606038ULL)) ? (((/* implicit */int) var_6)) : (1163263185)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_3)) : (var_8))) : (((/* implicit */long long int) 2147483641)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) (+(((int) (unsigned char)0))))) : (arr_8 [i_0] [i_1] [i_1])));
                    var_15 = ((/* implicit */long long int) min((min((4914649206267606038ULL), (var_2))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) -1290589643)) : (var_5))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 13532094867441945601ULL)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) (((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))) - ((+(arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483631)) / (((((-1464904218199104509LL) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1]))))) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))))));
                        arr_12 [i_0] = ((/* implicit */int) (~(1464904218199104507LL)));
                        arr_13 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) -553322531);
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
