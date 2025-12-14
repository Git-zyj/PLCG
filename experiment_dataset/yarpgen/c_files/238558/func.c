/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238558
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
    var_18 = ((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) : (0U))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : ((~((+(arr_3 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
        var_20 = ((/* implicit */int) arr_2 [2ULL] [2ULL]);
        var_21 = ((/* implicit */unsigned char) min((-7954779333675575935LL), (-1169934717859725062LL)));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_22 = (unsigned short)65511;
            arr_7 [i_0] = (unsigned char)64;
        }
        for (long long int i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (arr_0 [i_2])));
            arr_12 [i_0] [10ULL] [i_0] = ((/* implicit */unsigned long long int) ((short) (unsigned char)244));
        }
        for (long long int i_3 = 2; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13099644298666274362ULL)) && (((/* implicit */_Bool) (unsigned char)14))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 11; i_5 += 1) 
                {
                    var_25 = ((/* implicit */long long int) arr_2 [i_0] [i_5 + 1]);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)127))));
                        var_27 = ((/* implicit */long long int) ((arr_3 [i_5 - 1]) | (arr_3 [i_5 - 1])));
                    }
                    arr_26 [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                }
                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [(unsigned char)2]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_0] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_4]))))) : (((long long int) (unsigned short)8166))));
            }
            for (short i_7 = 2; i_7 < 9; i_7 += 1) 
            {
                var_29 = ((/* implicit */int) var_10);
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    var_30 = ((/* implicit */signed char) var_3);
                    var_31 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [(unsigned char)7] [i_0])) ? (((/* implicit */long long int) arr_14 [i_3] [i_0])) : (-1169934717859725055LL))), (((/* implicit */long long int) (~(var_3))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) (unsigned char)16);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (4294967295U)));
                        var_34 = ((/* implicit */int) 12672112788212299688ULL);
                    }
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    arr_38 [i_0] [(short)0] [i_7] [i_10] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)11))));
                    var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) != (17105119956441515395ULL)))) != (((/* implicit */int) arr_30 [i_0] [i_0] [i_7] [i_10]))));
                    arr_39 [i_0] [(_Bool)1] [8ULL] [10U] [i_10 + 1] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) (unsigned short)38704))))) : (((arr_36 [9LL]) ? (1169934717859725046LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32766)))))));
                    arr_40 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((18446744073709551603ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
                }
                arr_41 [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) < (9208476585867497309ULL))))) ^ (((((unsigned long long int) arr_1 [i_0])) ^ (((((/* implicit */_Bool) 1974577679)) ? (11799601783776391911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_46 [i_0] [i_3] [i_0] [i_3] [5LL] [i_3 - 2] = ((/* implicit */_Bool) min((((/* implicit */int) arr_28 [11ULL] [i_7 + 2] [(signed char)2] [i_0])), (((((/* implicit */_Bool) arr_27 [i_3] [i_3 - 1] [i_11])) ? (((/* implicit */int) arr_28 [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_27 [(unsigned short)5] [i_3 - 1] [(unsigned short)5]))))));
                            var_36 = ((/* implicit */long long int) arr_9 [i_0]);
                            arr_47 [i_0] [i_3] [i_3] [i_7] [(signed char)6] [i_0] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                arr_48 [i_0] = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_34 [i_7] [i_7 + 2] [i_7 - 2] [i_7])))));
            }
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3 - 2]))) != (min((19514922U), (((/* implicit */unsigned int) var_4))))))) >> (((max(((~(3363398348664867407LL))), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (3363398348664867406LL))))) + (19311LL)))));
            var_37 = ((/* implicit */unsigned long long int) (unsigned short)39978);
        }
    }
}
