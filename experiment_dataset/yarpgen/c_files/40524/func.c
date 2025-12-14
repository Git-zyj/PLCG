/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40524
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = (~(arr_0 [i_0] [i_0]));
                                var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 68719476732LL)) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8232716861050629642ULL))))))))));
                            }
                        } 
                    } 
                    arr_12 [(signed char)10] [i_0] [(signed char)10] [i_1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)254)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    arr_13 [i_2] [i_1] [7] = ((/* implicit */signed char) var_13);
                    var_20 = ((/* implicit */signed char) arr_11 [(_Bool)1] [i_2] [(_Bool)1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)47))))) > (max(((~(((/* implicit */int) (signed char)-57)))), (((/* implicit */int) (signed char)-48))))));
}
