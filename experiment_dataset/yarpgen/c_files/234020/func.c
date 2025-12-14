/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234020
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned short)19))));
                                var_14 = ((((/* implicit */int) (signed char)-90)) - (-165129804));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((-(arr_2 [i_0] [i_1])))))) ? ((~(-131637707839077558LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)68)))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) min((min((arr_11 [i_0] [i_1 - 3] [i_0] [i_6 - 1] [i_7] [i_6 - 1] [i_0]), (arr_11 [i_0] [i_1 - 2] [i_0] [i_6 - 1] [i_7] [i_5] [4ULL]))), (((/* implicit */long long int) var_4))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) % (((((/* implicit */int) arr_1 [i_1 - 1])) % (((/* implicit */int) (short)-28527))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_28 [0U] [i_1 - 2] [i_8] [(unsigned short)1] = ((/* implicit */unsigned long long int) 2856212276U);
                            arr_29 [i_0] [i_1] [i_1] [i_8] [i_9 - 3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_0] [i_9]))) > (((arr_16 [i_0] [i_0] [(_Bool)1] [i_1] [i_8] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) -1335633667);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
}
