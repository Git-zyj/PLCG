/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44945
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(var_4)))) == (((-2069713471514177085LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55587)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) 6404607817928627760LL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) -8278854386869693099LL);
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8278854386869693104LL)) ? (13498373762805688040ULL) : (((/* implicit */unsigned long long int) 8278854386869693104LL))));
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)9948)) ? (8278854386869693115LL) : (-8278854386869693099LL))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))));
                                var_13 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)55590)), (-8278854386869693107LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_14 |= ((/* implicit */unsigned long long int) arr_18 [i_5]);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_6] [i_7]))) != (min((((/* implicit */long long int) arr_21 [i_7] [i_7] [i_6] [i_5])), (-8278854386869693099LL)))));
                    var_16 &= ((/* implicit */int) var_4);
                }
            } 
        } 
    } 
}
