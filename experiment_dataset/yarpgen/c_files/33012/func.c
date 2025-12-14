/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33012
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
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((((((((/* implicit */_Bool) 1470249670U)) || (((/* implicit */_Bool) -2886206833356173012LL)))) || (((/* implicit */_Bool) (short)32758)))) ? (max((((/* implicit */unsigned long long int) max((-2886206833356173012LL), (((/* implicit */long long int) var_11))))), (((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) -2886206833356173012LL)))))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
                    var_19 ^= max((((unsigned long long int) (unsigned short)30185)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_16)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (short)32766)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) 6723334901904503140ULL);
            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9532))) : (max((var_5), (((/* implicit */unsigned int) arr_1 [i_0]))))));
            var_22 ^= ((((((((/* implicit */_Bool) (signed char)-121)) || (((/* implicit */_Bool) (unsigned char)44)))) || (((((/* implicit */_Bool) (short)-20832)) || (((/* implicit */_Bool) (unsigned short)65535)))))) || ((!(((/* implicit */_Bool) (unsigned short)4)))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)15)))), (((/* implicit */int) (!(((/* implicit */_Bool) 15393162788864ULL)))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_11))))), (var_12)))))))));
        }
        for (short i_4 = 3; i_4 < 16; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) ((int) (short)0));
            arr_12 [i_0] = ((/* implicit */short) (signed char)56);
            arr_13 [i_0] [i_0] [i_4] = ((/* implicit */int) (+((~(-1LL)))));
        }
        var_25 = ((/* implicit */signed char) var_15);
    }
    for (short i_5 = 4; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) || (((/* implicit */_Bool) arr_0 [i_5 + 1]))));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) (unsigned short)7)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) (signed char)-66);
                            var_29 = ((/* implicit */unsigned long long int) arr_16 [i_5]);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)112), ((signed char)34)))) ? (((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)-20832)))) ? (max((3600782166051499042ULL), (((/* implicit */unsigned long long int) (short)20832)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)224)) || (((/* implicit */_Bool) 4294967292U)))) || (((/* implicit */_Bool) (short)32760))))))));
                            var_31 |= ((/* implicit */short) var_11);
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) (signed char)65)))))) || (((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_19 [i_5] [i_5]))))))));
                            var_33 = ((/* implicit */unsigned int) (unsigned short)9315);
                            var_34 = (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 2824717617U)))));
                        }
                        var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [2U])) || (((((/* implicit */_Bool) ((unsigned char) arr_27 [(unsigned short)4] [i_9]))) || ((!(((/* implicit */_Bool) arr_24 [(unsigned short)10] [i_9] [i_7] [i_6] [i_6] [(unsigned short)10]))))))));
                        var_36 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_12)))))) ? (((((/* implicit */_Bool) (unsigned char)212)) ? (8487206178069984615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [(unsigned char)10] [(unsigned char)10])))))));
                    }
                    var_37 ^= (short)31;
                }
            } 
        } 
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) max((8487206178069984615ULL), (((/* implicit */unsigned long long int) ((int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 - 4] [i_5 - 1] [i_5])) || (((/* implicit */_Bool) var_14))))) : (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)20807)) : (((/* implicit */int) (_Bool)1))))));
    }
}
