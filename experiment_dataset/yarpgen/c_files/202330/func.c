/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202330
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) (~(max((((16875112834375287317ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [15U] [12ULL]))))), (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_6 [i_0] [i_3] [i_4])))))));
                                var_13 = max((((((/* implicit */int) (signed char)63)) ^ (1290446055))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6))))) + (((/* implicit */int) (signed char)-42)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) arr_5 [i_0] [(unsigned char)1] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = max((((unsigned char) ((unsigned char) (unsigned short)8304))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) | (((/* implicit */int) (signed char)31)))))))));
    var_16 = ((/* implicit */unsigned char) (-(-579211692963684806LL)));
}
