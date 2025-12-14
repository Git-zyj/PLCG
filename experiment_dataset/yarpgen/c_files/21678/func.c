/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21678
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) min((((((/* implicit */int) (short)-27535)) & (-2080327834))), ((~(((/* implicit */int) (short)31633))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 4034572336933946717ULL))))), ((-(((/* implicit */int) (unsigned char)72))))));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64554)))))));
                        }
                    } 
                } 
                arr_12 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) || (((/* implicit */_Bool) 0ULL)))))));
                var_14 -= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)0))))));
                arr_13 [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) (!((_Bool)1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)30743))))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)10735)))))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
}
