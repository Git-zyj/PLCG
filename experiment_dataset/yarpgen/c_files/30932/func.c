/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30932
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (_Bool)1))));
    var_20 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_1 - 2] [i_1 - 1]))) : (min((((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1])), (arr_0 [i_1 - 2] [i_1 + 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_14 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1148183634)), (arr_5 [i_3])))) ? (((/* implicit */int) ((arr_9 [i_0] [i_1 + 2] [i_2]) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) : ((((_Bool)0) ? (((/* implicit */int) (short)-5919)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1 + 2] [i_1]) ^ (arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 1])))), (min((0ULL), (13501397380070443580ULL)))));
                            var_22 = ((/* implicit */short) 151316975U);
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_0])), ((short)8160)))) && (((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) 4143650320U);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(9837257737125911198ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15716)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4])) ? (4143650338U) : (1587984416U)))))))));
                            arr_26 [i_4] [i_5] [i_7] = ((/* implicit */unsigned long long int) (((~((+(var_18))))) < (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_20 [i_4] [i_5] [i_7]))) != (((/* implicit */unsigned long long int) (~(-1274801187))))))))));
                            arr_27 [i_7] [i_6] [i_5] [i_4] = ((/* implicit */int) 11137586112352103236ULL);
                        }
                    } 
                } 
                var_26 = (_Bool)1;
                arr_28 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((int) arr_23 [i_4]))) ? (((unsigned int) 4945346693639108036ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4])))))));
                arr_29 [i_4] [i_5] = max((arr_22 [i_4] [i_5] [i_5]), (((/* implicit */unsigned long long int) (~(arr_17 [i_4] [i_4])))));
            }
        } 
    } 
    var_27 = var_3;
}
