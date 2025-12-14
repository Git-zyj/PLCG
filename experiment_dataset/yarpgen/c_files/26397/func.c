/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26397
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_3))) % (((((/* implicit */_Bool) (short)-17575)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53688)))))) >> (((var_0) - (949326761)))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_7 [5])) : (((/* implicit */int) ((short) (signed char)0))))), (((/* implicit */int) ((signed char) arr_1 [i_2 + 1]))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38601)) >> (((((/* implicit */int) (unsigned short)38601)) - (38580)))));
                    arr_9 [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) ((unsigned short) var_9)))))), (((((/* implicit */_Bool) (unsigned short)38601)) ? (min((1876968333517417120ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)4])))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) ((min((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_2 [(signed char)11] [(unsigned char)9])))) > (((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned short)26951), (((/* implicit */unsigned short) (signed char)67))))))))));
        var_15 *= ((/* implicit */unsigned long long int) arr_2 [8U] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_16 [i_3] [(signed char)9] [i_5])))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_0 [i_5]))))) ? (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4] [(unsigned short)6]))) : (arr_17 [i_3] [i_4] [i_5] [i_4]))) : (((/* implicit */unsigned int) ((arr_0 [i_5]) ? (((/* implicit */int) (short)-11591)) : (((/* implicit */int) (signed char)-22)))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) arr_12 [(_Bool)1])) != (5374492283105485047LL)))) ^ (((int) arr_7 [(unsigned short)5]))));
                    var_19 += ((/* implicit */int) ((unsigned short) var_6));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)2731))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))))));
        var_20 -= ((/* implicit */unsigned long long int) ((unsigned short) 2343080470058391572LL));
        arr_19 [(unsigned char)19] [i_3] = ((/* implicit */unsigned long long int) ((short) var_2));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3])))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_22 = ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) * (3022775911U))) >> (((/* implicit */int) ((((/* implicit */int) (short)-183)) != (((/* implicit */int) (short)17835))))));
        arr_22 [i_6] = ((/* implicit */unsigned char) ((((int) (unsigned short)3890)) >> (((long long int) min((1U), (((/* implicit */unsigned int) arr_20 [i_6])))))));
        arr_23 [i_6] = ((/* implicit */int) arr_6 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned int i_9 = 4; i_9 < 23; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) var_6);
                        var_24 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 511U)) ? (((/* implicit */int) (unsigned short)47230)) : (((/* implicit */int) (unsigned short)0)))) : ((~(var_0)))));
                        var_25 = ((/* implicit */short) ((((-1LL) + (9223372036854775807LL))) >> (((-1929915492) + (1929915518)))));
                        var_26 = (((((+(((/* implicit */int) (signed char)-96)))) + (2147483647))) << ((((((~(((/* implicit */int) ((_Bool) var_8))))) + (16))) - (14))));
                        arr_37 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(arr_33 [9U]))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8])))))) ? (((((/* implicit */int) (unsigned short)38621)) >> (((611955345) - (611955315))))) : (min((arr_20 [i_9 - 4]), (((/* implicit */int) arr_5 [i_9 - 2] [i_10 - 1]))))));
                    }
                } 
            } 
        } 
        var_27 = ((unsigned short) arr_21 [i_7] [i_7]);
        var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    }
}
