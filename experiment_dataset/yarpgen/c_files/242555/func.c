/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242555
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-9032))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = max((((/* implicit */unsigned long long int) 8730118816179915407LL)), (((((((/* implicit */_Bool) -3520571653845601615LL)) ? (((/* implicit */unsigned long long int) -1113319496)) : (11811509200662865316ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65535))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)192))))) <= (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) (signed char)-1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_22 &= ((3520571653845601615LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
                                var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) <= (((/* implicit */int) (short)5545)))))) <= (((((((/* implicit */_Bool) (short)5542)) ? (13219827097651707142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6033))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))))));
                                var_24 &= ((/* implicit */_Bool) (short)-6038);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
