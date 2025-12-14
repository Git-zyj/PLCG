/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5333
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(unsigned char)20] [i_0 + 2] = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) + (9223367638808264704ULL))))), (((/* implicit */unsigned long long int) 279223176896970752LL))));
    }
    for (int i_1 = 3; i_1 < 7; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) arr_6 [i_1 - 3]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((_Bool) (((!(((/* implicit */_Bool) 9223376434901286912ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 4] [i_2]))) : (var_12))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) 9223367638808264728ULL);
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))), (9223367638808264704ULL))), (max(((+(2251798739943424ULL))), (((unsigned long long int) arr_5 [i_1] [i_1]))))));
        }
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            arr_14 [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)20939));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (var_18)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3])))))) ? (min((5448707063526652646ULL), (var_4))) : (((/* implicit */unsigned long long int) var_13)))))));
        }
        var_23 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1] [i_1])) ? (var_4) : (9223376434901286911ULL)))) ? (max((((/* implicit */unsigned long long int) var_13)), (9223367638808264686ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_13)))))) : (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_1 + 1] [i_1 + 3] [i_1 + 3])))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            var_24 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_15)) + (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned long long int) arr_2 [i_1])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1383615064U))))));
            arr_18 [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)181)))), (((/* implicit */int) arr_6 [i_1 + 2]))));
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((12147614834127933290ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])))))) : ((~(var_4))))))))));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)-29058)))))) * (((/* implicit */int) (short)-64))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned long long int) arr_19 [i_5] [i_5])))));
    }
    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_26 [i_6] = max((((/* implicit */unsigned long long int) var_9)), ((~((~(8589934464ULL))))));
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) (+(((unsigned int) arr_22 [i_7]))));
                arr_29 [i_6] [i_7] [i_6] = ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 939524096U)) && (((/* implicit */_Bool) var_17))))), (2689751782U)));
                arr_30 [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) min(((+(arr_23 [i_6 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8 - 1] [i_6 + 1] [i_6 - 1]))) < (arr_23 [i_6 - 1]))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((12147614834127933284ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_8 + 1])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 9223376434901286912ULL))))) : (((/* implicit */int) arr_27 [i_6] [i_7] [i_8]))));
            }
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_31 [i_7] [(_Bool)1] [i_6 - 1])))))))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 443254110U)), (((((/* implicit */_Bool) 9223367638808264714ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (9223376434901286912ULL)))))) ? (((((/* implicit */_Bool) 9223367638808264709ULL)) ? (((arr_31 [i_6] [i_7] [i_9]) - (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5050))))) : (17674064106259325635ULL)));
            }
            arr_33 [i_6] [i_6] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_25 [i_6 + 1] [(short)6] [i_6])) : (((/* implicit */int) arr_25 [i_6 + 1] [i_6] [i_6]))))), ((+(285978576338026496ULL)))));
        }
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8589934458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5053)))))) ? (((/* implicit */unsigned long long int) var_14)) : (var_16)))) ? (max((((((/* implicit */_Bool) arr_27 [8LL] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_12)) : (var_5))), (min((arr_32 [(unsigned short)20]), (((/* implicit */unsigned long long int) var_8)))))) : ((~(arr_32 [(_Bool)1]))))))));
        arr_34 [i_6] = ((/* implicit */signed char) (~(925349926U)));
        arr_35 [i_6 - 1] [i_6] = ((/* implicit */unsigned int) min(((+(var_5))), (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */long long int) arr_22 [i_6])) : (var_11))))))));
        arr_36 [i_6] [i_6] = ((/* implicit */long long int) ((signed char) arr_22 [i_6]));
    }
}
