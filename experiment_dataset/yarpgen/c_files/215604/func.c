/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215604
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) var_8)))), (((((/* implicit */unsigned long long int) ((unsigned int) 3221225472U))) % (min((arr_1 [10LL] [i_1]), (((/* implicit */unsigned long long int) 6392266284160299469LL))))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) + (1415694259751874645LL)));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((7874867074374038598ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))) || (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) / (var_2))))))), (((unsigned long long int) min((((/* implicit */unsigned long long int) var_0)), (15843865261199558988ULL)))))))));
    var_16 |= ((unsigned int) ((((135776009U) % (3193745779U))) > (((unsigned int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_17 [i_3 - 1] [i_4] [i_5] [i_5] |= ((/* implicit */signed char) ((((unsigned long long int) (_Bool)1)) > (max((((var_6) | (((/* implicit */unsigned long long int) arr_11 [i_3])))), (((unsigned long long int) arr_15 [i_3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((long long int) (+(var_1)))) << (((((16137475065057851713ULL) << (((/* implicit */int) (_Bool)1)))) - (13828206056406151783ULL)))));
                                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((13744632537505528991ULL) > (((/* implicit */unsigned long long int) 15LL))))))));
                                var_19 -= ((/* implicit */unsigned long long int) (~(((unsigned int) ((long long int) (signed char)-5)))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((arr_13 [i_3 - 2] [i_4] [i_7]) / (((/* implicit */unsigned long long int) 2749511173U)))))) & (((unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_19 [i_3] [i_5] [i_5])))))));
                                var_21 = (!(((/* implicit */_Bool) (~(max((arr_10 [i_3] [i_4]), (((/* implicit */long long int) 2676277424U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (((+(((19ULL) + (var_6))))) * (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_3)))))));
}
