/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33402
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) << (((max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_17)))))) - (24006)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((var_15) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_7 [7LL] [i_1] = ((/* implicit */long long int) var_7);
            arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) (short)-2320))))) ^ (((/* implicit */int) arr_3 [i_0] [(_Bool)1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (short)2319)))), (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
            arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2320)) ? (max(((~(((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))) : ((+(((/* implicit */int) ((unsigned char) var_10)))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) max(((short)-1402), (var_9)))) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_2] [i_0]))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_22 += ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_10 [i_3])))));
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_0] [12LL] [i_4] [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-2320)) + (2147483647))) << (((((/* implicit */int) (short)32760)) - (32760)))));
                        arr_21 [13LL] [13LL] [i_4] [i_5] = ((/* implicit */unsigned short) arr_19 [i_0]);
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        arr_26 [i_6] = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) : ((-(max((((/* implicit */long long int) (short)2319)), (-4076981509928825773LL)))))));
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) var_6)), (arr_1 [i_0]))))));
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((+(var_8))))))));
                        var_25 = ((((((/* implicit */_Bool) (short)29927)) ? (((/* implicit */int) (short)2320)) : (((/* implicit */int) (unsigned char)0)))) > ((-(((/* implicit */int) arr_29 [i_0] [i_3] [i_3] [i_7])))));
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) var_19)) * (((/* implicit */int) arr_19 [i_0])))), (((((/* implicit */int) arr_9 [i_0])) / (((/* implicit */int) arr_19 [i_0]))))));
                        arr_32 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_3] [i_4] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)29927)) <= (((/* implicit */int) arr_22 [i_0] [(unsigned short)13] [i_4] [i_4]))))) : ((~(((/* implicit */int) arr_22 [(signed char)12] [i_3] [i_4] [i_8]))))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) min(((short)-1402), ((short)-2336)));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (((~(((/* implicit */int) min((var_9), (((/* implicit */short) arr_14 [i_3] [i_4] [i_3]))))))) ^ (((/* implicit */int) min(((short)-2319), ((short)-1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_37 [i_3] [i_3] [(short)1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
                            var_28 = ((/* implicit */_Bool) max(((short)29927), (((/* implicit */short) (_Bool)0))));
                            arr_38 [i_0] [i_3] [i_3] [(_Bool)1] [(unsigned short)8] [i_4] [(unsigned char)2] = ((/* implicit */_Bool) arr_28 [i_0] [i_3] [(short)9] [9LL]);
                            arr_39 [i_0] [i_3] [(unsigned short)7] [(unsigned short)7] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29949)) ? (((/* implicit */int) (short)-2320)) : (((/* implicit */int) (unsigned short)1023))))), (min((var_12), (((/* implicit */long long int) arr_9 [i_9]))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_18)))))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) var_18)))))))));
                        }
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> ((((-((+(((/* implicit */int) var_14)))))) + (1561))))))));
    }
}
