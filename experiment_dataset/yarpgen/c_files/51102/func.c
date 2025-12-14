/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51102
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
    var_12 = ((/* implicit */int) ((short) var_9));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1036888940)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50119))))) ? (max((((/* implicit */unsigned int) var_6)), (4294967288U))) : (82090887U))))));
                    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_5)))) ? ((-((+(((/* implicit */int) arr_7 [11] [11])))))) : (((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    var_14 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [15LL]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((1610612736U), ((+(4294967295U))))))));
                                arr_16 [i_2] |= ((/* implicit */signed char) ((var_10) << (((/* implicit */int) (signed char)15))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_23 [5U] [i_5] [i_2] [i_1] [i_0] = (short)4975;
                                arr_24 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) (short)17045)) || (((/* implicit */_Bool) 132120576U))))))) | ((~(((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_2]))))));
                                arr_25 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12463)) ? (((/* implicit */long long int) ((/* implicit */int) ((1680937641U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3]))))))) : (-7586053000122803224LL)));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_5])), (arr_4 [i_0] [i_0 - 2] [i_2])))) ? (((/* implicit */long long int) max(((-(arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_5]))), (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((((/* implicit */long long int) 4294967290U)) + (var_11))) : (((/* implicit */long long int) 1006632960U))))));
                                var_17 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 3937256019U)) ? ((-(1421742287U))) : (((unsigned int) 1929239706)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)29435)) ? (228727310U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29227))))), (((((/* implicit */_Bool) 67108864U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (524287U)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (9223372036854775807LL)));
    var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (+(-838820319)))) ? (((long long int) var_7)) : ((+(-6241512191070075234LL))))));
}
