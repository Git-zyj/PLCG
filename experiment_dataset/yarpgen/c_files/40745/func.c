/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40745
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_11))))) * (((((/* implicit */_Bool) ((4294967286U) * (4294967286U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) 10U)))))) : (4294967289U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned short) -1LL));
                                var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) 4294967277U)) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), ((_Bool)0))))) : (-1327747722753602675LL))), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 18U))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_15 [i_5] = ((/* implicit */unsigned char) ((((unsigned int) (unsigned char)15)) % (((/* implicit */unsigned int) ((/* implicit */int) ((((var_0) ? (((/* implicit */long long int) -602473041)) : (1381000725615364027LL))) > (((/* implicit */long long int) (-(-455167468))))))))));
                    var_18 -= ((/* implicit */signed char) (-((-(-455167445)))));
                    arr_16 [7ULL] [i_0 + 1] [i_0 + 1] = ((((/* implicit */unsigned int) (-(max((602473040), (((/* implicit */int) var_14))))))) % (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39345))) : (4294967277U))))));
                    var_19 &= ((/* implicit */_Bool) ((unsigned long long int) (-(var_8))));
                }
                var_20 = ((/* implicit */_Bool) ((int) 10U));
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_21 = ((/* implicit */signed char) min((((var_11) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)1023)))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (_Bool)1))), ((unsigned short)64140))))));
                    arr_19 [i_6] [i_1] [i_0] [(short)10] = ((/* implicit */unsigned short) 1491029028);
                    arr_20 [i_0 - 2] [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7990704389862430665ULL)) ? (((/* implicit */unsigned int) min((-602473041), (((/* implicit */int) (signed char)96))))) : (min((2116077948U), (((/* implicit */unsigned int) (signed char)-100)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))) ^ (3954377357U)))) == (((((/* implicit */_Bool) 1768199636U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) : (-17LL)))))))));
                    var_22 = ((/* implicit */signed char) (((((-(2988975362U))) > (((/* implicit */unsigned int) var_3)))) ? ((-((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned char) -1850673116)))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_23 [i_7] [i_1] = ((/* implicit */unsigned int) ((short) (_Bool)1));
                    arr_24 [i_7] [(unsigned char)15] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-23721))))));
                    var_23 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1022)) : (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 4294967294U))) ? ((-(-4690283532058935282LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                                arr_32 [i_0 - 1] [i_7] [i_7] = ((((/* implicit */_Bool) ((((-5250224228645522202LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32767)) - (32767)))))) ? (((((/* implicit */_Bool) 2819328879U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40))));
                            }
                        } 
                    } 
                    arr_33 [6U] [6U] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_12))) ^ (((/* implicit */int) ((signed char) 249117858783800812LL)))));
                }
                for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2819328879U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_13)))) : ((-(2819328879U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (unsigned short)61042))))) ? (((long long int) var_13)) : (((/* implicit */long long int) max((1475638417U), (((/* implicit */unsigned int) var_5)))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_41 [i_11] [i_11] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))))), ((unsigned char)6)));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)206), (((/* implicit */unsigned char) (signed char)10))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) -1966779142)) - (var_10))))))))))));
                                arr_42 [i_11] [(_Bool)1] [i_11] = ((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) 4549100401548704638LL))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_13 = 3; i_13 < 15; i_13 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) (~((~(6272198713587850332LL)))));
                    arr_46 [i_13] [i_1] [10U] [(unsigned char)10] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 2819328892U)) - (((((/* implicit */_Bool) (short)-29671)) ? (12735148971920326105ULL) : (((/* implicit */unsigned long long int) 1355531041U))))))));
                }
            }
        } 
    } 
}
