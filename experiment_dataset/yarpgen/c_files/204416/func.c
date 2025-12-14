/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204416
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
    var_20 = ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
    var_21 = ((/* implicit */unsigned int) var_4);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1))))), ((-(var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_23 = (-(((/* implicit */int) ((arr_1 [i_0] [i_1 - 3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (((unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_0]))))));
                        arr_11 [i_1] [i_0] = ((/* implicit */unsigned short) ((max(((_Bool)1), (arr_8 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 3]))) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_1)))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (signed char)72))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))));
                        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_2] [(unsigned char)4] [(unsigned char)4] [i_2])) : (((/* implicit */int) arr_8 [i_2] [(unsigned char)16] [i_1] [i_3]))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_2] [i_3] [i_3] [i_3]))) : ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((max((var_1), (((/* implicit */short) (unsigned char)0)))), (((/* implicit */short) var_10))));
                                var_27 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -132187844)) ? (arr_4 [i_2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (arr_17 [(unsigned char)18] [i_1] [(unsigned char)22] [i_5]))));
                                arr_18 [i_0] [11U] [11U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (max((((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))))))));
                                arr_19 [i_0] [i_4] [i_2] [i_4 - 1] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_2] [i_1])), ((unsigned short)20121)))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) arr_15 [i_5])))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_6) : (arr_17 [(unsigned short)9] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) arr_16 [i_0] [i_0]))))) ? (min((132187856), (((/* implicit */int) arr_16 [i_0] [i_0])))) : (min((((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_0])) < (var_17)))), (-132187856)))));
                }
                for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    var_28 = ((/* implicit */signed char) ((((var_15) ? (((/* implicit */int) (_Bool)1)) : (max((-132187851), (((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) max((((/* implicit */unsigned short) var_19)), (arr_23 [i_0] [i_6 + 1] [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */int) max(((((_Bool)0) ? (arr_14 [i_0] [i_6 + 1] [i_6 + 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((long long int) var_2)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))))));
                        var_30 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((arr_14 [i_0] [(signed char)23] [i_6 + 1] [i_6 + 1]) << (((var_2) - (2718032657588851256ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_10)) == (((/* implicit */int) var_0)))), (var_10))))));
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-132187857) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))) ^ (((int) (_Bool)1))));
                        var_31 = ((/* implicit */_Bool) var_9);
                    }
                    var_32 = ((unsigned long long int) max((var_4), (((/* implicit */long long int) var_19))));
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) -132187856))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(var_15))))))));
                }
                var_33 = ((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)0)))) * (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_1 + 1])) ? (arr_25 [i_1 + 2] [i_0] [i_0] [i_1 - 3]) : (var_12)))));
                arr_32 [(unsigned short)19] [i_0] = 1522675066;
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_14)))))))));
}
