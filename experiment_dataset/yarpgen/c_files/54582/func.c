/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54582
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
    var_13 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)29212))));
        var_15 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
        var_16 = ((/* implicit */int) (~(((long long int) (unsigned short)6))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) arr_2 [(unsigned short)16] [i_1]);
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(var_4)));
                            var_18 ^= ((/* implicit */short) var_11);
                            var_19 = (_Bool)0;
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1157949634U))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_6] [i_5]))) : (((var_4) ^ (arr_17 [i_5] [(short)10]))));
                    arr_22 [(unsigned char)14] [(unsigned char)4] [i_7] [i_6] = ((/* implicit */unsigned long long int) (-(var_3)));
                    var_22 &= ((/* implicit */unsigned short) ((unsigned char) ((4019628249U) - (1157949634U))));
                }
            } 
        } 
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) var_2));
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 275339046U)), (13165479370222483815ULL)))) ? (((arr_14 [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (var_4))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? ((~(((/* implicit */int) (short)-12133)))) : (((/* implicit */int) ((short) (~(3137017661U)))))));
        var_24 = ((/* implicit */unsigned char) min((1136854288U), (3137017662U)));
    }
    for (unsigned char i_9 = 4; i_9 < 19; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_25 = ((/* implicit */short) (+(((/* implicit */int) (signed char)103))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) -9223372036854775796LL);
                            var_27 &= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (signed char)-13)))));
                        }
                    } 
                } 
                arr_41 [i_9 - 1] [i_9] [i_11] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) var_8)))));
                arr_42 [i_9] = ((/* implicit */unsigned short) max((4019628239U), (((/* implicit */unsigned int) (unsigned char)60))));
                arr_43 [i_9] [i_10] = ((/* implicit */short) 1157949634U);
                var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) max((var_3), (((/* implicit */long long int) var_9)))))), ((+(((/* implicit */int) ((signed char) var_5)))))));
            }
        }
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            var_29 ^= ((/* implicit */long long int) (unsigned char)180);
            var_30 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_29 [i_9] [i_9]))), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_8)))))));
            var_31 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)51444)), (0U)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_7)), (((((/* implicit */int) arr_37 [i_9])) ^ (((/* implicit */int) var_12))))))) : (((-3682229384111941410LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-14))))));
        }
        var_32 = ((/* implicit */short) (+((~(((/* implicit */int) var_8))))));
    }
}
