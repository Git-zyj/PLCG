/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246894
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) -1933150629)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) 9223372036854775798LL);
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), ((~(7483686555588987172ULL)))));
                            var_14 ^= ((/* implicit */_Bool) 1933150629);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    var_15 += ((/* implicit */unsigned int) (~(min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-9))))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-9))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned int) -464622849)), ((+(max((((/* implicit */unsigned int) (signed char)-13)), (2254066900U))))))))));
                    arr_15 [i_0] [i_1] [i_4] = ((/* implicit */long long int) 268435455);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (+((~(max((983353566U), (((/* implicit */unsigned int) (unsigned short)31207))))))));
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)56119))));
    var_20 = ((/* implicit */short) max((max((min((((/* implicit */unsigned int) (signed char)5)), (2254066899U))), (((/* implicit */unsigned int) 1933150629)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)85))))))))));
    var_21 = ((/* implicit */unsigned long long int) (-(983353565U)));
}
