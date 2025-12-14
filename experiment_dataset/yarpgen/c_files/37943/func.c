/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37943
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
    var_12 = ((/* implicit */unsigned char) -1620706186564228832LL);
    var_13 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) ((signed char) 48135106U))), (arr_2 [i_0] [i_2] [i_2])))), (((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1)))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-50)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))))));
                    var_15 = arr_4 [i_2] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [9ULL] [(unsigned char)14] [i_3] [i_1] = min((((((/* implicit */_Bool) (signed char)54)) ? (8282997122039701118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))), (((/* implicit */unsigned long long int) ((long long int) 8282997122039701118ULL))));
                                arr_16 [i_1] [(unsigned char)9] [10LL] [i_3] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) == (var_7))))))), (((/* implicit */unsigned long long int) ((long long int) (signed char)50)))));
                }
            } 
        } 
    } 
}
