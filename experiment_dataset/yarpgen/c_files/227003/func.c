/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227003
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((((((/* implicit */int) var_11)) + (2147483647))) << (((var_4) - (3946940905U)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
    var_13 -= ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((7057804824205528060ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((+(((/* implicit */int) (unsigned char)197)))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_4])) - (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)144))))) << (((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2565785378U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))))) - (163U)))));
                var_18 = arr_2 [i_1] [i_1];
                arr_14 [i_1] [i_1] [(unsigned short)1] = ((((/* implicit */_Bool) 18446744073709551615ULL)) && ((_Bool)1));
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])) <= (((/* implicit */int) (unsigned char)207))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((((((/* implicit */long long int) ((/* implicit */int) (short)23104))) < (4625473844984171098LL))) ? (((((/* implicit */_Bool) (unsigned char)196)) ? (-138527626) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)241)) - (214))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) 9223372036854775797LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))))));
}
