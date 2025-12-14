/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215595
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_4 [i_0] [15] [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((-689448798) / (((/* implicit */int) var_3))))))) ^ (((/* implicit */unsigned long long int) max(((+(var_14))), ((+(((/* implicit */int) (signed char)63)))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 1497389102)))))) ? ((((!(((/* implicit */_Bool) var_1)))) ? (var_8) : (((((/* implicit */_Bool) (unsigned short)31762)) ? (var_13) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    var_17 = (-(((((/* implicit */int) (unsigned short)50362)) / (var_14))));
                }
                for (short i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_18 *= max((((/* implicit */int) ((((/* implicit */int) (signed char)54)) < (((/* implicit */int) arr_11 [i_0] [i_0] [i_3 - 1]))))), (((max((var_1), (((/* implicit */int) var_2)))) - ((-(-1787228849))))));
                    arr_12 [i_0] [i_1] [i_1] [i_3 + 1] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) + (8486711876134207821ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)38019)))))), (((/* implicit */int) (_Bool)1)));
                }
                for (short i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) (short)-3078);
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((234066278) - (((/* implicit */int) (_Bool)1)))));
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_9 [i_4] [i_4] [i_4] [i_4])), ((signed char)46)))) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (870791198))))) * ((+((-(((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(max((0), (((/* implicit */int) (signed char)46))))));
                    var_22 = ((/* implicit */_Bool) max((397108620), (((/* implicit */int) (unsigned char)37))));
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    var_23 += ((/* implicit */int) var_11);
                    arr_24 [i_7] [(unsigned char)4] [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [19U] [i_7])) * (((/* implicit */int) (unsigned short)96))))) && (arr_6 [i_1 - 1] [i_7 + 4])));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((unsigned short)38418), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned char) (signed char)50);
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 14; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (long long int i_11 = 2; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_9 - 1] [i_9 + 1] [i_11 - 1] [i_9]))));
                        var_26 += ((/* implicit */_Bool) ((signed char) var_13));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8]))));
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40963)))))));
        arr_38 [i_8] [i_8] = ((/* implicit */_Bool) var_5);
    }
}
