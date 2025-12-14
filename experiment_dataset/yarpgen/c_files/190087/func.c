/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190087
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */int) arr_1 [i_0]);
            var_13 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
            var_14 = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) == ((+(((/* implicit */int) (signed char)-26))))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_2]);
            arr_7 [i_0] = (~(((/* implicit */int) arr_2 [i_2] [i_0] [i_0])));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)28)) || (((/* implicit */_Bool) arr_2 [i_2] [i_2] [(_Bool)0])))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((signed char) arr_8 [i_4] [i_4 + 1] [i_4])))));
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_5 [i_0] [i_2] [i_2]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)227)) % (((/* implicit */int) (unsigned char)3))));
        }
        var_19 -= ((/* implicit */short) arr_0 [(signed char)8] [i_0]);
        arr_13 [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (arr_4 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned short) arr_9 [i_5] [i_5] [i_5] [i_5]);
        var_21 = ((/* implicit */signed char) arr_2 [i_5] [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_15 [i_6 + 1] [i_6 - 1]);
            var_23 = ((/* implicit */long long int) ((signed char) (+(var_10))));
            arr_19 [i_5] [i_6] = ((unsigned long long int) ((((/* implicit */_Bool) (short)32457)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) : (var_5)));
        }
        for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) 
        {
            arr_24 [i_7] [i_5] = ((/* implicit */_Bool) var_11);
            /* LoopSeq 1 */
            for (int i_8 = 4; i_8 < 14; i_8 += 1) 
            {
                arr_27 [4LL] [i_7] [i_7] [i_7 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [13LL] [i_8] [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)107)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1))))));
                var_24 = ((/* implicit */signed char) arr_17 [i_5]);
                var_25 -= (signed char)-2;
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_9] [2ULL] [3ULL] = ((/* implicit */_Bool) (+((~(var_1)))));
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_7 + 3]))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11)))))))));
                        }
                    } 
                } 
                arr_35 [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_8 + 2] [i_5] [(signed char)16]))));
            }
        }
    }
    var_28 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
}
