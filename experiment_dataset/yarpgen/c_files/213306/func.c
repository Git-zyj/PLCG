/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213306
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_13 += (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_14 = ((/* implicit */signed char) ((unsigned long long int) 130023424));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((max((((arr_5 [i_0] [i_0]) & (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1] [(unsigned char)6] [i_3])))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_9 [(_Bool)1] [i_0] [6] [i_3]) : (((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((max((arr_7 [i_0] [i_2 + 1] [6] [i_3]), (arr_7 [6LL] [i_2 + 1] [9] [6U]))), (((/* implicit */long long int) arr_6 [i_0] [9] [i_2] [i_2 + 1])))))));
                            var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_4 [i_4]))))) : (((((/* implicit */_Bool) -130023424)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1729382256910270464LL)))))));
                        }
                        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) ((unsigned short) (short)(-32767 - 1)));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -8377525127315542034LL))))), (var_5))))));
                            arr_13 [8] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)120)) + (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        var_20 *= ((-130023425) == (-130023424));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        arr_16 [i_6] [i_6] [i_2] [(unsigned short)6] [i_6] = (-(((((/* implicit */int) (short)3)) / (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) ((arr_6 [i_2 - 1] [i_1] [i_2] [i_2 - 1]) << (((arr_6 [i_2 - 1] [i_1] [(_Bool)1] [i_6 - 2]) - (1306600732)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) arr_12 [i_0] [i_0 - 1]))));
                        }
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        arr_21 [i_8] [i_0 + 1] [i_1] [i_8] = ((/* implicit */short) ((var_8) | (((/* implicit */unsigned long long int) var_9))));
                        /* LoopSeq 1 */
                        for (short i_9 = 4; i_9 < 9; i_9 += 2) 
                        {
                            var_24 += ((/* implicit */unsigned int) ((arr_23 [i_0 - 2] [i_2 + 2] [i_9] [i_9 - 3]) ? (arr_7 [i_9 - 3] [i_2 - 1] [i_8 - 2] [i_0 + 1]) : (((/* implicit */long long int) var_7))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-79)) == (((/* implicit */int) arr_1 [i_0 - 3]))));
                            arr_24 [i_0] [i_1] [i_1] [i_8] [i_9 - 1] [i_8] [i_2] = ((/* implicit */int) var_5);
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 16690096764350628741ULL))) + (((/* implicit */int) (signed char)-79)))))));
                        }
                        arr_25 [i_0] [i_0] [7] [i_0] [5LL] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (118062451111868487ULL)));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */long long int) arr_18 [i_8 - 3] [i_2 + 2] [i_0 + 1] [i_1])) == (2991446585491861068LL)))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22607))) : (118062451111868487ULL))))));
                    }
                    var_29 = ((/* implicit */short) arr_7 [6LL] [7ULL] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 1010763393))));
}
