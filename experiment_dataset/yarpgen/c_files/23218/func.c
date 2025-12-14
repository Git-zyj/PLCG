/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23218
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2568145766U))) ? (((/* implicit */long long int) var_1)) : ((~(var_17))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) ((unsigned char) 15938646035306513594ULL)))));
                                arr_13 [(unsigned char)16] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_4)) ? (-7239450428878304406LL) : (var_16))), ((-(var_9))))) % (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                arr_14 [i_0] [i_3] = (!(((/* implicit */_Bool) var_19)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */long long int) (short)-32252);
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) | ((-(((/* implicit */int) var_13)))))) < (min((((/* implicit */int) ((2147483647) < (((/* implicit */int) var_5))))), ((((_Bool)0) ? (((/* implicit */int) (unsigned short)35388)) : (((/* implicit */int) var_18))))))));
    var_24 = ((/* implicit */long long int) 49152U);
}
