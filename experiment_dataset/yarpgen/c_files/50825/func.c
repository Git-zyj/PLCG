/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50825
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((3758096384U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25500))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))) ? (((/* implicit */int) (short)25956)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-25957)) + (2147483647))) >> (((((/* implicit */int) (short)-25484)) + (25495)))))) && ((!(((/* implicit */_Bool) var_1)))))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 5485241282552917579LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18980))) : (2441325085U))))), ((-(((/* implicit */int) (signed char)23)))))))));
        var_16 = ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (arr_3 [i_0 - 1]))))));
        var_17 = min(((~((-(var_9))))), (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) >= (var_10))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-19056))))) : (((1152921487426977792LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)92)) ? (-2527113976927511052LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19062))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 4809262841438402006LL)) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) (short)-19044)))) == (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((arr_6 [i_1]) - (4333783642272463391LL)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-3969)))))) : (((/* implicit */int) ((short) (signed char)(-127 - 1))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) -4809262841438402019LL)) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) (short)-1)))) <= (((/* implicit */int) arr_0 [i_2]))))))))));
            var_21 &= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_1 [i_1]))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned char) var_10)))));
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)(-32767 - 1)))) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) >= (1489350684U))))))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)19082)) || ((_Bool)1))) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (min((((/* implicit */long long int) (short)-19056)), (var_12))))) : ((~(var_9)))));
    var_25 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)-3964)) > (((/* implicit */int) (short)-11640)))))))) ? (((((/* implicit */_Bool) max((arr_18 [(signed char)6] [i_5]), (((/* implicit */long long int) var_0))))) ? (((arr_18 [i_5] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((short) arr_2 [i_6]))) : (((/* implicit */int) arr_13 [i_4 - 1])))))));
                        arr_24 [i_4] [i_4] = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_20 [i_3] [i_5] [i_6 + 2])), (((((/* implicit */int) var_4)) - (((/* implicit */int) var_2))))))));
                    }
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned char) ((((2251799813685247ULL) / (var_1))) % (((/* implicit */unsigned long long int) ((unsigned int) (short)-19063)))));
                            arr_30 [i_3] [i_3] [i_4] [i_7] [i_8] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) ((signed char) arr_14 [i_3] [i_3]))))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((-(((/* implicit */int) arr_31 [i_5] [i_4 + 1] [i_7 + 2] [(_Bool)1])))) % (((((/* implicit */int) (short)19061)) / (((/* implicit */int) (short)-3964)))))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~((+(((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (short)-16955)))))))))));
                            var_29 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [10ULL])))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)191)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))), (arr_23 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_3]))))));
                            var_30 += ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) == (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) var_0)))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)15287)) : (((/* implicit */int) (short)-24573)))))) : (((((/* implicit */int) arr_15 [i_4 - 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17669)))))))));
                            var_31 = ((/* implicit */unsigned int) (-(var_12)));
                        }
                        var_32 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (short)-3972))))) : (((((/* implicit */_Bool) 6793223554383326033ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)6241)))))), (((/* implicit */int) ((_Bool) var_1)))));
                        arr_34 [i_4] [i_5] [i_5] [i_4] [6LL] [i_4] = ((/* implicit */signed char) (((~(arr_33 [i_4 + 1] [i_4] [i_7 - 1]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_4 + 1] [i_4] [i_7 + 2]))))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-25556)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) 3262135854U);
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~((~(((/* implicit */int) arr_23 [i_5] [12LL] [i_10 + 1] [12LL] [i_10 + 1] [i_10 - 1])))))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        arr_39 [i_3] [i_4] [i_5] = ((/* implicit */short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6234))))))), (((/* implicit */int) ((short) arr_21 [i_4] [i_3] [6LL] [i_4] [(short)3])))));
                        var_36 = ((/* implicit */signed char) (+((+(arr_27 [i_3] [i_3] [i_5] [i_3] [i_4])))));
                    }
                    arr_40 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)65)) || (((/* implicit */_Bool) var_8))))))));
                }
            } 
        } 
    } 
}
