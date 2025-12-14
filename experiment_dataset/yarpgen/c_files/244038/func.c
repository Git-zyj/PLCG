/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244038
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) ((_Bool) (unsigned short)12337))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)108)) == (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) arr_8 [7ULL] [2ULL] [i_3])))));
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) <= (((/* implicit */int) (unsigned short)65535))))) << ((((+(((/* implicit */int) arr_7 [i_2])))) - (21374)))));
                            arr_13 [i_0] [0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17179868672ULL))))), (((unsigned short) var_1))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_7);
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))));
}
