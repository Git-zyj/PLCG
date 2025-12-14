/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223850
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_4 - 1] [i_0] [i_0] [i_3 + 1])), ((~(((/* implicit */int) arr_5 [i_4] [i_0] [i_0] [i_3 - 1]))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] |= ((/* implicit */short) (((!(((_Bool) var_3)))) ? (((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */unsigned short) arr_6 [i_4] [i_0] [i_1] [i_0])))))) - ((+(var_2))))) : (var_3)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_12 = ((/* implicit */_Bool) var_6);
                    var_13 = ((/* implicit */unsigned int) var_5);
                    arr_18 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_0))) * (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((short) arr_4 [i_0]))))))));
                    var_14 = ((/* implicit */unsigned long long int) var_10);
                }
                var_15 = ((/* implicit */long long int) (~(((12435559622542673463ULL) % (12435559622542673463ULL)))));
                arr_19 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((arr_15 [i_0]), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_1]))))) : (((/* implicit */int) ((12435559622542673466ULL) < (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)18] [i_0]))))))), (((/* implicit */int) ((((/* implicit */int) var_7)) == (((((/* implicit */int) (short)-4)) & (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % (((((/* implicit */int) var_4)) & (((/* implicit */int) var_5)))))))))));
    var_17 = ((/* implicit */unsigned short) ((((_Bool) max((var_0), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
