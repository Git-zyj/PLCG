/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34647
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (-((-(arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((short) arr_1 [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) (+((-(max((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(min((arr_0 [i_1]), (((/* implicit */unsigned int) arr_5 [i_1]))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_17 = max((((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [i_3])))) / (arr_10 [i_2 + 1] [i_2 + 1]))), (((/* implicit */int) (_Bool)1)));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (~(3299187259U)));
                                arr_20 [i_2 - 1] [i_3] [i_4 + 1] [i_2 - 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_14 [i_3] [i_4] [i_5] [i_6]), (((/* implicit */unsigned int) arr_1 [i_6])))), (max((arr_12 [i_5]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((unsigned int) max((16ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483647)))) ? (arr_17 [i_4] [i_4] [i_3] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_15 [i_6] [(unsigned char)7]) : (((/* implicit */int) arr_8 [i_5])))))))));
                                arr_21 [2U] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */int) (~(max((((((/* implicit */_Bool) arr_13 [i_2] [(signed char)12] [i_4])) ? (arr_12 [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))), (((/* implicit */unsigned int) min((arr_11 [i_2] [i_2] [i_6]), (arr_11 [i_2 + 1] [i_2 + 1] [i_5]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) ? ((((~(var_0))) | (((/* implicit */unsigned long long int) min((var_13), (var_15)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-2183), (((/* implicit */short) (unsigned char)44))))))));
    var_20 = ((/* implicit */unsigned char) var_2);
}
