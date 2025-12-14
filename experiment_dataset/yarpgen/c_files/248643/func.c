/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248643
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (16212196961790840737ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20206)) && (var_14))))))));
                                arr_12 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) var_0);
                                arr_13 [12] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                } 
                arr_14 [12ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_0)))) % (((((/* implicit */_Bool) arr_0 [(unsigned char)16] [(unsigned char)16])) ? (31LL) : (31LL))))) : (((/* implicit */long long int) ((((_Bool) 4467323676017575221LL)) ? (((/* implicit */int) min(((signed char)-112), (((/* implicit */signed char) arr_6 [i_0] [i_0] [(short)2] [i_0]))))) : (((arr_6 [12U] [i_1] [(short)8] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_10 [i_1 - 1] [8] [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_21 [i_6] [i_5 + 1] [i_1 - 1] [i_6] &= ((/* implicit */unsigned char) ((int) (-(min((var_0), (((/* implicit */unsigned int) (signed char)126)))))));
                            arr_22 [i_0] = ((/* implicit */unsigned int) var_10);
                            var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_14))), (min((((/* implicit */unsigned short) (signed char)-112)), (arr_4 [i_6] [i_5] [i_1] [i_6])))))), (min((((/* implicit */int) (signed char)127)), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_6])))));
                        }
                    } 
                } 
                arr_23 [i_0] [8U] = ((/* implicit */int) min((7890162160286889880ULL), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    var_19 -= ((/* implicit */long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-56)) : (511))), (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1)))))))) > (((var_12) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9404)))))));
    var_20 = var_10;
}
