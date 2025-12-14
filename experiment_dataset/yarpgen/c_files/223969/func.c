/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223969
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) arr_1 [i_0])))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_10 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-122))) ? (arr_2 [i_3] [i_1]) : (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)7] [i_3]))))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (min((16202484696099300620ULL), (((/* implicit */unsigned long long int) (_Bool)0)))));
                        var_11 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_8 [(short)4] [i_1] [i_2] [i_3])) >> (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))))));
                        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) var_7)) % ((-(((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [8ULL])))))))));
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_1] [(_Bool)0])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((((/* implicit */int) (unsigned char)255)) - (240)))))) ? (((/* implicit */int) (unsigned short)8578)) : (((var_3) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [(unsigned char)4])) : (((/* implicit */int) (_Bool)1))))))))))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((((/* implicit */_Bool) -1650878679)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)187)))) : (((/* implicit */int) var_6)))))))));
                    }
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) / (-718476760)))))) ? (((/* implicit */int) ((short) ((signed char) arr_1 [i_1])))) : (((/* implicit */int) min((arr_8 [i_2] [i_2] [i_2] [(unsigned char)9]), (arr_8 [i_0] [i_1] [i_1] [i_2]))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_4] [i_0] [i_0] = ((/* implicit */short) (~(((4847251865389249451LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))))));
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_8 [0ULL] [(_Bool)1] [i_0] [i_0])), (1299911138))))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_4])) > (((718476759) - (((/* implicit */int) (_Bool)1)))))))));
                }
                for (int i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_7))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_17 = ((((((/* implicit */int) arr_9 [i_0] [i_5 - 2] [i_5] [i_0] [i_6])) != (((/* implicit */int) arr_9 [i_1] [i_5 + 1] [i_1] [i_0] [i_6])))) || (((/* implicit */_Bool) arr_3 [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_6 + 2] [i_1] [i_6 + 2] [i_1] [i_5 - 2])) : (((/* implicit */int) arr_0 [i_6] [i_6 + 2])))))))));
                            var_19 = ((/* implicit */unsigned int) ((arr_21 [(_Bool)0] [i_5] [i_6]) % (((var_3) ? (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 3] [i_5 - 2] [i_6 + 2] [i_7]))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_6))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (max((((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                            var_22 = ((/* implicit */int) arr_10 [i_5] [i_6]);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) -718476760)) ? ((-((+(arr_21 [i_5 - 3] [i_6 + 2] [i_8]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_8 [i_6] [i_8 + 1] [i_8] [i_8])) : (((((/* implicit */_Bool) 1944893337)) ? (((/* implicit */int) arr_10 [i_0] [i_8])) : (((/* implicit */int) var_4)))))))))));
                            var_24 = ((/* implicit */short) arr_10 [i_5] [i_5]);
                        }
                        var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) (short)32767))))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) 1299911138)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_6)))))));
    var_27 = ((/* implicit */_Bool) var_0);
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (var_3))))));
}
