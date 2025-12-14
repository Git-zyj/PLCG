/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20386
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)34700))))));
                var_19 = ((/* implicit */long long int) (~(65535U)));
                var_20 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)30835))))));
                arr_6 [i_0] [i_0] [21ULL] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 2247263225649385041LL))))), (((((/* implicit */_Bool) 15117538876031309888ULL)) ? (((/* implicit */int) (unsigned short)30864)) : (((/* implicit */int) (unsigned short)30856))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((-2845805410042169942LL), (((/* implicit */long long int) (unsigned short)36603)))))))));
                                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-124)) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65522))))))))));
                var_24 = ((/* implicit */_Bool) min(((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)65517)))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-68)), (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned short)36603)) : (((/* implicit */int) (signed char)104)))))))));
                var_25 = (unsigned short)36603;
            }
        } 
    } 
}
