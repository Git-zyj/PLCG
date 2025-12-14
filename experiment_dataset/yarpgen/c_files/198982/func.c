/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198982
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
    var_19 &= min((((/* implicit */int) (unsigned short)28672)), ((+(((/* implicit */int) min(((unsigned short)28672), (((/* implicit */unsigned short) (_Bool)1))))))));
    var_20 = ((/* implicit */signed char) (_Bool)1);
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3948394988U))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38971)))))));
                    arr_6 [i_2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)46355))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28691))) >= (161694644U)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_0] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (short)-22819))));
                    arr_11 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)147))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((-(13951148703931089280ULL))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28697))))))))));
                }
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) max(((short)-11927), (((/* implicit */short) (_Bool)1))))))))));
                var_26 = ((/* implicit */int) (-(4556376740509979831ULL)));
            }
        } 
    } 
}
