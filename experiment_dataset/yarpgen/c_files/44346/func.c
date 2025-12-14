/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44346
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (8179903635998779030LL)))) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2280899530U)))))));
        arr_3 [9] [i_0] = ((/* implicit */short) var_11);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((max((max((-4726219598626092120LL), (((/* implicit */long long int) 1981516385)))), (((/* implicit */long long int) (unsigned char)171)))) + (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_13))))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)24034))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-1)))) : (max((-1627534535), (((/* implicit */int) (short)-24027)))))) : ((-(((/* implicit */int) var_3)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_4] [i_3] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) max(((+(var_18))), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) < (var_15))))))));
                                arr_17 [22U] [i_4] = ((/* implicit */unsigned short) max(((-((-(-1981516389))))), (((/* implicit */int) (((~(((/* implicit */int) var_7)))) > (((/* implicit */int) ((_Bool) var_12))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-43)), ((unsigned char)16)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 22; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_11))));
                        arr_29 [i_5] [(unsigned short)2] [i_7] [i_8] = ((/* implicit */long long int) ((unsigned long long int) 3176493575U));
                    }
                    arr_30 [4U] [i_5] [(_Bool)1] [i_5] = ((/* implicit */short) (-(((var_1) % (((/* implicit */int) (unsigned char)75))))));
                    arr_31 [i_5] [i_5] [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (+(0))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) 
            {
                {
                    arr_39 [i_5] [i_10] [i_9] [i_5] = ((/* implicit */unsigned char) var_14);
                    var_23 = ((/* implicit */unsigned short) ((long long int) var_10));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6332274823053848237LL)) ? (((/* implicit */int) (unsigned short)25348)) : (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) 1162785919U));
                    var_26 = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((long long int) var_18));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 2147483630)) ? (var_5) : (((/* implicit */int) (unsigned char)56))))))) ? (((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */int) var_9)), (var_18))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_7))));
}
