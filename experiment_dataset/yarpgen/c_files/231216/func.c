/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231216
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
    var_16 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), ((~(var_8)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (_Bool)1);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)108)));
        arr_4 [i_0] = 15025010162318419382ULL;
        arr_5 [3U] = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 10685897512262260910ULL))))), (arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51090))) <= (arr_9 [i_1] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)50617)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) : (max((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)66)))))) && (((/* implicit */_Bool) ((short) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                        arr_20 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) && (((/* implicit */_Bool) 2342011415010426111LL))))), (var_13)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)17)))) ? (((/* implicit */long long int) var_0)) : (min((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (unsigned char)154))))), (((((/* implicit */_Bool) (signed char)-77)) ? (arr_18 [i_5] [(unsigned char)18] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5])))))))));
        var_20 = ((/* implicit */unsigned char) var_0);
        var_21 ^= ((/* implicit */_Bool) arr_22 [13]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) / (arr_9 [i_5] [i_5]))) : (((/* implicit */long long int) (+(var_14)))))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) (unsigned short)4646)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12288))) : (-8646973396741187613LL))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned char)1] [i_6] [i_6] [i_6])))));
                        arr_33 [i_9] [i_8] [i_7] [i_9] = ((/* implicit */unsigned char) 12ULL);
                        var_24 = ((/* implicit */unsigned short) arr_29 [13ULL] [i_7] [i_7]);
                    }
                } 
            } 
        } 
        arr_34 [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned char)240))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((((/* implicit */_Bool) max((4611686018427387903LL), (((/* implicit */long long int) (unsigned char)58))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)189), (((/* implicit */unsigned char) (signed char)2)))))) : (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned int) -1224566312)) : (var_8))))) : (var_0)));
    }
}
