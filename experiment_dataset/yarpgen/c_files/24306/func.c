/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24306
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
    var_20 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_16)))))) % (((unsigned int) var_3)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-62)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (signed char)-52)) >= (((/* implicit */int) (signed char)52)))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)62)) < (((/* implicit */int) arr_2 [i_1 + 2] [4U]))))))))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) min((((4194303ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((((6499141355248029323ULL) | (arr_3 [i_0]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((max((((arr_1 [i_1 + 1]) - (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) > (3517223271U)))))) <= (((/* implicit */int) max((((/* implicit */short) (signed char)-29)), ((short)2451))))));
                            arr_12 [i_1] [i_1 + 1] [(unsigned char)16] [21] = ((/* implicit */long long int) ((((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(unsigned short)15]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)103), ((signed char)85))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-98)) == (((/* implicit */int) (unsigned char)35))))))));
                            var_24 = ((/* implicit */int) min((var_24), (min(((~(((/* implicit */int) (signed char)-104)))), (((/* implicit */int) ((max((var_17), (((/* implicit */unsigned long long int) (_Bool)0)))) == (((/* implicit */unsigned long long int) 8349726710434268585LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 ^= ((/* implicit */long long int) var_0);
}
