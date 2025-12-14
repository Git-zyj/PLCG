/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199970
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
    var_18 &= ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-5610))))))), (((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5610)) ? (((/* implicit */int) (unsigned short)29983)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [12])) ? (min((max((-1207251264), (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))) : (((int) min((arr_0 [i_1]), (((/* implicit */unsigned char) (signed char)89)))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned long long int) min(((short)5610), (((/* implicit */short) (signed char)89))));
                    var_21 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((short)15049), (((/* implicit */short) arr_2 [i_2] [i_0]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -1207251264)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1] [i_0]))))), ((-(var_8)))))));
                }
                for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    arr_9 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) min((0), (((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_0] [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)159);
                    arr_11 [i_3] = ((/* implicit */signed char) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-14775))));
                        var_23 -= ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                        arr_14 [i_1] [i_1] [i_0] [i_4 + 1] [(unsigned short)2] [i_3] = ((/* implicit */long long int) var_11);
                    }
                }
                arr_15 [i_0] [i_0] = max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)189))))), (2047U));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) min((var_16), (((/* implicit */long long int) var_5))))))));
}
