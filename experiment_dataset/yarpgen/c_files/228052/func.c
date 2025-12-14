/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228052
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
    var_16 = ((/* implicit */unsigned long long int) -4407044476853294731LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [11ULL] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) * (((/* implicit */int) var_2))))), ((+(var_9)))));
                var_17 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_6)) ? (-4407044476853294715LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) min((-4407044476853294737LL), (((/* implicit */long long int) ((short) 6707463608092750999ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_17 [i_2] [i_4] [14ULL] [(signed char)10] = ((/* implicit */long long int) var_0);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) -3830065713992741973LL)) ? (4407044476853294741LL) : (6067367667293864667LL))) : (4407044476853294744LL)));
                            var_20 += (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-10))))), (((((/* implicit */_Bool) -5388707528023185500LL)) ? (((/* implicit */unsigned long long int) 6067367667293864682LL)) : (var_10))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_7))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) (((_Bool)1) ? (3830065713992741972LL) : (-4407044476853294726LL)));
            }
        } 
    } 
    var_23 &= var_9;
    var_24 = ((/* implicit */long long int) var_15);
}
