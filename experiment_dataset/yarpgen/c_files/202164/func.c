/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202164
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)-99))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) 17657426450768633707ULL);
        var_16 = ((/* implicit */long long int) min(((signed char)103), ((signed char)-99)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) max((min((arr_4 [i_0] [i_1] [i_2 + 1] [i_2 - 1]), (arr_4 [i_0] [i_0] [i_2 - 1] [i_2]))), (arr_4 [i_0] [i_0] [i_1] [i_2 - 1])));
                    var_17 = ((/* implicit */long long int) -1);
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((arr_0 [i_0] [i_1]) << (((arr_1 [4] [4]) - (554416486))))), (((/* implicit */long long int) arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((1700654961) ^ (arr_1 [i_0] [i_1])))))) : (max((((/* implicit */long long int) (_Bool)0)), (arr_2 [i_2 - 1] [i_1] [i_2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_14 [i_0] [i_0] [10] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) max((arr_8 [i_0] [i_3 - 2] [i_3 - 2]), (((/* implicit */unsigned int) (unsigned char)255))))), (var_9)));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_19 -= ((/* implicit */long long int) (signed char)-1);
                        var_20 -= arr_5 [i_4];
                        arr_18 [i_0] [i_3 - 1] [i_4] [i_5] = ((/* implicit */unsigned int) min((arr_13 [i_3] [i_5]), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3 + 1])) || (arr_11 [i_3 - 1] [i_3] [i_3 - 2]))))));
                    }
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_21 ^= ((/* implicit */long long int) arr_1 [i_6] [i_0]);
                        var_22 = 67106816;
                    }
                }
            } 
        } 
    }
}
