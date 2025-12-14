/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43863
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -4231735400473722586LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12380879091974419706ULL))) + (var_9)))) ? (((/* implicit */unsigned long long int) -1746230510)) : (min((((((/* implicit */_Bool) (unsigned short)59168)) ? (((/* implicit */unsigned long long int) 684379789)) : (12380879091974419692ULL))), (((/* implicit */unsigned long long int) 16777215))))));
                                arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30637))))) * ((-2147483647 - 1))));
                                arr_13 [i_4] [i_3] [i_2] [11] [i_0] = ((((/* implicit */int) (short)-11251)) - (((/* implicit */int) (unsigned short)6373)));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((((int) min((((/* implicit */int) (unsigned char)247)), (648885297)))) <= (((/* implicit */int) max(((signed char)24), (((/* implicit */signed char) (_Bool)1)))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */unsigned long long int) ((-2059371571) / (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) 648885279))))) ? (((((/* implicit */_Bool) 3822427694U)) ? (((/* implicit */int) (unsigned char)255)) : ((-2147483647 - 1)))) : (((/* implicit */int) min(((short)511), (((/* implicit */short) (unsigned char)9)))))))) : ((((_Bool)1) ? (((4611686018427387900ULL) / (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24475)))))));
}
