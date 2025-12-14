/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222688
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25505)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (short)-29381)) : (((/* implicit */int) (short)23204))))), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned int) 2046484396)) : (13U))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (142401929)))), (1747487060U)))));
                var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((((/* implicit */_Bool) -7554838578537326645LL)) ? (4216464892U) : (4294967283U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)36461))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1024)) ? (((/* implicit */int) min(((short)-25517), ((short)-32763)))) : (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)124)))))))));
                var_19 = ((/* implicit */short) 3785078529U);
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */int) ((long long int) (-(1585401716U))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((_Bool) 0)) ? (max((((/* implicit */int) (short)-18813)), (-19))) : (min((((/* implicit */int) (short)15)), (1750773959)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (signed char)41))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 11438475968963879236ULL))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((3573179634U) / (13U)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-19574))) / (7515517327213270200LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
}
