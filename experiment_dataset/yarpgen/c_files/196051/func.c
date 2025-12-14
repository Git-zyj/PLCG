/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196051
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
    var_11 |= 7U;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [2U] |= ((/* implicit */unsigned int) 9223372036854775807LL);
                var_12 = ((/* implicit */_Bool) 4294967295U);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (0U)))) ? (((((/* implicit */_Bool) min((16U), (((/* implicit */unsigned int) 4))))) ? ((-(-5350608343507971269LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) 15U))));
                            arr_11 [i_0] [i_0] [i_1] [8U] [i_1] [i_3] = (+(max((((((/* implicit */_Bool) 1440650920U)) ? (8U) : (4294967295U))), ((-(8323072U))))));
                            var_14 = (~(28U));
                            arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((3675355837U), (1440650920U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)25536)) : (((/* implicit */int) (signed char)108)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned int) max(((unsigned short)64), (((/* implicit */unsigned short) (_Bool)1))))), (min((15U), (((/* implicit */unsigned int) (unsigned short)37531)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)105)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_20 [i_4] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 26U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20812))) : (6LL)))) ? (((15U) + (3973745667U))) : (6U))) : (((/* implicit */unsigned int) max((((/* implicit */int) min(((short)-32754), (((/* implicit */short) (_Bool)1))))), (-1110688543))))));
                                var_15 = (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8323072U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-32746))))), (((((/* implicit */_Bool) (unsigned short)61931)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) : (4294967290U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_7 = 4; i_7 < 16; i_7 += 3) 
    {
        arr_23 [i_7] [(_Bool)1] = ((/* implicit */short) (unsigned short)65534);
        var_16 = ((/* implicit */unsigned short) ((0U) == (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        arr_24 [i_7] [i_7] = ((/* implicit */short) (-(1440650920U)));
        var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (unsigned short)3605))))));
    }
    var_18 |= min((2854316375U), (((/* implicit */unsigned int) (signed char)0)));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 253055805U)) && (((/* implicit */_Bool) (signed char)127)))))) : (max((163851333U), (((/* implicit */unsigned int) (_Bool)1))))))) || (((/* implicit */_Bool) (~(523776LL))))));
}
