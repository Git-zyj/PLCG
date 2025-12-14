/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37579
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(arr_2 [i_0] [i_1] [i_0])))), (max((((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1] [i_2])))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)10968)))))) && (((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) var_10))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [(_Bool)1] [i_1] &= ((/* implicit */unsigned long long int) var_0);
                                var_15 *= ((/* implicit */signed char) ((_Bool) var_1));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))) ? ((-(70368744177663ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_3)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [8] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (16198586)));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) var_13)))))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_18 += ((/* implicit */_Bool) (-(((var_8) / (((/* implicit */int) (unsigned short)22746))))));
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (11931220267619730794ULL))) == (((/* implicit */unsigned long long int) var_1))))) & (((((/* implicit */_Bool) ((arr_13 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) (unsigned short)42789)) : (var_2)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((3458764513820540928LL) / (((/* implicit */long long int) arr_22 [i_0] [i_2] [i_7]))))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_7])) ? (arr_22 [i_0] [(unsigned char)2] [i_0]) : (var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22735)) || (((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2]))))))))));
                        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) | (max((((/* implicit */long long int) (unsigned short)65535)), (max((-1240625108479473251LL), (((/* implicit */long long int) (_Bool)0))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((_Bool) (unsigned short)65532)) ? (max((((/* implicit */long long int) var_13)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57999)))));
}
