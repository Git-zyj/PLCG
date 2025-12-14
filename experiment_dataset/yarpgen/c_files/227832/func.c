/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227832
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
    var_16 = var_12;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)117)), ((short)32759)));
                    arr_8 [i_1 - 3] [i_1] = ((/* implicit */unsigned short) (short)-32744);
                }
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-419)))), (((/* implicit */int) arr_2 [i_0] [i_1]))));
                        arr_14 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_3] [i_1 - 2] [i_1])))))) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_1] [i_0])) ? (-2077775542) : (((/* implicit */int) (signed char)-117)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)0] [(_Bool)0])))))) + (2147483647))) >> (((((/* implicit */_Bool) ((unsigned int) (short)-398))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (short)-405))))));
                        arr_15 [i_0] [i_1] [i_1 - 3] [i_4] [i_3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) ((4294967275U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))))), ((short)-398)))), (max(((+(((/* implicit */int) (unsigned short)44216)))), ((+(((/* implicit */int) (short)-398))))))));
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)397)) ? (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (short)-398)) : (((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) arr_11 [(signed char)7] [(signed char)7] [i_3] [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-405))))) ? ((((!(((/* implicit */_Bool) var_1)))) ? ((-(6821442206653444009ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) : (max((11625301867056107606ULL), (((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_5])))))))));
                        arr_19 [i_1] [7ULL] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1006632960ULL)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-399))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1]))) : (11834689713042714849ULL))) : (6821442206653444009ULL)));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_24 [i_3 - 1] [i_1] [i_3] [i_3 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (arr_6 [i_3 + 1] [4U] [i_3] [i_3 - 1]) : (((/* implicit */int) var_9))));
                    }
                    arr_25 [i_1] = ((/* implicit */signed char) var_13);
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_21 = ((/* implicit */short) (+(((max((((/* implicit */unsigned long long int) 3479306555U)), (18064409799167315796ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32759)))))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_1]);
                    var_23 = ((/* implicit */int) (unsigned char)116);
                    arr_29 [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)-4435))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [2ULL] [i_1 - 1] [i_0])) ? (var_1) : (((/* implicit */int) (short)32140)))))))));
                }
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1519237643)) ? ((+(((((/* implicit */_Bool) (short)418)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-395))) : (6612054360666836767ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (signed char)97)))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1200515745483325987LL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (signed char)90))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)398)) ? (((/* implicit */int) arr_11 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_1])) : (((/* implicit */int) (unsigned short)14441))))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) > (((((/* implicit */_Bool) -5511994205749440174LL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)1] [i_1 - 1] [i_8] [i_1])))))))));
                }
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6612054360666836766ULL)) ? (((/* implicit */int) (short)32140)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14441)) % (((/* implicit */int) (short)-418))))) : ((+(382334274542235820ULL)))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_0 - 1]))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_23 [i_0 - 1] [(unsigned short)4])), (arr_6 [i_0 - 1] [10] [(short)10] [i_1])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [4LL])))))))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) (short)-8825);
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41140)) || (((/* implicit */_Bool) (unsigned short)96))));
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32140)) ? (((((/* implicit */_Bool) (~(382334274542235791ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)398))) + (5578586851872236168ULL))) : (((/* implicit */unsigned long long int) ((int) (signed char)-97))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_14)) >> (((/* implicit */int) var_0)))), (((/* implicit */int) var_0)))))));
}
