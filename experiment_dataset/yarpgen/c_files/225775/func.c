/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225775
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max(((short)-17839), ((short)-16563)));
                arr_7 [i_0 + 1] [i_1] [14U] &= ((/* implicit */short) arr_0 [i_0]);
                arr_8 [i_1] [i_1] &= ((/* implicit */long long int) ((575897802350002176ULL) + (17870846271359549448ULL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17839))) ^ (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)200), ((unsigned char)62))))) : (max((((/* implicit */unsigned long long int) 1152921229728940032LL)), (4136503113566454933ULL)))))));
                                var_16 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)17838))));
                            }
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_14 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [(short)10] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_12);
    var_20 *= ((/* implicit */short) var_3);
}
