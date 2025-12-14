/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199838
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (var_4)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_20 = ((min((var_14), ((~(16446886460484543981ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (3024574924210350097LL)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */int) 3024574924210350078LL);
                            var_22 -= ((((((/* implicit */int) arr_5 [i_3])) > (((/* implicit */int) var_10)))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */unsigned long long int) (~(arr_3 [i_0 + 1])))));
                            var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) min((2464289738275816540ULL), (((/* implicit */unsigned long long int) var_0))))))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_18)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_11 [i_0 + 2])), (16446886460484543981ULL))), (((/* implicit */unsigned long long int) (+(arr_11 [i_0 + 3]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_0 + 3])) || (((/* implicit */_Bool) 6313290067240159613LL))));
                    var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (var_12)));
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_4])) < (var_5)));
                    arr_15 [i_4] [i_1] [i_4] [i_1] |= ((/* implicit */short) arr_4 [i_4] [i_4]);
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [14U] [i_4])) && (((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_4])))))));
                }
                for (int i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) + (((/* implicit */int) arr_17 [i_0] [i_0 + 2] [(unsigned short)17] [i_0 + 2])))))));
                    var_31 = (-(((/* implicit */int) max((arr_5 [i_0 - 1]), (((/* implicit */unsigned short) var_8))))));
                }
                var_32 = min((((unsigned long long int) min((2464289738275816540ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1]))))), (arr_9 [i_1] [i_0]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
    {
        var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) max((var_8), (((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)-25871)))))))) : (arr_21 [i_6] [i_6])));
        var_34 += ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (7697006019594976548ULL))), (((/* implicit */unsigned long long int) 2130706140)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 6162981885420614918ULL))))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [1U] [1U] [i_6] [i_6])), (var_16)))))))));
    }
    for (long long int i_7 = 2; i_7 < 12; i_7 += 2) 
    {
        var_35 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) == (((/* implicit */int) var_7)))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), (var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (var_3))))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (2464289738275816540ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_9))))) || (((arr_1 [i_7]) <= (((/* implicit */int) var_6)))))) || (min(((!(var_10))), ((!(((/* implicit */_Bool) var_12))))))));
        var_37 = var_9;
        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2730089280523194070LL) & (var_4)))) ? (((((/* implicit */unsigned long long int) arr_23 [i_7] [i_7 + 3])) | (1545474027669910637ULL))) : (((/* implicit */unsigned long long int) arr_12 [i_7 - 2] [i_7] [i_7 + 2] [i_7 - 1] [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-4099503620507311046LL))))));
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
    {
        var_39 = ((/* implicit */signed char) ((((/* implicit */int) (!(((16483968044324072313ULL) == (10173951296684632968ULL)))))) / (((/* implicit */int) ((short) ((18446744073709551591ULL) * (var_15)))))));
        arr_27 [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1962776029385479302ULL)) && (((/* implicit */_Bool) var_17)))))) > (((unsigned int) arr_24 [i_8 + 1]))));
        arr_28 [i_8] = ((/* implicit */unsigned char) ((max((arr_16 [i_8 - 1] [i_8 + 1] [i_8] [i_8]), (var_5))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_8 + 1] [i_8 + 1])), (arr_22 [i_8 + 1]))))));
        var_40 = ((/* implicit */int) (short)4940);
    }
    var_41 = ((/* implicit */long long int) ((var_17) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((-6313290067240159614LL) + (9223372036854775807LL))) >> (((var_12) - (893873441809062283ULL)))))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (4294967295U)))))))));
}
