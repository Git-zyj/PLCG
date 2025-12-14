/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50821
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
    var_10 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -3333434132073982648LL)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)19)), (-1)))) : (min((524287ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 230300431192982861ULL))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709027331ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5119))) : (8191ULL)));
                    var_11 -= ((/* implicit */int) ((unsigned long long int) (unsigned char)101));
                }
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    arr_12 [i_3] [i_1 + 1] [i_3] = ((/* implicit */unsigned char) (+(18446744073709027328ULL)));
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)251)), (17513541756038361889ULL)));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((140735340871680ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17)))));
}
