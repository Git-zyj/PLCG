/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53800
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_7) : ((+(var_13)))));
    var_19 = var_16;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_2] [i_1] [i_3] [i_1] = var_4;
                            arr_14 [i_2] [i_1] [i_2] [i_3] = var_8;
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)50262), ((unsigned short)15262)))) > (((/* implicit */int) (unsigned short)16324))));
                            arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) var_7);
                            arr_16 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */long long int) (~((-(((/* implicit */int) var_2))))))) - (min((((/* implicit */long long int) (unsigned short)15243)), (3748142537295683460LL))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (-(-194268636761690000LL)));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_22 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5901))) & ((((~(var_5))) / (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                            arr_22 [i_1] = ((/* implicit */unsigned short) -358287602153665546LL);
                            arr_23 [i_0] [i_1] [i_5] [i_5] = max((((arr_8 [i_1] [i_1 + 1] [i_4] [i_5]) | (var_6))), (max((((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 - 1]))))), (var_3))));
                            arr_24 [i_1] [i_1 - 1] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)8190)), (470580954002051172LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49013)) >> (((((/* implicit */int) var_10)) - (13323)))))))))));
                            arr_25 [i_0] [i_0] [i_1] [i_4] [i_5] [i_1] = var_14;
                        }
                    } 
                } 
                arr_26 [i_0] [i_1] = ((/* implicit */long long int) var_14);
            }
        } 
    } 
}
