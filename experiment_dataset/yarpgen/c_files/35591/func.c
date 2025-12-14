/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35591
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) min((((unsigned int) 10055243904495047517ULL)), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
            var_13 = ((/* implicit */_Bool) (~(((8391500169214504098ULL) % (10055243904495047517ULL)))));
            var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)63))));
            var_15 = ((/* implicit */signed char) min((var_15), (arr_0 [6U] [6U])));
        }
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (max((arr_1 [i_0]), (1817228686896355957ULL))) : (min((((/* implicit */unsigned long long int) (signed char)116)), (arr_1 [i_0])))));
        var_17 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_4 [i_0])))));
        arr_6 [i_0] [i_0] = (~(min((((/* implicit */unsigned int) (_Bool)0)), (4028185071U))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), (1032192))) < ((+(((/* implicit */int) arr_4 [10]))))))) * (((/* implicit */int) arr_0 [i_0 - 1] [8U])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (~((+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(-1578862955)))), (arr_13 [i_3] [i_3] [i_4]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2] [i_2] [i_3] [i_4] [i_5] [15U] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) (~(((int) 8897658885943324512ULL))))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_2] [i_2] [i_3] [i_2])) ? (8897658885943324504ULL) : (arr_10 [i_2] [i_2] [i_4])))));
                                arr_23 [i_6] [i_6] [i_6] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) (signed char)(-127 - 1))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2634496977U))))) : ((-(912716495U)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (~((-(arr_8 [i_2])))));
    }
    var_21 = ((/* implicit */int) 32640U);
    var_22 &= ((/* implicit */signed char) 4150721214U);
}
