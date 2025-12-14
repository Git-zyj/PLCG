/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246317
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
    var_19 = ((/* implicit */long long int) (unsigned short)60073);
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (17796070056000104829ULL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) + (-7306314598253214418LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60073))) : (max((3388827271U), (((/* implicit */unsigned int) var_14))))))));
                var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_3 [i_0])), (arr_1 [i_0]))))), ((-(((/* implicit */int) min((var_17), (((/* implicit */unsigned char) var_5)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_23 = arr_3 [i_4];
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned int) -7306314598253214418LL);
                                arr_20 [i_2] [i_2] [i_3] [(unsigned short)10] [(_Bool)1] = ((/* implicit */long long int) arr_16 [i_2] [i_2]);
                                var_24 = ((/* implicit */_Bool) 1810379687U);
                            }
                        } 
                    } 
                    arr_21 [2ULL] [i_3 - 1] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) min((var_12), ((unsigned char)83)))) << (((/* implicit */int) min((arr_17 [i_2] [i_3 - 1] [0] [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 1]), (arr_17 [i_2] [i_3 - 2] [i_3] [i_2] [i_2] [i_3 - 1] [i_3 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_27 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)13780);
                                var_25 = ((/* implicit */_Bool) max((max((-4572025222455956321LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((_Bool) -9038499056920211426LL)))));
                                var_26 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
