/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243689
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
    var_20 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))) % (arr_1 [i_1])));
                arr_7 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)16383), (((/* implicit */unsigned short) (signed char)-116))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)101)) & (((/* implicit */int) arr_3 [i_0] [(signed char)0])))))))), (arr_2 [i_1])));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_21 = arr_11 [i_0] [i_0] [i_0] [i_2] [i_3];
                            arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) arr_10 [i_1] [i_2] [i_2]);
                            var_22 = ((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0 - 1]);
                            arr_14 [i_1] [i_1] [i_1] [i_3 - 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) max((1679762219), (((/* implicit */int) ((((/* implicit */int) (signed char)116)) >= (((/* implicit */int) min((((/* implicit */short) (unsigned char)16)), (arr_3 [i_0 - 1] [i_0 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
