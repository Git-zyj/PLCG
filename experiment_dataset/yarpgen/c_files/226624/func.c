/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226624
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) ((short) (+((~((-2147483647 - 1)))))));
                    var_14 |= ((/* implicit */signed char) ((short) -4964554061716973028LL));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                            var_16 = (~(((int) arr_9 [i_0 + 1] [i_1 - 2] [i_2] [i_3] [i_4])));
                            arr_12 [i_4] [i_1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_3)))));
                        }
                        for (short i_5 = 4; i_5 < 24; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((unsigned int) ((unsigned short) 2249600790429696LL))))))));
                            var_18 = ((/* implicit */_Bool) (~((~(((unsigned int) -2249600790429696LL))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) ((int) ((unsigned int) 2249600790429710LL)))))));
                        }
                        var_20 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_1))))));
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_21 |= ((/* implicit */int) ((long long int) ((signed char) -2249600790429697LL)));
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (signed char)(-127 - 1))))));
                    }
                }
                for (unsigned short i_7 = 2; i_7 < 24; i_7 += 3) 
                {
                    arr_22 [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((unsigned int) var_1))))));
                    var_23 = ((/* implicit */unsigned short) (~(((int) ((long long int) var_4)))));
                    var_24 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) ((short) -2249600790429694LL))));
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) (~((~(((/* implicit */int) (unsigned char)255)))))));
                        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((unsigned int) arr_9 [i_0] [(unsigned short)15] [i_0 + 1] [i_0] [i_0 + 1]))))));
                        var_27 += ((/* implicit */unsigned short) (~((~((~(var_1)))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_28 = ((signed char) ((signed char) (!(((/* implicit */_Bool) (unsigned short)36843)))));
                        var_29 = ((/* implicit */unsigned short) ((signed char) (~(((long long int) (short)31333)))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        var_30 = (~(((int) ((long long int) arr_6 [i_0] [i_1 + 1] [i_8] [i_11]))));
                        var_31 *= ((/* implicit */unsigned int) ((short) ((unsigned char) (-(((/* implicit */int) var_10))))));
                    }
                    for (int i_12 = 2; i_12 < 24; i_12 += 4) 
                    {
                        var_32 = (+((-((-(arr_31 [i_0 - 1] [i_0 - 1] [i_8] [i_12]))))));
                        var_33 = ((/* implicit */unsigned short) (~((~((~(9223372036854775807LL)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */int) ((signed char) ((unsigned char) (-(((/* implicit */int) (unsigned short)28458))))));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((unsigned long long int) (-((~(((/* implicit */int) arr_26 [i_0 - 1] [i_1] [i_8]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            arr_43 [i_0] [i_14] [i_8] [i_13] &= ((/* implicit */signed char) ((int) (-(((long long int) var_9)))));
                            var_36 = ((/* implicit */signed char) ((unsigned long long int) (+(((unsigned int) arr_25 [i_0] [i_0] [i_13] [i_14])))));
                        }
                        var_37 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) 2249600790429716LL)));
                    }
                }
                for (unsigned short i_15 = 4; i_15 < 24; i_15 += 1) 
                {
                    var_38 &= ((/* implicit */unsigned short) ((unsigned int) -2249600790429697LL));
                    var_39 = ((long long int) (~((~(3597363034413510441ULL)))));
                    var_40 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))))));
                    var_41 = ((/* implicit */short) (~(((long long int) ((short) 268435455LL)))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                {
                    arr_49 [i_0] [i_1 - 1] [i_16 - 2] = ((/* implicit */long long int) ((unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0]))))));
                    arr_50 [i_0] [i_1] [i_16 + 2] = ((/* implicit */long long int) ((unsigned short) -5507520525073806545LL));
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_53 [i_0 - 1] [i_17] [i_0] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_5))))));
                    var_42 = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) (short)25)))));
                }
                arr_54 [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned int) ((unsigned int) (unsigned short)16383))));
                var_43 *= ((/* implicit */signed char) ((unsigned int) ((unsigned int) (~(var_1)))));
                arr_55 [i_0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned int) (-(((int) ((unsigned char) var_6)))));
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) ((signed char) var_3))))));
    var_45 *= ((/* implicit */signed char) (-((+(((long long int) var_0))))));
}
