/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206951
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1738437644)))) ? (((int) (unsigned char)112)) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned char)149))) && (((/* implicit */_Bool) min((1845457004), (((/* implicit */int) (short)(-32767 - 1)))))))))));
                                var_12 = ((/* implicit */_Bool) max((((unsigned int) (unsigned char)157)), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned char)97)))))));
                                var_13 = ((/* implicit */signed char) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)176)) - (166)))))) : (max((4602678819172646912ULL), (((/* implicit */unsigned long long int) (short)30565))))));
                                arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) != (48661462)))), (13705989860535403037ULL)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1610612736)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)43482))))) ? (min((-4LL), (((/* implicit */long long int) -1610612736)))) : ((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32764)))), (((int) 4249192447U))))), (max((((((/* implicit */long long int) 159854919)) + ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((int) 1275399532)))))));
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (-(min((14680064U), (((/* implicit */unsigned int) -159854907))))));
                arr_22 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) -6612881402388722932LL))), (((((/* implicit */_Bool) 1632441326U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30999))) : (4280287246U)))));
            }
        } 
    } 
}
