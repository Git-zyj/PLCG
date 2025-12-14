/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45862
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
    var_19 = ((/* implicit */unsigned short) ((var_1) | (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) (signed char)-59))))), ((~(var_2)))))));
    var_20 = ((/* implicit */unsigned char) ((min((((var_2) << (((var_5) - (1039571868116709280LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)3))))))) % (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_15))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_1 [(signed char)1]))))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-1)))))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((short) ((unsigned short) var_17)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2] [i_2] [i_2 + 1]))));
                        arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -7554914798910834981LL))))) % (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_5 [i_3] [i_2] [(signed char)6]))))));
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_4])) ? ((-(((long long int) arr_14 [i_4] [i_2] [i_1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+((~(((long long int) (unsigned char)0)))))))));
                            var_25 = ((/* implicit */unsigned short) arr_5 [i_0] [i_4] [i_4]);
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_26 &= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)73))))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_12))))))))));
                            var_28 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)14]))) : (7967640567899798172LL))) | (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                            arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_2] [i_2] [i_0 - 1] &= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) min(((signed char)59), (arr_19 [i_6] [i_1] [i_2] [i_4] [i_6] [i_6])))) != (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_14 [i_6] [i_2] [i_1] [i_0]))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        arr_24 [16LL] [i_0] [i_0] [i_0] [i_7] [i_7] &= ((/* implicit */long long int) max(((signed char)-11), ((signed char)0)));
                        var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((signed char) (signed char)1))) : ((-(((/* implicit */int) arr_4 [i_7] [i_2 - 1] [i_0]))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_30 = max(((unsigned char)173), (((/* implicit */unsigned char) (signed char)89)));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(unsigned short)7] [i_1 - 1] [(unsigned short)7]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1])) % (((/* implicit */int) (short)-7992))))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_20 [i_0])))) ? ((-(((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0 + 1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [8LL])))))));
                        var_33 += ((/* implicit */unsigned short) (((~(144115050636902400LL))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 - 2]) <= (arr_0 [i_0 + 1])))))));
                        arr_27 [i_0] [i_1] [i_2] [i_2] [(signed char)4] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_8 [i_2 + 1]))) : (((/* implicit */int) var_8))));
                    }
                    var_34 = ((/* implicit */long long int) ((signed char) (((!(((/* implicit */_Bool) (short)-23748)))) ? (((long long int) (unsigned short)50481)) : (((((/* implicit */_Bool) (signed char)0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((signed char) var_6)))));
}
