/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235868
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */long long int) max((var_13), ((unsigned short)25017)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512))) & (-352466255193890353LL)))))));
        arr_3 [(unsigned short)9] |= ((/* implicit */unsigned short) ((max((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_5))))))) * (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)25017)) >= (((/* implicit */int) (unsigned short)40517))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40521)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) (short)-19596)) ? (((/* implicit */int) (unsigned short)18381)) : (((/* implicit */int) var_3)))))))));
            var_19 = ((/* implicit */unsigned short) (signed char)100);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_16 [i_0] = ((/* implicit */unsigned short) var_7);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (unsigned short)18365))) > (((((/* implicit */_Bool) (unsigned short)25017)) ? (((/* implicit */int) (unsigned short)25018)) : (((/* implicit */int) (unsigned short)40517))))));
                        var_21 = ((/* implicit */short) (signed char)-112);
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (_Bool)1))))) - (((arr_12 [6LL] [i_4] [i_5]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))))));
                            arr_19 [i_0] [i_5] [(short)8] [(signed char)4] [i_5] = ((/* implicit */unsigned short) var_17);
                            var_23 = ((/* implicit */signed char) (~(9223372036854775807LL)));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_4 + 1])) <= (((/* implicit */int) (unsigned short)20820))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_25 *= ((/* implicit */signed char) ((_Bool) ((long long int) (signed char)109)));
                            var_26 *= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3 - 1])) != (((/* implicit */int) arr_7 [(signed char)10] [i_3 - 1] [i_3 - 1]))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((unsigned short) ((signed char) var_3)))));
                            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_0] [i_2] [i_0] [i_8] [i_9]))));
                            var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_8] [i_2] [(unsigned short)5]))));
                            var_30 = ((/* implicit */short) ((((((/* implicit */int) (short)-25164)) >= (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65535)))))));
                            arr_32 [(_Bool)1] [i_7] [i_7] [i_8] [(unsigned short)5] [i_9] = ((/* implicit */long long int) arr_21 [i_0] [i_8] [i_7] [i_8] [i_9]);
                        }
                    } 
                } 
            } 
        }
    }
    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18365)) ? (((/* implicit */int) min((((unsigned short) (unsigned short)65526)), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) var_16)))))));
}
