/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204029
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (signed char)-10)) ? (-1556152598) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_1 [i_0]))))) >= (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))), (var_0)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((((/* implicit */int) (unsigned short)48229)), (-1970843762)))))), (var_7));
                            arr_12 [i_0] [i_1] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_2 + 2]), (arr_0 [i_2 + 2])))) || (((/* implicit */_Bool) (unsigned short)45397))));
                            arr_13 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)138)))) / (var_6)));
                        }
                    } 
                } 
                var_11 = ((/* implicit */short) arr_8 [i_0] [i_0]);
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (min((var_7), (max((var_7), (var_2)))))));
}
