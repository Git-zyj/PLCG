/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214585
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((+(var_1))) : (var_2)));
    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (3716526747U))))))) && (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */short) arr_1 [i_0] [(signed char)2]);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_7 [12LL]))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) || (((/* implicit */_Bool) (unsigned char)96)))) || (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_1] [i_0])), ((short)26268))))))) < (((/* implicit */int) ((((/* implicit */_Bool) (short)5881)) || (((/* implicit */_Bool) (signed char)-30)))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) max(((+(max((((/* implicit */long long int) 677334867)), (arr_9 [i_0]))))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)255))));
}
