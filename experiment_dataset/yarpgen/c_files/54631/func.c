/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54631
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
    var_11 |= ((/* implicit */_Bool) min((var_6), (var_2)));
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_13 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)0])) && (((/* implicit */_Bool) (unsigned short)18989))))), (((unsigned int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)41832))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_14 = (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) > (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46547))))))));
                            var_15 ^= ((/* implicit */unsigned short) max((17282897303587533724ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(_Bool)1] [(unsigned short)10] [i_4] [i_4])) % (((((/* implicit */_Bool) (short)-12417)) ? (1470651431) : (((/* implicit */int) arr_9 [i_3])))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_9 [i_1])), ((unsigned short)46551)));
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19001)))))));
                        }
                        var_18 = ((/* implicit */signed char) (unsigned char)192);
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))));
                        var_20 = ((/* implicit */short) (signed char)-48);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    {
                        var_21 = (unsigned short)18979;
                        var_22 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)12425)) & (((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_2 [i_0 + 1])) << (((((/* implicit */int) (unsigned char)55)) - (38))))) : (((((/* implicit */int) arr_7 [i_0] [i_6] [i_7] [i_8 - 1])) ^ (((/* implicit */int) (signed char)56))))))), (((14793854118687287931ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-29372)))) | (((/* implicit */int) min((var_9), ((unsigned short)46547))))))) && (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)131)), (var_9)))) << (((((var_1) << (((((/* implicit */int) (unsigned short)46547)) - (46517))))) - (3221225459U)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (unsigned short i_11 = 1; i_11 < 17; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        arr_36 [(_Bool)1] [i_11] [8LL] [(signed char)7] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (signed char)55)))));
                        arr_37 [i_9] [i_12 + 1] [i_11] [i_12 + 1] [i_10] = ((/* implicit */short) arr_35 [i_9] [i_10] [i_11] [(short)17]);
                        arr_38 [(unsigned short)10] [i_10] [i_11 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_33 [i_12 - 1] [(unsigned short)13] [i_12] [i_12 + 4] [i_10])))));
                        var_24 = ((/* implicit */short) var_7);
                    }
                    var_25 = ((/* implicit */signed char) (unsigned short)18989);
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) (-((~(arr_24 [i_9])))));
                                var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)19016)))) == (((((((-1LL) + (9223372036854775807LL))) >> (0ULL))) << (((((/* implicit */int) arr_35 [(unsigned char)9] [(unsigned char)14] [i_9] [i_10])) - (141)))))));
                                var_28 = ((/* implicit */unsigned short) max((arr_29 [i_13]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-12412)), ((unsigned short)12576)))), (min((((/* implicit */unsigned int) arr_27 [(short)7] [6] [i_14])), (arr_41 [i_10] [i_11] [i_10] [i_13]))))))));
                                var_29 &= ((/* implicit */unsigned int) arr_28 [i_9] [i_10] [13ULL]);
                            }
                        } 
                    } 
                    var_30 |= ((/* implicit */unsigned char) min((var_2), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)12420)) && (((/* implicit */_Bool) min(((short)-12417), (((/* implicit */short) arr_32 [i_10]))))))))));
                    var_31 |= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)10313)) ^ (((/* implicit */int) arr_34 [i_10] [i_11 + 1] [i_11 + 1] [(short)2] [i_11 + 1])))) == (((/* implicit */int) arr_34 [(short)1] [(unsigned short)14] [i_11] [i_10] [i_9]))));
                }
            } 
        } 
        arr_44 [7U] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */short) arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), ((short)2467)))), (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)119)), ((unsigned short)40595)))) ^ (((/* implicit */int) arr_40 [(_Bool)1] [i_9] [i_9] [i_9]))))));
    }
}
