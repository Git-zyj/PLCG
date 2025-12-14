/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25167
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
    var_10 = ((/* implicit */short) (unsigned char)175);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) -1);
                                var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)15)), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (11264852478680188416ULL))), (((/* implicit */unsigned long long int) max((268173312U), (((/* implicit */unsigned int) (unsigned char)13)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (11264852478680188438ULL)));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((3428643809U), (2020313790U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_20 [i_6] [i_5] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1446933251)), (11264852478680188417ULL)));
                                var_15 &= ((/* implicit */unsigned short) 1446933255);
                                var_16 = ((/* implicit */_Bool) (unsigned char)226);
                                var_17 |= ((/* implicit */int) 7181891595029363217ULL);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned long long int) (unsigned char)255);
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */int) min((min((((((/* implicit */_Bool) 7181891595029363194ULL)) ? (8065875609922842161ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17527))))), (((/* implicit */unsigned long long int) min(((short)-17551), ((short)22568)))))), (((/* implicit */unsigned long long int) (short)29039))));
}
