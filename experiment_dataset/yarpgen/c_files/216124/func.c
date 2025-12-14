/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216124
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
    var_11 = ((((/* implicit */_Bool) (signed char)51)) && (((/* implicit */_Bool) max((max((8561266719006295695ULL), (((/* implicit */unsigned long long int) 896LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1945297584)) ? (31LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2])))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2]))))) > (6546917727790615671ULL)));
                    arr_7 [i_1] [i_1] [i_2 - 2] = ((/* implicit */unsigned short) 11998987978434772103ULL);
                }
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? ((-(arr_0 [i_0]))) : ((~(arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((int) 700240772))), (((unsigned long long int) arr_10 [i_4] [i_4])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147221504)) ? (((arr_3 [i_4]) / (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)13)))))))));
                var_16 = ((/* implicit */unsigned short) ((((arr_0 [i_3 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))))) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) arr_3 [i_4])), (arr_1 [i_4])))));
                var_17 = ((/* implicit */unsigned short) ((11899826345918935945ULL) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_12 [i_3 + 1] [i_3 + 1]))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (16977249868580330596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_4])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_18 = 1490978552838986358ULL;
                            arr_18 [i_3] [i_4] [i_3] = ((/* implicit */long long int) (~(1490978552838986351ULL)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) min((11899826345918935953ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 2147483647)), (arr_15 [i_4] [i_4] [i_4] [i_4])))))))));
            }
        } 
    } 
}
