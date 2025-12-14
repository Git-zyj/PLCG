/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201824
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)2518)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((long long int) arr_1 [i_0]))));
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (3162043018561684052LL) : (((/* implicit */long long int) -83225318))))) ? (((/* implicit */unsigned int) (+((+(1189050284)))))) : (((unsigned int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (-8575968607308863197LL)))))))));
                        var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((130078586), (var_4)))) : (((((/* implicit */_Bool) -3162043018561684030LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 6144U))))))));
                    }
                } 
            } 
        } 
        var_15 = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) ((short) (_Bool)0)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))))), ((-(arr_4 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) ((short) var_6))) ^ (((((/* implicit */_Bool) 562949684985856LL)) ? (var_4) : (var_7)))));
            var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)-4724)) ? (arr_12 [i_4] [i_4]) : (((((/* implicit */_Bool) 3236306614U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))))));
        }
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_21 [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_16 [i_6] [i_7])), (((arr_15 [i_4 + 1]) ? (min((1970921316), (arr_20 [i_7] [14U]))) : (((/* implicit */int) arr_15 [i_4]))))));
                    var_18 = (unsigned char)163;
                    var_19 = ((/* implicit */int) arr_12 [i_6] [i_7]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_24 [i_4] [12LL] [i_8] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min(((short)-27778), ((short)14)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-16899)) : (-1523355991))) : (((int) arr_22 [i_4] [i_4] [i_8])))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_13 [i_8]))));
            arr_25 [i_4 - 1] [i_4 - 2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) arr_14 [i_4 - 1])))) : ((-(min((var_4), (((/* implicit */int) (unsigned char)102))))))));
            arr_26 [i_8] [(unsigned char)11] = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)16891)) : (2134183133)))) ? ((-(arr_12 [i_4 - 1] [i_4 - 1]))) : (((/* implicit */unsigned int) var_8)));
        }
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            arr_29 [i_9] [i_9] [i_9] = ((/* implicit */int) (unsigned char)252);
            var_21 += ((/* implicit */long long int) ((unsigned char) (~(min((var_11), (((/* implicit */int) (unsigned short)50882)))))));
        }
    }
    for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
    {
        arr_34 [4LL] [i_10 + 1] = min((min((min((arr_19 [i_10] [(short)0] [i_10]), (((/* implicit */int) arr_33 [i_10] [i_10])))), ((~(((/* implicit */int) (_Bool)1)))))), (arr_19 [i_10] [i_10 + 1] [i_10 + 1]));
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1334233492U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30835)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)206))) : (arr_27 [i_10 - 2] [i_10] [i_10 + 1])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42296)) ? (var_7) : (((/* implicit */int) arr_14 [13U]))))), (arr_32 [i_10 - 2]))) : (((((_Bool) arr_32 [(unsigned char)14])) ? (((((/* implicit */_Bool) arr_14 [i_10 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25037))) : (arr_23 [i_10] [i_10]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10879)))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_10 - 1] [13LL]))))) ? (((((/* implicit */int) arr_14 [i_10 - 1])) - (arr_27 [i_10 - 1] [i_10 + 1] [i_10 - 2]))) : (min((((/* implicit */int) arr_15 [i_10])), (var_4))))))));
    }
    var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11))))));
    var_25 *= ((/* implicit */short) var_11);
    var_26 = ((/* implicit */unsigned char) 23U);
}
