/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50080
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) (+((+(2249566658U)))));
        var_21 = var_9;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = (~(((/* implicit */int) arr_6 [15LL])));
                    var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 2249566658U)))) && (((/* implicit */_Bool) arr_6 [i_0 - 2])))) || (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_3))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_19))))))) >= (((((/* implicit */_Bool) 2045400648U)) ? (((/* implicit */int) ((short) 2045400637U))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2249566658U)))))))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_24 = ((/* implicit */int) max(((-(2822555026U))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_3])), (-633673849))))));
        arr_10 [(unsigned char)12] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (2045400637U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))));
        var_25 |= ((/* implicit */short) var_10);
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_26 = ((/* implicit */int) var_7);
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_10))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_14 [i_4]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
                        var_29 = ((/* implicit */int) 1959753807U);
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 2; i_8 < 20; i_8 += 1) 
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (+(arr_21 [i_8]))))) & (633673848))))));
        arr_24 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_8])))) <= (arr_23 [i_8])));
        var_31 = ((/* implicit */unsigned short) min((((unsigned char) ((arr_19 [i_8] [i_8] [2LL] [i_8] [i_8]) % (((/* implicit */int) (unsigned char)148))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) (unsigned char)247))))))))));
    }
    for (int i_9 = 3; i_9 < 18; i_9 += 3) 
    {
        var_32 = ((/* implicit */int) var_2);
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    {
                        var_33 = ((/* implicit */int) var_2);
                        var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2249566659U))))), (((unsigned char) (_Bool)0))));
                        arr_34 [i_10 - 1] [i_10 - 1] [i_9] = ((/* implicit */long long int) arr_28 [i_9] [i_10 - 1]);
                        arr_35 [17] [i_10] [i_11] [i_10] = ((/* implicit */int) max((max((1021556805U), (((/* implicit */unsigned int) arr_18 [i_10 + 4] [i_9 - 1] [i_9])))), (((unsigned int) arr_13 [i_9 - 3]))));
                    }
                } 
            } 
        } 
        var_35 ^= ((/* implicit */unsigned short) var_2);
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 21; i_13 += 4) 
    {
        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))), (((((/* implicit */_Bool) var_19)) ? (arr_21 [(unsigned char)17]) : (-633673848)))))) / ((~(((unsigned int) (_Bool)1))))));
                var_37 = ((/* implicit */unsigned short) (-((-(1055425550)))));
                var_38 |= ((/* implicit */int) min(((-(4294967295U))), (0U)));
            }
        } 
    } 
    var_39 = ((((/* implicit */_Bool) (-((+(var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2223961569U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((~(var_8))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)154)) - (((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
    var_40 = ((/* implicit */unsigned char) var_8);
}
