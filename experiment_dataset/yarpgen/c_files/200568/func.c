/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200568
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
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) ((signed char) (unsigned short)44744))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_11))))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535)))))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_17))) ? ((+(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_16))))))), (((((/* implicit */_Bool) (unsigned short)20812)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                                arr_16 [i_3] [i_3] [i_1] [i_1] [i_3] &= ((/* implicit */signed char) ((((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_14)))))))) ? (((((/* implicit */_Bool) (unsigned short)20787)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44744))))) : (((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (max((var_7), (((/* implicit */long long int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0 + 3] = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned char) (unsigned short)20792))) ? (max((((/* implicit */unsigned long long int) var_18)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (-8629514156075978282LL)))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_10))), (min((((/* implicit */unsigned long long int) var_18)), (var_9)))))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) (unsigned short)20787))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) var_17))))));
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33205)) >> (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        var_22 = ((/* implicit */long long int) (unsigned short)20796);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) var_16)) & (((/* implicit */int) var_18)))) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        arr_26 [i_0 + 2] [i_6] [i_6] [i_0] [(unsigned short)3] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) (unsigned short)18709))))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (6265769348090821500LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((short) (unsigned short)12))))))));
                        arr_27 [(unsigned char)1] [i_6] [i_6] [i_6] = ((unsigned long long int) (~(((/* implicit */int) min(((unsigned short)32768), ((unsigned short)18709))))));
                        arr_28 [i_6] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11428490719017290608ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) 7070831248450902056ULL))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) -1399642520179343441LL);
    var_25 -= ((/* implicit */int) ((max((((/* implicit */long long int) var_15)), (min((((/* implicit */long long int) (_Bool)1)), (2087677197896671651LL))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) (unsigned short)44737)) : (((/* implicit */int) (_Bool)1)))))));
}
