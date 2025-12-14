/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221614
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_2 - 2] [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)137);
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) max((var_12), (((/* implicit */unsigned char) var_11))))), (((short) arr_2 [i_0])))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */short) ((_Bool) -389757468))))), (((short) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_7))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((-389757451), (((/* implicit */int) arr_4 [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_20 = arr_0 [i_0] [i_0];
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_3))));
                            var_22 = ((/* implicit */long long int) (unsigned short)40538);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (var_0) : (((((/* implicit */_Bool) min((var_2), (var_14)))) ? (((/* implicit */unsigned long long int) 1119311865850681067LL)) : (((((/* implicit */_Bool) var_0)) ? (11461816226908287647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_24 = var_7;
    var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_11)), (977677430U))), (((/* implicit */unsigned int) var_7))));
    var_26 = ((/* implicit */unsigned long long int) var_7);
}
